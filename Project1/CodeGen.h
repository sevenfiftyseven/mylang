#pragma once
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/IRBuilder.h"
#include "Objects.h"


using namespace AST;


void PrintType(llvm::Type* type);

class StackFrame
{
public:
    StackFrame* parent = nullptr;
    std::map<std::string, Object*> variables;
    bool access_parent = true;

    Object* this_object = nullptr;

    Object* lookup_var(CodeGen* codegen, std::string name);
    void add_var(std::string name, Object* value);
};

// do we need a way to track what function we are inside of?

class CodeGen {
public:
    LLVMContext context;
    IRBuilder<> builder;
    Module module;
    
    CodeGen()
        : builder(context), module("top", context) {
        context.setOpaquePointers(false);
        pushStackFrame(false);
    }

    void ImportSystem();
    void generateCode(Program& program);

    void ExportModule(const char* filename);

    void pushStackFrame(bool access_parent = true);
    void popStackFrame();
    TypeObject* type(std::string type_name);
    TypeObject* build_templated_type(TypeObject* base, std::vector<TypeObject*> template_types);
    FunctionTypeObject* function_type(TypeObject* return_type, std::vector<TypeObject*> param_types);

    // eventually this needs to support arrays
    Object* Malloc(TypeObject* type, llvm::Value* size = nullptr); 
    Value* Malloc(Type* _type, llvm::Value* size = nullptr);

    // these may belong better on Object at this point
    Value* TryLoad(Object* object);
    Object* TryCast(Object* object, TypeObject* target);

    Object* ConstantInt(int value);

    // should probably have a frame for globals
    StackFrame* stackFrame = nullptr; // this shouldn't be puplic
private:
    void build_numeric_type(std::string name, llvm::Type* type, bool is_signed);
    void build_string();

    void import_function(std::string name, TypeObject* functionType);
    
    
};


class FunctionBuilder {
private:
    CodeGen* gen = nullptr;
    std::string id;
    FunctionTypeObject* type = nullptr;
    FunctionDefinitionObject* def = nullptr;
    Object* this_object = nullptr;
    std::vector<std::string> param_names;
    std::map<std::string, Object*> additional_variables;


public:
    FunctionBuilder(CodeGen* codegen, std::string id, FunctionTypeObject* type);

    FunctionDefinitionObject* declare(std::vector<Parameter*> params = std::vector<Parameter*>());
    void define(std::vector<Statement*> statements);
    void set_binding(TypeObject* type);
    void set_variable(std::string name, Object* value);
};