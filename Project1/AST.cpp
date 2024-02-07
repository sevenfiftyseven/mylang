#pragma warning(disable:4146)

#include "AST.h"
#include "CodeGen.h"

Object* AST::LiteralExpression::build_value(CodeGen* codegen)
{
    switch(type) {
        case LiteralExpression::INT:
            return new Object(
                Object::Classification::VALUE,
                codegen->type("int"),
                ConstantInt::get(codegen->context, APInt(32, this->int_value)));
        case LiteralExpression::STRING:
            // we should technically be calling the string constructor with a cstring arg here.
            return new Object(
                codegen->type("cstring"),
                codegen->builder.CreateGlobalStringPtr(this->str_value)
            );
        case LiteralExpression::BOOL:
            return new Object(
                Object::Classification::VALUE,
                codegen->type("bool"),
                ConstantInt::get(Type::getInt8Ty(codegen->context), this->bool_value));
    }

    return nullptr;
}

Object* AST::IdExpression::build_value(CodeGen* codegen)
{
    return codegen->stackFrame->lookup_var(codegen, this->id);
}

Object* AST::FunctionCall::build_value(CodeGen* codegen)
{
    auto callee = this->callee->build_value(codegen);

    std::vector<Object*> fn_arguments;
    for (auto argument : this->arguments)
    {
        fn_arguments.push_back(argument->build_value(codegen));
    }

    return callee->call(codegen, fn_arguments);
}

Object* AST::BinaryOperatorExpr::build_value(CodeGen* codegen)
{
    Object* lhe = this->lhe->build_value(codegen);
    Object* rhe = this->rhe->build_value(codegen);
    if (this->op == BinaryOperatorExpr::ASSIGN)
    {
        lhe->assign(codegen, rhe);
        return lhe;
    }
    else
    {
        return lhe->type
            ->binary_operator(codegen, this->op, rhe->type)
            ->call(codegen, std::vector<Object*>({ lhe, rhe }));
    }
}

Object* AST::UnaryOperatorExpr::build_value(CodeGen* codegen)
{
    //auto expr = this->expr->build_value(codegen);
    //if (this->op == UnaryOperatorExpr::PREFIX_DEREF)
    //{
    //    auto result = codegen->builder.CreateLoad(expr->getType()->getNonOpaquePointerElementType(), expr);
    //    auto node = MDNode::get(codegen->context, MDString::get(codegen->context, "deref"));
    //    result->setMetadata("deref_flag", node);
    //    return result;
    //}
    return nullptr;
}

Object* AST::AllocExpression::build_value(CodeGen* codegen)
{
    auto hl_type = this->type->get_type(codegen);
    auto Malloc = codegen->Malloc(hl_type);

    if (this->args.size() != 1)
        throw "Invalid number of arguments on while allocating.";

    auto store_val = this->args[0]->build_value(codegen);
    codegen->builder.CreateStore(store_val->value, Malloc->value);

    return Malloc; // iirc, TryLoad needs to work differently for mallocs?
}

Object* AST::NewExpression::build_value(CodeGen* codegen)
{
    return nullptr;
}

void AST::VariableDeclStatement::build(CodeGen* codegen)
{
    auto var_type = this->type->get_type(codegen);

    //auto var = codegen->builder.CreateAlloca(
    //    var_type->underlying_type,
    //    nullptr,
    //    this->id
    //);

    //auto obj = new Object(
    //    Object::Classification::REFERENCE,
    //    var_type,
    //    var
    //);

    auto obj = var_type->create(codegen);


    if (assign_expr != nullptr)
    {
        auto assign_obj = assign_expr->build_value(codegen);
        if (assign_obj->type == obj->type)
        {
            obj->assign(codegen, assign_obj);
        }
        else
        {
            var_type->construct(codegen, obj, { assign_obj });
        }
    }
    else
    {
        var_type->construct(codegen, obj, std::vector<Object*>());
    }

    codegen->stackFrame->add_var(this->id, obj);
}

