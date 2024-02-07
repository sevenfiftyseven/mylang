#include "Objects.h"
#include "CodeGen.h"


Object* TypeObject::create(CodeGen* codegen, llvm::Value* value)
{   
    if (value != nullptr) {
        return new Object(this, value);
    }

    return new Object(Object::REFERENCE, this, codegen->builder.CreateAlloca(underlying_type, nullptr));
}

void TypeObject::construct(CodeGen* codegen, Object* target, std::vector<Object*> args)
{
    std::vector<TypeObject*> arg_types;
    std::vector<Object*> _args;
    _args.push_back(target);
    arg_types.push_back(this);
    
    for (auto a : args)
    {
        arg_types.push_back(a->type);
        _args.push_back(a);
    }

    auto constructor_fn_name = TypeObject::member_fn_name(this, "constructor", codegen->function_type(codegen->type("void"), arg_types));
    // I have to go so I will type out my ideas here :::: 
    // Essentially the way I want the typing system to construct new objects is similar to how meta-typing works in python.
    // you have a method that creates the new object (defined by meta type) and a method that constructs the new object.
    // for now this is the "create" method and the "construct" method. Create returns an object, construct does not.
    // Ideally, construct is called after create in the instanciation pipeline.
    // so here -- we should check to see if a constructor function for the given cast type exists
    // if it does we should invoke the system method for instanciation.

    auto constructor_fn = functions[constructor_fn_name];
    if (constructor_fn != nullptr)
    {
        constructor_fn->call(codegen, _args);
    }
}

bool TypeObject::has_constructor(CodeGen* codegen, std::vector<TypeObject*> arg_types)
{
    std::vector<TypeObject*> _arg_types;
    _arg_types.push_back(this);

    for (auto a : arg_types)
        _arg_types.push_back(a);

    auto constructor_fn_name = TypeObject::member_fn_name(this, "constructor", codegen->function_type(codegen->type("void"), _arg_types));

    return functions[constructor_fn_name] != nullptr;
}

Object* TypeObject::new_instance(CodeGen* codegen, std::vector<Object*> args)
{
    auto newobj = create(codegen);
    construct(codegen, newobj, args);
    return newobj;
}

void TypeObject::build_defaults(CodeGen* codegen, Object* target)
{
    for (int i = 0; i < fields.size(); i++) {
        auto field = fields[i];
        if (field->build_default != nullptr) {
            auto default_value = field->build_default(codegen);
            field->set(codegen, target, default_value);
        }
    }
}

Object* TypeObject::binary_operator(CodeGen* codegen, BinaryOperatorExpr::OPERATOR op, TypeObject* comparison_type)
{
    auto member = member_fn_name(this, binop_fn_name(op), codegen->function_type(this, { this, comparison_type }));
    return functions[member];
}

Object* TypeObject::unary_operator(CodeGen* codegen, UnaryOperatorExpr::OPERATOR op)
{
    return nullptr;
}

TypeMemberDefinition* TypeObject::add_member_function(std::string name, FunctionDefinitionObject* fn)
{
    TypeMemberDefinition* member_def = new TypeMemberDefinition();
    member_def->name = name;
    member_def->member_of = this;
    member_def->type = fn->type;


    functions[name] = fn;
    members[name] = member_def;

    return member_def;
}

TypeMemberDefinition* TypeObject::add_member_field(std::string name, TypeObject* type)
{
    TypeMemberDefinition* member_def = new TypeMemberDefinition();
    member_def->name = name;
    member_def->member_of = this;
    member_def->type = type;

    fields.push_back(member_def);
    members[name] = member_def;

    return member_def;
}

TypeMemberDefinition* TypeObject::add_static_member_field(std::string name, Object* static_object)
{
    TypeMemberDefinition* member_def = new TypeMemberDefinition();
    member_def->name = name;
    member_def->member_of = this;
    member_def->type = static_object->type;
    member_def->value = static_object->value;
    member_def->is_static = true;

    members[name] = member_def;

    return member_def;
}

