#pragma warning(disable:4146)
#include "CodeGen.h"
#include <iostream>
#include "llvm/Support/raw_ostream.h"
#include <functional>

void PrintType(llvm::Type* type)
{
    // Create a raw_ostream to write the output
    llvm::raw_ostream& out = llvm::outs(); // or llvm::errs() for error output

    // Print the type to the output stream
    type->print(out);

    out << "\n";
    // Flush the output stream
    out.flush();
}

// this should probably be moved into Object? This is for when we use a value and not a reference.
// is there a case to make this implementable by the type?
Value* CodeGen::TryLoad(Object* object)
{
    // I think the usage behind reference and value are not clear.
    // currently I call something a reference and then use it as a value.
    // Originally this came because I had a reference and was using it as a value.
    // Things flagged as value can then be used as a value etc.
    // However we need to flip this. Things treated as a reference should be passed by reference.
    // Things treated as a value should be loaded before use.
    // This would fix a lot of headaches.
    
    if (object->classification == Object::REFERENCE) { // why do we do this? It seems unnecessary.
        if (llvm::isa<llvm::AllocaInst>(object->value)) {
            return builder.CreateLoad(object->type->underlying_type, object->value);
        }
        // here we are basically saying if it is a pointer and it isn't classified as one, load it.
        // I'm not sure if I LOVE this solution but it should be pretty effective.
        // to me it just says "I don't know when I should be loading" (maybe we check for GEP Instruction?)
        else if (object->value->getType()->isPointerTy() && !object->type->underlying_type->isPointerTy()) {
            return builder.CreateLoad(object->type->underlying_type, object->value);
        }
    }
    else if (object->value != nullptr && llvm::isa<llvm::Instruction>(object->value)) // this should be changed
    {
        auto node = ((Instruction*)object->value)->getMetadata("deref_flag");
        if (node && node->getNumOperands() > 0)
        {
            llvm::Metadata* metadata = node->getOperand(0).get();
            if (llvm::MDString* metadataString = llvm::dyn_cast<llvm::MDString>(metadata)) {
                // The instruction has a metadata string
                llvm::StringRef metadataValue = metadataString->getString();
                // Use metadataValue as needed
                return builder.CreateLoad(object->type->underlying_type, object->value);
            }

        }
    }
    return object->value;
}

Object* CodeGen::TryCast(Object* object, TypeObject* target)
{
    // no need to cast -- do nothing
    if (object->type == target || object->type->underlying_type == target->underlying_type)
        return object;

    auto cast_fn_name = TypeObject::cast_fn_name(object->type, target);
    auto cast_fn = object->get_member(this, cast_fn_name);

    if (cast_fn != nullptr) {
        return cast_fn->call(this, std::vector<Object*>());
    }
    // we should also check construct functions.
    if (target->has_constructor(this, { object->type }))
    {
        return target->new_instance(this, { object });
    }
    throw "Unable to cast object to target type";
}

Object* CodeGen::ConstantInt(int value)
{
    return new Object(type("int"), ConstantInt::get(context, APInt(32, value)));
}

// we need a way to simplify the functions below. It would be really nice if they could be implemented in the language itself.