TypeMemberDefinition* AST::VariableDeclStatement::build_member(CodeGen* gen, TypeObject* type)
{
    if (is_static) {
        auto var_type = this->type->get_type(gen);
        // create static object placeholder
        Value* init_val = nullptr;
        if (assign_expr != nullptr) {
            init_val = assign_expr->build_value(gen)->value;
        }

        auto static_val = new GlobalVariable(gen->module, var_type->underlying_type, false, GlobalValue::CommonLinkage, (Constant*)init_val);
        auto static_obj = new Object(this->type->get_type(gen), static_val);

        return type->add_static_member_field(id, static_obj);
    }
    else { 
        auto field = type->add_member_field(id, this->type->get_type(gen));

        if (assign_expr != nullptr) {
            field->build_default = [this](CodeGen* g) {
                return this->assign_expr->build_value(g);
            };
        }
        return field;
    }
}

void AST::ExpressionStatement::build(CodeGen* codegen)
{
    this->expression->build_value(codegen);
}

void AST::IfStatement::build(CodeGen* codegen)
{
    build(codegen, nullptr);
}

void AST::IfStatement::build(CodeGen* codegen, llvm::BasicBlock* mergeBlock) // how do we pass mergeBlock?
{
    // Generate the condition
    Value* condition = codegen->TryLoad(this->condition->build_value(codegen));

    if (condition->getType()->isIntegerTy())
    {
        condition = codegen->builder.CreateCmp(CmpInst::Predicate::ICMP_UGT, condition, ConstantInt::get(condition->getType(), 0));
    }

    Function* function = codegen->builder.GetInsertBlock()->getParent();

    BasicBlock* entry = codegen->builder.GetInsertBlock();
    BasicBlock* thenBlock = BasicBlock::Create(codegen->context, "", function, mergeBlock);

    if (mergeBlock == nullptr)
        mergeBlock = BasicBlock::Create(codegen->context, "", function, mergeBlock);


    codegen->builder.SetInsertPoint(thenBlock);
    codegen->pushStackFrame();

    for (auto& thenStatement : body) 
        thenStatement->build(codegen); // if statements that are created here go below mergeBlock -- restructure to fix?
        // technically doesn't break anything so we wont put this as a priority

    codegen->popStackFrame();

    if (!has_exit)
        codegen->builder.CreateBr(mergeBlock); // only insert this if we dont have a return function

    if (else_clause)
    {
        BasicBlock* elseBlock = BasicBlock::Create(codegen->context, "", function, mergeBlock);
        codegen->builder.SetInsertPoint(elseBlock);
        codegen->pushStackFrame();
        if (else_clause->if_clause)
        {
            // do something else
            //generateIfStatement(ifStatement->else_clause->if_clause, mergeBlock);
            else_clause->if_clause->build(codegen, mergeBlock);
        }
        else
        {
            else_clause->build(codegen);
            if (!else_clause->has_exit)
                codegen->builder.CreateBr(mergeBlock); // only insert this if we dont have a return function
        }
        codegen->popStackFrame();

        codegen->builder.SetInsertPoint(entry);
        codegen->builder.CreateCondBr(condition, thenBlock, elseBlock);
    }
    else
    {
        codegen->builder.SetInsertPoint(entry);
        codegen->builder.CreateCondBr(condition, thenBlock, mergeBlock);
    }

    codegen->builder.SetInsertPoint(mergeBlock);
}

void AST::ElseClause::build(CodeGen* codegen)
{
    for (auto elseBody : body)
    {
        elseBody->build(codegen);
    }
}

void AST::ReturnStatement::build(CodeGen* codegen)
{
    // !TODO: cast result if necessary.
    if (expression != nullptr)
    {
        auto val = expression->build_value(codegen);
        codegen->builder.CreateRet(codegen->TryLoad(val));
    }
    else
    {
        codegen->builder.CreateRetVoid();
    }
}