std::string TypeObject::binop_fn_name(BinaryOperatorExpr::OPERATOR op)
{
    switch (op)
    {
    case BinaryOperatorExpr::OPERATOR::ADD:
        return "operatorADD";
    case BinaryOperatorExpr::OPERATOR::EQUALITY:
        return "operatorEQUALITY";
    case BinaryOperatorExpr::OPERATOR::GREATER:
        return "operatorGREATER";
    case BinaryOperatorExpr::OPERATOR::LESSER:
        return "operatorLESSER";
    case BinaryOperatorExpr::OPERATOR::GTE:
        return "operatorGTE";
    case BinaryOperatorExpr::OPERATOR::LTE:
        return "operatorLTE";
    case BinaryOperatorExpr::OPERATOR::MINUS:
        return "operatorSUBTRACT";
    case BinaryOperatorExpr::OPERATOR::MULT:
        return "operatorMULTIPLY";
    case BinaryOperatorExpr::OPERATOR::DIVIDE:
        return "operatorDIVIDE";
    case BinaryOperatorExpr::OPERATOR::MODULO:
        return "operatorMODULO";
    case BinaryOperatorExpr::OPERATOR::BOOL_AND:
        return "operatorAND";
    case BinaryOperatorExpr::OPERATOR::BOOL_OR:
        return "operatorOR";
    }

    return "operatorUNK";
}

std::string TypeObject::unop_fn_name(UnaryOperatorExpr::OPERATOR op)
{
    return std::string();
}

std::string TypeObject::member_fn_name(TypeObject* source_type, std::string fn_name, TypeObject* fn_type)
{
    std::string fn_type_str = "";

    for (int i = 1; i < fn_type->template_types.size(); i++)
    {
        if (i == 1)
            fn_type_str = "_";

        fn_type_str += fn_type->template_types[i]->identifier;
        if (i != fn_type->template_types.size() - 1)
            fn_type_str += "_";
    }

    return "__" + source_type->identifier + "_" + fn_name + fn_type_str;
}

std::string TypeObject::cast_fn_name(TypeObject* source_type, TypeObject* result_type)
{
    return "__" + source_type->identifier + "_CAST_" + result_type->identifier;
}

Object* Object::get_member(CodeGen* codegen, std::string member_name)
{
    auto member = type->members[member_name];;

    if (member == nullptr) return nullptr; // exit if there is nothing to see.

    if (auto fn_type = dynamic_cast<FunctionTypeObject*>(member->type))
    {
        auto base_def = type->functions[member_name];
        if (fn_type->is_static)
            return base_def;


        auto bound_def = new FunctionDefinitionObject(*base_def);
        bound_def->bound_object = this;
        return bound_def;
    }
    // if the member is a field -- we need to use getelementptr

    auto field_index = std::find(type->fields.begin(), type->fields.end(), member);
    auto field = codegen->builder.CreateStructGEP(
        type->underlying_type,
        value,
        std::distance(type->fields.begin(), field_index)
    );

    return new Object(Object::REFERENCE, member->type, field);
}

Object* Object::call(CodeGen* codegen, std::vector<Object*> params)
{
    std::vector<llvm::Value*> arguments;
    for (auto arg : params)
    {
        arguments.push_back(codegen->TryLoad(arg));
    }

    auto val = call(codegen, arguments);

    return new Object(Object::Classification::VALUE, this->type->template_types[0], val);
}

Value* Object::call(CodeGen* codegen, std::vector<Value*> params)
{
    return codegen->builder.CreateCall((FunctionType*)type->underlying_type, value, params);
}

void Object::destroy(CodeGen* codegen)
{
    auto destructor = this->type->functions["destructor"];
    if (destructor != nullptr) {

    }
}

void Object::assign(CodeGen* codegen, Object* rho)
{
    if (type != rho->type)
    {
        auto casted_object = codegen->TryCast(rho, type);
        auto rho_value = codegen->TryLoad(casted_object);

        codegen->builder.CreateStore(rho_value, value);
    }
    else
    {
        codegen->builder.CreateStore(codegen->TryLoad(rho), value);
    }
}

Object* FunctionDefinitionObject::call(CodeGen* codegen, std::vector<Object*> params)
{
    if (auto fntype = dynamic_cast<FunctionTypeObject*>(type)) {
        std::vector<Object*> p;
        if (bound_object != nullptr)
            p.push_back(codegen->TryCast(bound_object, fntype->template_types[1])); // bound objects will always be in this slot
        
        //for (auto a : params) p.push_back(a);
        for (int i = 0; i < params.size(); i++)
        {
            p.push_back(codegen->TryCast(params[i], fntype->template_types[(bound_object == nullptr ? 1 : 2) + i])); // slot 1 if there is no bound object otherwise slot 2
        }

        if (fntype->system_inline) // cant use an and here ... :/
        {
            return inline_body(codegen, p);
        }

        return Object::call(codegen, p);
    }

    return Object::call(codegen, params);
}

Object* TypeMemberDefinition::get(CodeGen* codegen, Object* parent)
{
    return nullptr;
}
