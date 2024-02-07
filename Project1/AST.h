#pragma once
#include <string>
#include <vector>
#include "llvm/IR/Type.h"
#include <llvm/IR/IRBuilder.h>
#include <map>
#include "ANTLRFiles/mylangBaseVisitor.h"


class CodeGen;
class Object;
class TypeObject;
class TypeMemberDefinition;
class FunctionTypeObject;


namespace AST
{
	struct Node {
	public:
		int line_number;
		std::string text;

		void context(antlr4::ParserRuleContext* context);
		virtual ~Node() = default;
	};

	struct Statement : public Node {
		virtual ~Statement() = default;

		virtual void build(CodeGen* codegen) {};
	};

	struct Expression : public Node {
		virtual ~Expression() = default;

		virtual Object* build_value(CodeGen* codegen) { return nullptr; };

	};

	struct MemberStatement : public Statement {
		virtual TypeMemberDefinition* build_member(CodeGen* gen, TypeObject* type) = 0;
	};

	struct TypeReference : public Node {
		std::string type;
		std::vector<TypeReference*> template_types;
		bool pointer = false;

		virtual TypeObject* get_type(CodeGen* codegen);

	};

	struct LiteralExpression : public Expression {
		enum ValueType {
			INT,
			STRING,
			BOOL
		};

		ValueType type;
		int int_value; // should be using union here or something.
		std::string str_value;
		bool bool_value;

		Object* build_value(CodeGen* codegen);
	};

	struct IdExpression : public Expression {
		std::string id;

		Object* build_value(CodeGen* codegen);
	};

	struct FunctionCall : public Expression {
		Expression* callee;
		std::vector<Expression*> arguments;

		Object* build_value(CodeGen* codegen);
	};

	struct BinaryOperatorExpr : public Expression
	{
		enum OPERATOR {
			EQUALITY,
			GREATER,
			LESSER,
			GTE,
			LTE,
			ADD,
			MINUS,
			MULT,
			DIVIDE,
			BOOL_OR,
			BOOL_AND,
			ASSIGN,
			MODULO
		};

		Expression* lhe;
		Expression* rhe;
		OPERATOR op;

		Object* build_value(CodeGen* codegen);
	};

	struct UnaryOperatorExpr : Expression
	{
		enum OPERATOR
		{
			PREFIX_FREE,
			PREFIX_NOT,
			PREFIX_DEREF,
			SUFFIX_INC,
			SUFFIX_DEC
		};

		OPERATOR op;
		Expression* expr;

		Object* build_value(CodeGen* codegen);
	};

	struct AllocExpression : Expression
	{
		TypeReference* type;
		std::vector<Expression*> args;

		Object* build_value(CodeGen* codegen);
	};

	struct MemberAccessExpression : Expression {
		Expression* baseExpr;
		std::string identifier;

		Object* build_value(CodeGen* codegen);
	};

	struct NewExpression : Expression
	{
		TypeReference* type;
		std::vector<Expression*> args;

		Object* build_value(CodeGen* codegen);
	};

	struct CastExpression : public Expression {
		TypeReference* target_type;
		Expression* casted_value;

		Object* build_value(CodeGen* codegen);
	};

	struct ExpressionStatement : public Statement {
		Expression* expression;

		virtual void build(CodeGen* codegen);
	};

	struct ElseClause;
	struct IfStatement : public Statement {
		Expression* condition;
		std::vector<Statement*> body;
		ElseClause* else_clause;

		bool has_exit = false;

		virtual void build(CodeGen* codegen);
		virtual void build(CodeGen* codegen, llvm::BasicBlock* mergeBlock);
	};

	struct ElseClause : public Node
	{
		IfStatement* if_clause;
		std::vector<Statement*> body;
		bool has_exit = false;

		// only use body if there is no additional if clause
		virtual void build(CodeGen* codegen);
	};

	struct VariableDeclStatement : public MemberStatement {
		bool is_static = false;
		TypeReference* type;
		std::string id;
		Expression* assign_expr = nullptr;

		void build(CodeGen* codegen);
		TypeMemberDefinition* build_member(CodeGen* gen, TypeObject* type);
	};

	struct ReturnStatement : public Statement {
		Expression* expression = nullptr;

		virtual void build(CodeGen* codegen);
	};

	struct BasicForStatement : public Statement {
		VariableDeclStatement* init_stmt = nullptr;
		Expression* condition_expr = nullptr;
		Expression* update_expr = nullptr;

		std::vector<Statement*> body;

		virtual void build(CodeGen* codegen);
	};

	struct Parameter : public Node {
		TypeReference* type;
		std::string id;
	};


	// reallistically this functions as two objects TopLevelStatement or a MemberStatement
	// I don't love this but it will work.
	struct FunctionDeclaration : public MemberStatement {
		TypeReference* returnType;
		std::string id;
		bool has_body = false;
		bool has_return = false;

		std::vector<Parameter*> parameters;
		std::vector<Statement*> body;

		virtual void build(CodeGen* codegen);
		TypeMemberDefinition* build_member(CodeGen* gen, TypeObject* type);
	};

	struct ConstructorDeclaration : public MemberStatement {
		TypeReference* returnType;
		std::vector<Statement*> body;

		std::vector<Parameter*> parameters;

		void build(CodeGen* codegen);
		TypeMemberDefinition* build_member(CodeGen* gen, TypeObject* type);
	};

	struct CastFunctionDeclaration : public MemberStatement {
		TypeReference* returnType;
		std::vector<Statement*> body;

		void build(CodeGen* codegen);
		TypeMemberDefinition* build_member(CodeGen* gen, TypeObject* type);
	};

	struct StructDeclaration : public Statement{
		std::string id;

		// we should have multiple storages for each type of member
		std::vector<MemberStatement*> members;

		void build(CodeGen* codegen);

	};

	struct Program : public Node {
		std::vector<Statement*> statements;
	};

	void dump_tree(Node* node, int depth = 0);
};