void AST::BasicForStatement::build(CodeGen* codegen)
{
    Function* function = codegen->builder.GetInsertBlock()->getParent();

    // generate initializer statement

    codegen->pushStackFrame();
    init_stmt->build(codegen);

    BasicBlock* conditionBlock = BasicBlock::Create(codegen->context, "", function);
    BasicBlock* bodyBlock = BasicBlock::Create(codegen->context, "", function);
    BasicBlock* mergeBlock = BasicBlock::Create(codegen->context, "", function);

    codegen->builder.CreateBr(conditionBlock);

    codegen->builder.SetInsertPoint(conditionBlock);
    auto condition = condition_expr->build_value(codegen)->value;
    if (condition->getType()->isIntegerTy())
        condition = codegen->builder.CreateCmp(CmpInst::Predicate::ICMP_UGT, condition, ConstantInt::get(condition->getType(), 0));

    codegen->builder.CreateCondBr(condition, bodyBlock, mergeBlock);

    codegen->builder.SetInsertPoint(bodyBlock);
    for (auto stmt : body)
    {
        stmt->build(codegen);
    }

    update_expr->build_value(codegen);

    codegen->popStackFrame();

    codegen->builder.CreateBr(conditionBlock);
    codegen->builder.SetInsertPoint(mergeBlock);
}

void AST::FunctionDeclaration::build(CodeGen* codegen)
{
    TypeObject* result_type = returnType->get_type(codegen);
    std::vector<TypeObject*> argTypes;

    for (auto param_type : parameters)
    {
        argTypes.push_back(param_type->type->get_type(codegen));
    }

    auto functionType = codegen->function_type(result_type, argTypes);
    //llvm::FunctionType* functionType = llvm::FunctionType::get(
    //    result_type->underlying_type,
    //    argTypes,
    //    false
    //);

    FunctionBuilder builder(codegen, id, functionType);
    auto fn_def = builder.declare(parameters);

    if (has_body) {
        builder.define(body);
    }
}

TypeMemberDefinition* AST::FunctionDeclaration::build_member(CodeGen* gen, TypeObject* type)
{
    return nullptr;
}

Object* AST::MemberAccessExpression::build_value(CodeGen* codegen)
{
    Object* base_obj = baseExpr->build_value(codegen);

    return base_obj->get_member(codegen, identifier);
}

void AST::Node::context(antlr4::ParserRuleContext* context)
{
    text = context->getText();
    line_number = context->start->getLine();
}

TypeObject* AST::TypeReference::get_type(CodeGen* codegen)
{
    auto base_type = codegen->type(this->type);
    if (template_types.size() > 0)
    {
        std::vector<TypeObject*> resolved_template_types;
        for (auto t : template_types) resolved_template_types.push_back(t->get_type(codegen));

        return codegen->build_templated_type(base_type, resolved_template_types);
    }
    return base_type;
}

void AST::dump_tree(Node* node, int depth)
{
    auto space = [=]() {
        for (int d = 0; d < depth; d++)
            std::cout << "-";
    };
    #define print(text) space(); std::cout << text << std::endl

    if (auto program = dynamic_cast<Program*>(node))
    {
        print(" Program");

        for (auto stmt : program->statements)
            dump_tree(stmt, depth + 1);
    }
    else if (auto functionDecl = dynamic_cast<FunctionDeclaration*>(node))
    {
        print(" Function Declaration");
        dump_tree(functionDecl->returnType, depth + 1);
        print("- Identifier"); // this is kind of a hack because its not really in the tree?

        for (auto p : functionDecl->parameters)
            dump_tree(p, depth + 1);

        for (auto s : functionDecl->body)
            dump_tree(s, depth + 1);
    }
    else if (auto typeRef = dynamic_cast<TypeReference*>(node))
    {
        print(" Type Reference");
        for (auto t : typeRef->template_types)
            dump_tree(t, depth + 1);
    }
    else if (auto param = dynamic_cast<Parameter*>(node))
    {
        print(" Parameter");
        dump_tree(param->type, depth + 1);
        print("- Identifier");
    }
    else if (auto varDecl = dynamic_cast<VariableDeclStatement*>(node))
    {
        print("Variable Declaration");
        dump_tree(varDecl->type, depth + 1);
        print("- Identifier");
    }
    else if (auto exprStmt = dynamic_cast<ExpressionStatement*>(node))
    {
        dump_tree(exprStmt->expression, depth);
    }
    else if (auto binop = dynamic_cast<BinaryOperatorExpr*>(node))
    {
        print(" Binary Operator Expression");
        dump_tree(binop->lhe, depth + 1);
        dump_tree(binop->rhe, depth + 1);
    }
    else if (auto funcCall = dynamic_cast<FunctionCall*>(node))
    {
        print(" Function Call");
        dump_tree(funcCall->callee, depth + 1);
        for(auto a : funcCall->arguments) dump_tree(a, depth + 1);
    }
    else if (auto lit = dynamic_cast<LiteralExpression*>(node))
    {
        print(" Literal");
    }
    else if (auto memberAccess = dynamic_cast<MemberAccessExpression*>(node))
    {
        print(" Member Access Expression");
        dump_tree(memberAccess->baseExpr, depth + 1);
        print("- Identifier");
    }
    else if (auto retStmt = dynamic_cast<ReturnStatement*>(node))
    {
        print(" Return Statement");
        if (retStmt->expression != nullptr) {
            dump_tree(retStmt->expression, depth + 1);
        }
    }
    else if (auto id = dynamic_cast<IdExpression*>(node))
    {
        print(" Identifier");
    }
    else
    {
        print(" UNKNOWN NODE");
    }

    #undef print
}

