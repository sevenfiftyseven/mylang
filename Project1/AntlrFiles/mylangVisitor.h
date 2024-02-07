
// Generated from mylang.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "mylang.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by mylang.
 */
class  mylangVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by mylang.
   */
    virtual std::any visitProgram(mylang::ProgramContext *context) = 0;

    virtual std::any visitTlsList(mylang::TlsListContext *context) = 0;

    virtual std::any visitTopLevelStatement(mylang::TopLevelStatementContext *context) = 0;

    virtual std::any visitEmptyStatement(mylang::EmptyStatementContext *context) = 0;

    virtual std::any visitMemberStatement(mylang::MemberStatementContext *context) = 0;

    virtual std::any visitFunctionDeclaration(mylang::FunctionDeclarationContext *context) = 0;

    virtual std::any visitCastFunctionDeclaration(mylang::CastFunctionDeclarationContext *context) = 0;

    virtual std::any visitConstructorDeclaration(mylang::ConstructorDeclarationContext *context) = 0;

    virtual std::any visitStructDeclaration(mylang::StructDeclarationContext *context) = 0;

    virtual std::any visitStatementList(mylang::StatementListContext *context) = 0;

    virtual std::any visitStatement(mylang::StatementContext *context) = 0;

    virtual std::any visitExpressionStatement(mylang::ExpressionStatementContext *context) = 0;

    virtual std::any visitControlStatement(mylang::ControlStatementContext *context) = 0;

    virtual std::any visitIfStatement(mylang::IfStatementContext *context) = 0;

    virtual std::any visitElseClause(mylang::ElseClauseContext *context) = 0;

    virtual std::any visitAllocExpression(mylang::AllocExpressionContext *context) = 0;

    virtual std::any visitNewExpression(mylang::NewExpressionContext *context) = 0;

    virtual std::any visitReturnStatement(mylang::ReturnStatementContext *context) = 0;

    virtual std::any visitVariableDeclaration(mylang::VariableDeclarationContext *context) = 0;

    virtual std::any visitBasicForStatement(mylang::BasicForStatementContext *context) = 0;

    virtual std::any visitPrimary_expression(mylang::Primary_expressionContext *context) = 0;

    virtual std::any visitPrimaryExpression(mylang::PrimaryExpressionContext *context) = 0;

    virtual std::any visitCastExpression(mylang::CastExpressionContext *context) = 0;

    virtual std::any visitUnarySuffixExpr(mylang::UnarySuffixExprContext *context) = 0;

    virtual std::any visitFunctionCallExpr(mylang::FunctionCallExprContext *context) = 0;

    virtual std::any visitMemberAccessExpr(mylang::MemberAccessExprContext *context) = 0;

    virtual std::any visitBinaryOperatorExpr(mylang::BinaryOperatorExprContext *context) = 0;

    virtual std::any visitUnaryExpression(mylang::UnaryExpressionContext *context) = 0;

    virtual std::any visitInvocationSuffix(mylang::InvocationSuffixContext *context) = 0;

    virtual std::any visitArgumentList(mylang::ArgumentListContext *context) = 0;

    virtual std::any visitLiteralExpression(mylang::LiteralExpressionContext *context) = 0;

    virtual std::any visitIdentifierExpression(mylang::IdentifierExpressionContext *context) = 0;

    virtual std::any visitParameterList(mylang::ParameterListContext *context) = 0;

    virtual std::any visitParameter(mylang::ParameterContext *context) = 0;

    virtual std::any visitSimpleTemplateType(mylang::SimpleTemplateTypeContext *context) = 0;

    virtual std::any visitTypeReference(mylang::TypeReferenceContext *context) = 0;

    virtual std::any visitTypeArgumentList(mylang::TypeArgumentListContext *context) = 0;

    virtual std::any visitBinary_operator(mylang::Binary_operatorContext *context) = 0;


};

