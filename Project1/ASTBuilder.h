#pragma once
#include "ANTLRFiles/mylangBaseVisitor.h"
#include "AST.h"
#include <any>

using namespace antlr4;
using namespace AST;

class ASTBuilder : public mylangBaseVisitor {
public:
    antlrcpp::Any visitProgram(mylang::ProgramContext* context);

    antlrcpp::Any visitTopLevelStatement(mylang::TopLevelStatementContext* context);

    antlrcpp::Any visitFunctionDeclaration(mylang::FunctionDeclarationContext* context);

    antlrcpp::Any visitParameter(mylang::ParameterContext* context);

    antlrcpp::Any visitStatement(mylang::StatementContext* context);

    antlrcpp::Any visitExpressionStatement(mylang::ExpressionStatementContext* context);

    antlrcpp::Any visitControlStatement(mylang::ControlStatementContext* context);

    antlrcpp::Any visitReturnStatement(mylang::ReturnStatementContext* context);

	antlrcpp::Any visitExpression(mylang::ExpressionContext* context);

    antlrcpp::Any visitFunctionCallExpr(mylang::FunctionCallExprContext* context);

    antlrcpp::Any visitVariableDeclaration(mylang::VariableDeclarationContext* context);

    antlrcpp::Any visitAllocExpression(mylang::AllocExpressionContext* context);

    antlrcpp::Any visitMemberAccessExpr(mylang::MemberAccessExprContext* context);

    antlrcpp::Any visitNewExpression(mylang::NewExpressionContext* context);

    antlrcpp::Any visitUnaryExpression(mylang::UnaryExpressionContext* context);

    antlrcpp::Any visitLiteralExpression(mylang::LiteralExpressionContext* context);

    antlrcpp::Any visitIdentifierExpression(mylang::IdentifierExpressionContext* context);

    antlrcpp::Any visitBinaryOperatorExpr(mylang::BinaryOperatorExprContext* context);

    antlrcpp::Any visitIfStatement(mylang::IfStatementContext* context);

    antlrcpp::Any visitElseClause(mylang::ElseClauseContext* context);

    antlrcpp::Any visitBasicForStatement(mylang::BasicForStatementContext* context);

    antlrcpp::Any visitSimpleTemplateType(mylang::SimpleTemplateTypeContext *context);

    antlrcpp::Any visitTypeReference(mylang::TypeReferenceContext* context);

    antlrcpp::Any visitStructDeclaration(mylang::StructDeclarationContext* context);

    antlrcpp::Any visitMemberStatement(mylang::MemberStatementContext* context);

    antlrcpp::Any visitCastFunctionDeclaration(mylang::CastFunctionDeclarationContext* context);

    antlrcpp::Any visitCastExpression(mylang::CastExpressionContext* context);

    antlrcpp::Any visitConstructorDeclaration(mylang::ConstructorDeclarationContext* context);
};