void CodeGen::build_numeric_type(std::string name, llvm::Type* int_type, bool is_signed)
{
    // at some point, we need to have a flag to the compiler for inlining the operator call vs actually compiling it into a function
    auto integerType = new TypeObject();
    integerType->identifier = name;
    integerType->underlying_type = int_type;
    stackFrame->add_var(name, integerType);

    auto binary_operator_fn_type = function_type(integerType, { integerType, integerType });
    binary_operator_fn_type->system_inline = true;
    binary_operator_fn_type->is_static = true;

    auto cmp_operator_fn_type = function_type(type("bool"), { integerType, integerType });
    cmp_operator_fn_type->system_inline = true;
    cmp_operator_fn_type->is_static = true;

    auto binop_fn = [&](AST::BinaryOperatorExpr::OPERATOR op, TypeObject* fnType, std::function<Object*(CodeGen*, std::vector<Object*>)> build) {
        auto fn_name = TypeObject::member_fn_name(integerType, TypeObject::binop_fn_name(op), fnType);
        //integerType->members[fn_name] = new Object(Object::Classification::VARIABLE, fnType, function);
        auto fn_inline_def = new FunctionDefinitionObject();
        fn_inline_def->type = fnType;
        fn_inline_def->inline_body = build;

        integerType->add_member_function(fn_name, fn_inline_def);
    };

    #define build_math(fn) binary_operator_fn_type, [integerType](CodeGen* gen, std::vector<Object*> args) { return new Object(integerType, gen->fn(gen->TryLoad(args[0]), gen->TryLoad(args[1]))); }
    #define build_cmp(pred) cmp_operator_fn_type, [](CodeGen* gen, std::vector<Object*> args) { return new Object(gen->type("bool"), gen->builder.CreateCmp(pred, gen->TryLoad(args[0]), gen->TryLoad(args[1]))); }

    binop_fn(AST::BinaryOperatorExpr::EQUALITY, build_cmp(CmpInst::Predicate::ICMP_EQ));
    binop_fn(AST::BinaryOperatorExpr::ADD, build_math(builder.CreateAdd));
    binop_fn(AST::BinaryOperatorExpr::MINUS, build_math(builder.CreateSub));
    binop_fn(AST::BinaryOperatorExpr::MULT, build_math(builder.CreateMul));

    if (is_signed)
    {
        binop_fn(AST::BinaryOperatorExpr::MODULO, build_math(builder.CreateSRem));
        binop_fn(AST::BinaryOperatorExpr::DIVIDE, build_math(builder.CreateSDiv)); // we need to make a way to use different types of div
        binop_fn(AST::BinaryOperatorExpr::LESSER, build_cmp(CmpInst::Predicate::ICMP_SLT));
        binop_fn(AST::BinaryOperatorExpr::LTE, build_cmp(CmpInst::Predicate::ICMP_SLE));
        binop_fn(AST::BinaryOperatorExpr::GREATER, build_cmp(CmpInst::Predicate::ICMP_SGE));
        binop_fn(AST::BinaryOperatorExpr::GTE, build_cmp(CmpInst::Predicate::ICMP_SLT));
    }
    else
    {
        binop_fn(AST::BinaryOperatorExpr::MODULO, build_math(builder.CreateURem));
        binop_fn(AST::BinaryOperatorExpr::DIVIDE, build_math(builder.CreateUDiv)); // we need to make a way to use different types of div
        binop_fn(AST::BinaryOperatorExpr::LESSER, build_cmp(CmpInst::Predicate::ICMP_ULT));
    }

    #undef build_math
    #undef build_cmp

    auto strcast_fn_type = function_type(type("string"), { integerType });
    strcast_fn_type->system_inline = true;

    auto strcast_fn_def = new FunctionDefinitionObject();
    strcast_fn_def->type = strcast_fn_type;
    strcast_fn_def->inline_body = [](CodeGen* gen, std::vector<Object*> params) {
        auto char_array = gen->builder.CreateAlloca(
            Type::getInt8Ty(gen->context),
            gen->ConstantInt(33)->value
        );

        auto itoa_fn = gen->stackFrame->lookup_var(gen, "itoa");
        auto result = itoa_fn->call(gen, {
            params[0], // the int to convert
            new Object(gen->type("cstring"), char_array),
            gen->ConstantInt(10)
        });

        return gen->TryCast(result, gen->type("string"));
    };

    auto cast_fn_name = TypeObject::cast_fn_name(integerType, type("string"));
    integerType->add_member_function(cast_fn_name, strcast_fn_def);
}