void AST::StructDeclaration::build(CodeGen* codegen)
{
    TypeObject* type = new TypeObject();
    type->identifier = id;

    codegen->stackFrame->add_var(id, type);
    codegen->pushStackFrame();

    std::vector<Type*> field_types;
    auto struct_type = StructType::create(codegen->context);
    type->underlying_type = struct_type;

    for (auto member : members) {
        if (auto field_member = dynamic_cast<VariableDeclStatement*>(member))
        {
            auto def = field_member->build_member(codegen, type);
            field_types.push_back(def->type->underlying_type);
            
        }
    }

    struct_type->setBody(field_types);

    for (auto member : members) {
        if (auto fn_member = dynamic_cast<FunctionDeclaration*>(member))
        {
            auto definition = fn_member->build_member(codegen, type);
        }
        else if (auto cast_member = dynamic_cast<CastFunctionDeclaration*>(member))
        {
            auto definition = cast_member->build_member(codegen, type);
        }
        else if (auto constr_member = dynamic_cast<ConstructorDeclaration*>(member))
        {
            auto definition = constr_member->build_member(codegen, type);
        }
    }

    codegen->popStackFrame();
    
}

void AST::CastFunctionDeclaration::build(CodeGen* codegen)
{
}

TypeMemberDefinition* AST::CastFunctionDeclaration::build_member(CodeGen* codegen, TypeObject* type)
{
    // we need a better system for building functions than this wall of text. Also it should be DRY

    TypeObject* result_type = returnType->get_type(codegen);
    std::vector<TypeObject*> argTypes;
    argTypes.push_back(type);

    auto functionType = codegen->function_type(result_type, argTypes);
    auto id = TypeObject::cast_fn_name(type, result_type);

    // !!TODO:: FIX THIS BANDAID?
    functionType->underlying_type = FunctionType::get(result_type->underlying_type, { type->underlying_type->getPointerTo() }, false);

    FunctionBuilder builder(codegen, id, functionType);
    
    auto fn_def = builder.declare();
    auto member_def = type->add_member_function(id, fn_def);

    builder.set_binding(type);
    builder.define(body);

    return member_def;
}

Object* AST::CastExpression::build_value(CodeGen* codegen)
{
    return codegen->TryCast(
        casted_value->build_value(codegen),
        target_type->get_type(codegen)
    );
}

void AST::ConstructorDeclaration::build(CodeGen* codegen)
{
}

TypeMemberDefinition* AST::ConstructorDeclaration::build_member(CodeGen* gen, TypeObject* type)
{
    auto result_type = gen->type("void");
    std::vector<TypeObject*> argTypes;
    argTypes.push_back(type);

    for (auto param_type : parameters)
    {
        argTypes.push_back(param_type->type->get_type(gen));
    }

    auto functionType = gen->function_type(result_type, argTypes);
    auto id = TypeObject::member_fn_name(type, "constructor", gen->function_type(gen->type("void"), argTypes));

    // !!TODO:: FIX THIS BANDAID?
    functionType->underlying_type = FunctionType::get(result_type->underlying_type, { type->underlying_type->getPointerTo() }, false);

    FunctionBuilder builder(gen, id, functionType);

    auto fn_def = builder.declare(parameters);
    auto member_def = type->add_member_function(id, fn_def);

    builder.set_binding(type);
    builder.define(body);

    return member_def;
}
