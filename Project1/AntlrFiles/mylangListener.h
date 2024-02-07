
// Generated from mylang.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "mylang.h"


/**
 * This interface defines an abstract listener for a parse tree produced by mylang.
 */
class  mylangListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(mylang::ProgramContext *ctx) = 0;
  virtual void exitProgram(mylang::ProgramContext *ctx) = 0;

  virtual void enterTlsList(mylang::TlsListContext *ctx) = 0;
  virtual void exitTlsList(mylang::TlsListContext *ctx) = 0;

  virtual void enterTopLevelStatement(mylang::TopLevelStatementContext *ctx) = 0;
  virtual void exitTopLevelStatement(mylang::TopLevelStatementContext *ctx) = 0;

  virtual void enterEmptyStatement(mylang::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(mylang::EmptyStatementContext *ctx) = 0;

  virtual void enterMemberStatement(mylang::MemberStatementContext *ctx) = 0;
  virtual void exitMemberStatement(mylang::MemberStatementContext *ctx) = 0;

  virtual void enterFunctionDeclaration(mylang::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(mylang::FunctionDeclarationContext *ctx) = 0;

  virtual void enterCastFunctionDeclaration(mylang::CastFunctionDeclarationContext *ctx) = 0;
  virtual void exitCastFunctionDeclaration(mylang::CastFunctionDeclarationContext *ctx) = 0;

  virtual void enterConstructorDeclaration(mylang::ConstructorDeclarationContext *ctx) = 0;
  virtual void exitConstructorDeclaration(mylang::ConstructorDeclarationContext *ctx) = 0;

  virtual void enterStructDeclaration(mylang::StructDeclarationContext *ctx) = 0;
  virtual void exitStructDeclaration(mylang::StructDeclarationContext *ctx) = 0;

  virtual void enterStatementList(mylang::StatementListContext *ctx) = 0;
  virtual void exitStatementList(mylang::StatementListContext *ctx) = 0;

  virtual void enterStatement(mylang::StatementContext *ctx) = 0;
  virtual void exitStatement(mylang::StatementContext *ctx) = 0;

  virtual void enterExpressionStatement(mylang::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(mylang::ExpressionStatementContext *ctx) = 0;

  virtual void enterControlStatement(mylang::ControlStatementContext *ctx) = 0;
  virtual void exitControlStatement(mylang::ControlStatementContext *ctx) = 0;

  virtual void enterIfStatement(mylang::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(mylang::IfStatementContext *ctx) = 0;

  virtual void enterElseClause(mylang::ElseClauseContext *ctx) = 0;
  virtual void exitElseClause(mylang::ElseClauseContext *ctx) = 0;

  virtual void enterAllocExpression(mylang::AllocExpressionContext *ctx) = 0;
  virtual void exitAllocExpression(mylang::AllocExpressionContext *ctx) = 0;

  virtual void enterNewExpression(mylang::NewExpressionContext *ctx) = 0;
  virtual void exitNewExpression(mylang::NewExpressionContext *ctx) = 0;

  virtual void enterReturnStatement(mylang::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(mylang::ReturnStatementContext *ctx) = 0;

  virtual void enterVariableDeclaration(mylang::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(mylang::VariableDeclarationContext *ctx) = 0;

  virtual void enterBasicForStatement(mylang::BasicForStatementContext *ctx) = 0;
  virtual void exitBasicForStatement(mylang::BasicForStatementContext *ctx) = 0;

  virtual void enterPrimary_expression(mylang::Primary_expressionContext *ctx) = 0;
  virtual void exitPrimary_expression(mylang::Primary_expressionContext *ctx) = 0;

  virtual void enterPrimaryExpression(mylang::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(mylang::PrimaryExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpr(mylang::AssignmentExprContext *ctx) = 0;
  virtual void exitAssignmentExpr(mylang::AssignmentExprContext *ctx) = 0;

  virtual void enterCastExpression(mylang::CastExpressionContext *ctx) = 0;
  virtual void exitCastExpression(mylang::CastExpressionContext *ctx) = 0;

  virtual void enterUnaryPrefixExpr(mylang::UnaryPrefixExprContext *ctx) = 0;
  virtual void exitUnaryPrefixExpr(mylang::UnaryPrefixExprContext *ctx) = 0;

  virtual void enterUnarySuffixExpr(mylang::UnarySuffixExprContext *ctx) = 0;
  virtual void exitUnarySuffixExpr(mylang::UnarySuffixExprContext *ctx) = 0;

  virtual void enterLogicalExpr(mylang::LogicalExprContext *ctx) = 0;
  virtual void exitLogicalExpr(mylang::LogicalExprContext *ctx) = 0;

  virtual void enterFunctionCallExpr(mylang::FunctionCallExprContext *ctx) = 0;
  virtual void exitFunctionCallExpr(mylang::FunctionCallExprContext *ctx) = 0;

  virtual void enterMemberAccessExpr(mylang::MemberAccessExprContext *ctx) = 0;
  virtual void exitMemberAccessExpr(mylang::MemberAccessExprContext *ctx) = 0;

  virtual void enterAdditiveExpr(mylang::AdditiveExprContext *ctx) = 0;
  virtual void exitAdditiveExpr(mylang::AdditiveExprContext *ctx) = 0;

  virtual void enterRelationalExpr(mylang::RelationalExprContext *ctx) = 0;
  virtual void exitRelationalExpr(mylang::RelationalExprContext *ctx) = 0;

  virtual void enterMultiplicativeExpr(mylang::MultiplicativeExprContext *ctx) = 0;
  virtual void exitMultiplicativeExpr(mylang::MultiplicativeExprContext *ctx) = 0;

  virtual void enterParenExpr(mylang::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(mylang::ParenExprContext *ctx) = 0;

  virtual void enterInvocationSuffix(mylang::InvocationSuffixContext *ctx) = 0;
  virtual void exitInvocationSuffix(mylang::InvocationSuffixContext *ctx) = 0;

  virtual void enterArgumentList(mylang::ArgumentListContext *ctx) = 0;
  virtual void exitArgumentList(mylang::ArgumentListContext *ctx) = 0;

  virtual void enterLiteralExpression(mylang::LiteralExpressionContext *ctx) = 0;
  virtual void exitLiteralExpression(mylang::LiteralExpressionContext *ctx) = 0;

  virtual void enterIdentifierExpression(mylang::IdentifierExpressionContext *ctx) = 0;
  virtual void exitIdentifierExpression(mylang::IdentifierExpressionContext *ctx) = 0;

  virtual void enterParameterList(mylang::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(mylang::ParameterListContext *ctx) = 0;

  virtual void enterParameter(mylang::ParameterContext *ctx) = 0;
  virtual void exitParameter(mylang::ParameterContext *ctx) = 0;

  virtual void enterSimpleTemplateType(mylang::SimpleTemplateTypeContext *ctx) = 0;
  virtual void exitSimpleTemplateType(mylang::SimpleTemplateTypeContext *ctx) = 0;

  virtual void enterTypeReference(mylang::TypeReferenceContext *ctx) = 0;
  virtual void exitTypeReference(mylang::TypeReferenceContext *ctx) = 0;

  virtual void enterTypeArgumentList(mylang::TypeArgumentListContext *ctx) = 0;
  virtual void exitTypeArgumentList(mylang::TypeArgumentListContext *ctx) = 0;

  virtual void enterBinary_operator(mylang::Binary_operatorContext *ctx) = 0;
  virtual void exitBinary_operator(mylang::Binary_operatorContext *ctx) = 0;


};

