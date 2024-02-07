#pragma once

#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/IRBuilder.h"
#include <map>
#include "AST.h"


using namespace llvm;
using namespace AST;

class FunctionDefinitionObject;
class TypeMemberDefinition;
class TypeObject;

class Object {
public:

    // is there a better name for this?
    // this helps TryLoad (better name tbd) determine if the Object should be used as a ref or a value
    enum Classification {
        VALUE,
        REFERENCE, // alloca / malloc etc. Variable declarations
        TYPE,
        FUNCTION
    };

    Classification classification = VALUE;

    TypeObject* type = nullptr;
    llvm::Value* value = nullptr;

    Object() {};
    Object(TypeObject* t, llvm::Value* v) : type(t), value(v) {}
    Object(Classification c, TypeObject* t, llvm::Value* v) : classification(c), type(t), value(v) {}

    virtual Object* get_member(CodeGen* codegen, std::string member_name);
    virtual Object* call(CodeGen* codegen, std::vector<Object*> params);
    virtual Value* call(CodeGen* codegen, std::vector<Value*> params);

    virtual void destroy(CodeGen* codegen);
    virtual void assign(CodeGen* codegen, Object* value);
};

class TypeObject : public Object
{
    // a lot of information is stored here about types. This is only available at compile time.
    // Realistically, we would need the runtime to have access to this information as well.
public:
    std::string identifier;
    std::vector<TypeObject*> template_types;

    llvm::Type* underlying_type = nullptr; // should we even define a struct in llvm per class? I think so?
    TypeObject* parent_type = nullptr;

    // functions
    //std::map<std::string, Object*> functions;
    std::map<std::string, TypeMemberDefinition*> members;
    std::map<std::string, FunctionDefinitionObject*> functions;

    std::vector<TypeMemberDefinition*> fields;

    Object* create(CodeGen* codegen, llvm::Value* value = nullptr);
    void construct(CodeGen* codegen, Object* target, std::vector<Object*> args);
    bool has_constructor(CodeGen* codegen, std::vector<TypeObject*> arg_types);
    Object* new_instance(CodeGen* codegen, std::vector<Object*> args);
    void build_defaults(CodeGen* codegen, Object* target);

    Object* binary_operator(CodeGen* codegen, BinaryOperatorExpr::OPERATOR op, TypeObject* comparison_type);
    Object* unary_operator(CodeGen* codegen, UnaryOperatorExpr::OPERATOR op);

    TypeMemberDefinition* add_member_function(std::string name, FunctionDefinitionObject* fn);
    TypeMemberDefinition* add_member_field(std::string name, TypeObject* type);
    TypeMemberDefinition* add_static_member_field(std::string name, Object* static_object);

    static std::string binop_fn_name(BinaryOperatorExpr::OPERATOR op);
    static std::string unop_fn_name(UnaryOperatorExpr::OPERATOR op);
    static std::string member_fn_name(TypeObject* source_type, std::string fn_name, TypeObject* fn_type);
    static std::string cast_fn_name(TypeObject* source_type, TypeObject* result_type);

    // how do we say a fn has variable args? idk yet.
};

class FunctionTypeObject : public TypeObject
{
public:
    bool is_static = false;
    bool has_vararg = false;
    bool system_inline = false;
};


// NOT IMPLEMENTED
class FunctionDefinitionObject : public Object
{
public:
    Object* bound_object = nullptr;
    std::function<Object* (CodeGen*, std::vector<Object*>)> inline_body;
    Object* call(CodeGen* codegen, std::vector<Object*> params);
};

class TypeMemberDefinition : public Object
{
public:
    TypeObject* member_of = nullptr;
    bool is_static = false;

    std::string name;

    std::function<Object* (CodeGen*)> build_default; // should this take an object* as well? or is it only static values?

    Object* get(CodeGen* codegen, Object* parent);
    void set(CodeGen* codegen, Object* target, Object* value); // this may not be that necessary?
};