void CodeGen::build_string()
{
    TypeObject* strtype = type("string");
    TypeObject* cstr = type("cstring");
    
    auto strlen_fn_type = function_type(type("int"), { cstr });
    auto strlen_fn = new FunctionDefinitionObject();
    strlen_fn->type = strlen_fn_type;

    strlen_fn->value = (Function*)module.getOrInsertFunction("strlen", (FunctionType*)strlen_fn_type->underlying_type).getCallee();

    strtype->add_member_function("length", strlen_fn);

    auto strcstr_cast_fn = new FunctionDefinitionObject();
    strcstr_cast_fn->type = function_type(cstr, { strtype });
    ((FunctionTypeObject*)strcstr_cast_fn->type)->system_inline = true;
    strcstr_cast_fn->inline_body = [strtype, cstr](CodeGen* gen, std::vector<Object*> params) {
        auto member = gen->builder.CreateStructGEP(strtype->underlying_type, params[0]->value, 0);
        return new Object(cstr, gen->builder.CreateLoad(Type::getInt8PtrTy(gen->context), member));
    };

    strtype->add_member_function(TypeObject::cast_fn_name(strtype, cstr), strcstr_cast_fn);

    auto str_binop_fn_type = function_type(strtype, { strtype, strtype });
    str_binop_fn_type->system_inline = true;
    str_binop_fn_type->is_static = true;

    auto str_concat = new FunctionDefinitionObject();
    str_concat->type = str_binop_fn_type;
    str_concat->inline_body = [strtype, cstr](CodeGen* gen, std::vector<Object*> args) {
        // it would be really nice to be able to write this in language...
        // this function is just really messy at the moment. It would be nice if we could fix that.

        llvm::FunctionType* strcatType = (FunctionType*)gen->function_type(cstr, { cstr, cstr })->underlying_type;
        llvm::Function* strcatFunc = (Function*)gen->module.getOrInsertFunction("strcat", strcatType).getCallee();
        llvm::Function* strcpyFunc = (Function*)gen->module.getOrInsertFunction("strcpy", strcatType).getCallee();

        // get strlen of each
        auto strlen = strtype->functions["length"];

        auto a0len = strlen->call(gen, { args[0] })->value;
        auto a1len = strlen->call(gen, { args[1] })->value;
        auto sum = gen->builder.CreateAdd(a0len, a1len); // again, use system operator not builder here
        
        auto dest = (Value*)gen->builder.CreateAlloca(Type::getInt8Ty(gen->context), sum, "");

        // we should NEVER use builder.CreateCall -- always use system calling convention. FIX IT
        // here the args will not properly be casted because we aren't using Object::Call
        gen->builder.CreateCall(strcpyFunc, { dest, gen->TryCast(args[0], cstr)->value });
        gen->builder.CreateCall(strcatFunc, { dest, gen->TryCast(args[1], cstr)->value });

        // cheaty way to cast.
        auto result = strtype->new_instance(gen, { new Object(cstr, dest) });
        result->classification = Object::REFERENCE;
        return  result;
    };

    auto concat_fn_name = TypeObject::member_fn_name(strtype, TypeObject::binop_fn_name(BinaryOperatorExpr::ADD), str_binop_fn_type);
    strtype->add_member_function(concat_fn_name, str_concat);

    auto str_cstr_constructor_type = function_type(type("void"), { strtype, cstr });
    str_cstr_constructor_type->system_inline = true;
    auto str_cstr_constructor = new FunctionDefinitionObject();
    str_cstr_constructor->type = str_cstr_constructor_type;
    str_cstr_constructor->inline_body = [str_cstr_constructor_type, strtype, cstr](CodeGen* gen, std::vector<Object*> args) {
        auto _this = args[0];
        auto sourcestr = args[1];
        auto src_len = strtype->functions["length"]->call(gen, { sourcestr });
        auto dest_len = gen->builder.CreateAdd(src_len->value, ConstantInt::get(Type::getInt32Ty(gen->context), 1));

        llvm::FunctionType* strcatType = (FunctionType*)gen->function_type(cstr, { cstr, cstr })->underlying_type;
        llvm::Function* strcpyFunc = (Function*)gen->module.getOrInsertFunction("strcpy", strcatType).getCallee();
        
        auto element_value = gen->Malloc(Type::getInt8Ty(gen->context), dest_len);
        auto element_ptr = gen->builder.CreateStructGEP((StructType*)strtype->underlying_type, _this->value, 0 );

        gen->builder.CreateCall(strcpyFunc, { element_value, sourcestr->value });

        gen->builder.CreateStore(element_value, element_ptr);

        return nullptr;
    };
    auto str_cstr_constructor_fn_name = TypeObject::member_fn_name(strtype, "constructor", str_cstr_constructor_type);
    strtype->add_member_function(str_cstr_constructor_fn_name, str_cstr_constructor);
}

void CodeGen::import_function(std::string name, TypeObject* functionType)
{
    Function* func = (Function*)module.getOrInsertFunction(name, (FunctionType*)functionType->underlying_type).getCallee();

    if (func->getCallingConv() != CallingConv::C)
    {
        func->setCallingConv(CallingConv::C);
    }

    stackFrame->add_var(name, new Object(
        Object::Classification::FUNCTION,
        functionType,
        func
    ));
}

Function* get_printf(Module* target_module, LLVMContext& context)
{
    //PointerType* Pty = Type::getInt8PtrTy(*TheContext);
    Function* func = (Function*)target_module->getOrInsertFunction("printf", FunctionType::get(
        Type::getInt32Ty(context),
        //PointerType::get(Type::getInt8Ty(*TheContext), 0),
        true
    )
    ).getCallee();

    if (func->getCallingConv() != CallingConv::C)
    {
        func->setCallingConv(CallingConv::C);
    }

    return func;
}

void CodeGen::ImportSystem()
{
    auto make_type = [&](std::string name, Type* type) {
        auto ty = new TypeObject();
        ty->identifier = name;
        ty->underlying_type = type;
        stackFrame->add_var(name, ty);
        return ty;
    };

    make_type("void", Type::getVoidTy(context));
    make_type("cstring", Type::getInt8PtrTy(context));
    make_type("string", StructType::create(
        context,
        {
            Type::getInt8PtrTy(context)
        }
    ));

    make_type("bool", Type::getInt8Ty(context));

    build_numeric_type("int", Type::getInt32Ty(context), true);
    build_string();

    auto fn_printf = get_printf(&module, context);
    TypeObject* printf_fn_type = new TypeObject();
    printf_fn_type->underlying_type = FunctionType::get(
        Type::getInt32Ty(context),
        //PointerType::get(Type::getInt8Ty(*TheContext), 0),
        true
    );
    printf_fn_type->template_types.push_back(type("int"));

    stackFrame->add_var("printf", new Object(
        Object::Classification::FUNCTION,
        printf_fn_type,
        fn_printf
    ));

    import_function("itoa", function_type(
        type("cstring"),
        {
            type("int"),
            type("cstring"),
            type("int")
        }
    ));
}

void CodeGen::generateCode(Program& program) {
    pushStackFrame(false);

    for (const auto& statement : program.statements) {
        statement->build(this);
    }
}

void CodeGen::ExportModule(const char* filename)
{
    std::error_code ec;
    raw_fd_ostream outfile(filename, ec);

    // print module out to file
    // print module to output.ll
    module.print(outfile, nullptr);
}


TypeObject* CodeGen::type(std::string type_name)
{
    // this could cause a stack overflow exception if you just spam****
    if (type_name[type_name.size() - 1] == '^')
        return type(type_name.substr(0, type_name.size() - 1)); // pointer types dont work right atm. 

    // probably use dynamic cast here and error if not a type.
    return dynamic_cast<TypeObject*>(stackFrame->lookup_var(this, type_name));
}

TypeObject* CodeGen::build_templated_type(TypeObject* base, std::vector<TypeObject*> template_types)
{
    TypeObject* type = new TypeObject();

    type->parent_type = base;

    for (auto t : template_types) type->template_types.push_back(t);

    return type;
}

FunctionTypeObject* CodeGen::function_type(TypeObject* return_type, std::vector<TypeObject*> param_types)
{
    auto type = new FunctionTypeObject();
    type->template_types.push_back(return_type);
    std::vector<Type*> param_llvm_types;

    for (auto pt : param_types) {
        param_llvm_types.push_back(pt->underlying_type);
        type->template_types.push_back(pt);
    }

    type->underlying_type = FunctionType::get(
        return_type->underlying_type,
        param_llvm_types,
        false
    );

    type->underlying_type->dump();

    return type;
}

Object* CodeGen::Malloc(TypeObject* _type, llvm::Value* size)
{
    auto Ty = _type->underlying_type;
    Type* ITy = Type::getInt32Ty(context);
    llvm::Value* AllocSize = ConstantExpr::getTruncOrBitCast(ConstantExpr::getSizeOf(Ty), ITy);

    if (size != nullptr) {
        AllocSize = builder.CreateMul(AllocSize, size);
    }

    Instruction* Malloc = CallInst::CreateMalloc(builder.GetInsertBlock(),
        ITy, Ty, AllocSize,
        nullptr, nullptr, "");

    builder.Insert(Malloc);

    return new Object(Object::Classification::REFERENCE, _type, Malloc); // iirc, TryLoad needs to work differently for mallocs?
}

llvm::Value* CodeGen::Malloc(Type* _type, llvm::Value* size)
{
    auto Ty = _type;
    Type* ITy = Type::getInt32Ty(context);
    llvm::Value* AllocSize = ConstantExpr::getTruncOrBitCast(ConstantExpr::getSizeOf(Ty), ITy);
    PrintType(Ty);

    if (size != nullptr) {
        AllocSize = builder.CreateMul(AllocSize, size);
    }

    Instruction* Malloc = CallInst::CreateMalloc(builder.GetInsertBlock(),
        ITy, Ty, AllocSize,
        nullptr, nullptr, "");

    builder.Insert(Malloc);

    return (llvm::Value*)Malloc; // iirc, TryLoad needs to work differently for mallocs?
}

void CodeGen::pushStackFrame(bool access_parent)
{
    // create a new stack frame
    auto frame = new StackFrame();
    frame->parent = stackFrame;
    stackFrame = frame;
}

void CodeGen::popStackFrame()
{
    auto currentFrame = stackFrame;
    stackFrame = currentFrame->parent;

    delete currentFrame;
}

Object* StackFrame::lookup_var(CodeGen* codegen, std::string name)
{
    if (variables.find(name) != variables.end())
        return variables[name];
    else if (this_object != nullptr && this_object->get_member(codegen, name) != nullptr)
        return this_object->get_member(codegen, name);
    else if (access_parent && parent != nullptr)
        return parent->lookup_var(codegen, name);
    else
        return nullptr;
}

void StackFrame::add_var(std::string name, Object* value)
{
    variables[name] = value;
}

FunctionBuilder::FunctionBuilder(CodeGen* codegen, std::string id, FunctionTypeObject* type)
{
    gen = codegen;
    this->id = id;
    this->type = type;
}

FunctionDefinitionObject* FunctionBuilder::declare(std::vector<Parameter*> params)
{
    Function* function = (Function*)gen->module.getOrInsertFunction(
        StringRef(id),
        (FunctionType*)type->underlying_type
    ).getCallee();

    function->setCallingConv(CallingConv::C);

    def = new FunctionDefinitionObject();
    def->value = function;
    def->type = type;

    for (auto p : params) param_names.push_back(p->id);

    return def;
}

void FunctionBuilder::define(std::vector<Statement*> statements)
{
    auto function = (Function*)def->value;
    llvm::BasicBlock* block = llvm::BasicBlock::Create(gen->context, "", function);
    gen->builder.SetInsertPoint(block);

    bool has_ret = false;
    gen->pushStackFrame(true);

    gen->stackFrame->this_object = this_object;
    for (auto var : additional_variables)
        gen->stackFrame->add_var(var.first, var.second);

    for (int i = 0; i < param_names.size(); i++)
    {
        auto arg_idx = i + (this_object == nullptr ? 0 : 1);

        Value* arg = function->getArg(arg_idx);

        // here we should check for struct_type variables and automatically allocate them onto the stack
        // alternatively we could force passing structs by a pointer to prevent copying them...
        //  - I don't love this idea as I may want to be explicit about when a struct should be copied vs when it shouldn't

        if (isa<StructType>(arg->getType())) {
            auto alloca_arg = gen->builder.CreateAlloca(arg->getType());
            gen->builder.CreateStore(arg, alloca_arg);
            gen->stackFrame->add_var(param_names[i], new Object(
                Object::Classification::REFERENCE,
                type->template_types[arg_idx + 1],
                alloca_arg
            ));
        }
        else
        {
            gen->stackFrame->add_var(param_names[i], new Object(
                Object::Classification::VALUE,
                type->template_types[arg_idx + 1],
                arg
            ));
        }
    }

    for (auto stmnt : statements)
    {
        stmnt->build(gen);
        if (auto ret_stmt = dynamic_cast<ReturnStatement*>(stmnt))
        {
            has_ret = true;
        }
    }

    if (!has_ret && ((llvm::FunctionType*)type->underlying_type)->getReturnType() == Type::getVoidTy(gen->context))
    {
        gen->builder.CreateRetVoid();
    }

    std::vector<BasicBlock*> blocksToDelete;
    // Iterate over blocks inside of function and remove any block that has no predecessors and is empty.
    for (auto& B : *function) {
        if (&B == &function->getEntryBlock()) continue; // Do not remove the entry block
        if (pred_begin(&B) == pred_end(&B) && B.empty()) {
            blocksToDelete.push_back(&B); // flag block for deletion if no instructions and no predecessors.
        }
    }
    // clear blocks flagged for deletion
    for (auto* B : blocksToDelete) {
        B->eraseFromParent();
    }

    gen->popStackFrame();
}

void FunctionBuilder::set_binding(TypeObject* type)
{
    this_object = new Object(type, ((Function*)def->value)->getArg(0));
}

void FunctionBuilder::set_variable(std::string name, Object* value)
{
    additional_variables[name] = value;
}
