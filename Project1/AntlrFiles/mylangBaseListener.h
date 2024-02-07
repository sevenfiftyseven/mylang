
// Generated from mylang.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "mylangListener.h"


/**
 * This class provides an empty implementation of mylangListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  mylangBaseListener : public mylangListener {
public:

  virtual void enterProgram(mylang::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(mylang::ProgramContext * /*ctx*/) override { }

  virtual void enterTlsList(mylang::TlsListContext * /*ctx*/) override { }
  virtual void exitTlsList(mylang::TlsListContext * /*ctx*/) override { }

  virtual void enterTopLevelStatement(mylang::TopLevelStatementContext * /*ctx*/) override { }
  virtual void exitTopLevelStatement(mylang::TopLevelStatementContext * /*ctx*/) override { }

  virtual void enterEmptyStatement(mylang::EmptyStatementContext * /*ctx*/) override { }
  virtual void exitEmptyStatement(mylang::EmptyStatementContext * /*ctx*/) override { }

  virtual void enterMemberStatement(mylang::MemberStatementContext * /*ctx*/) override { }
  virtual void exitMemberStatement(mylang::MemberStatementContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(mylang::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(mylang::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterCastFunctionDeclaration(mylang::CastFunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitCastFunctionDeclaration(mylang::CastFunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterConstructorDeclaration(mylang::ConstructorDeclarationContext * /*ctx*/) override { }
  virtual void exitConstructorDeclaration(mylang::ConstructorDeclarationContext * /*ctx*/) override { }

  virtual void enterStructDeclaration(mylang::StructDeclarationContext * /*ctx*/) override { }
  virtual void exitStructDeclaration(mylang::StructDeclarationContext * /*ctx*/) override { }

  virtual void enterStatementList(mylang::StatementListContext * /*ctx*/) override { }
  virtual void exitStatementList(mylang::StatementListContext * /*ctx*/) override { }

  virtual void enterStatement(mylang::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(mylang::StatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(mylang::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(mylang::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterControlStatement(mylang::ControlStatementContext * /*ctx*/) override { }
  virtual void exitControlStatement(mylang::ControlStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(mylang::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(mylang::IfStatementContext * /*ctx*/) override { }

  virtual void enterElseClause(mylang::ElseClauseContext * /*ctx*/) override { }
  virtual void exitElseClause(mylang::ElseClauseContext * /*ctx*/) override { }

  virtual void enterAllocExpression(mylang::AllocExpressionContext * /*ctx*/) override { }
  virtual void exitAllocExpression(mylang::AllocExpressionContext * /*ctx*/) override { }

  virtual void enterNewExpression(mylang::NewExpressionContext * /*ctx*/) override { }
  virtual void exitNewExpression(mylang::NewExpressionContext * /*ctx*/) override { }

  virtual void enterReturnStatement(mylang::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(mylang::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(mylang::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(mylang::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterBasicForStatement(mylang::BasicForStatementContext * /*ctx*/) override { }
  virtual void exitBasicForStatement(mylang::BasicForStatementContext * /*ctx*/) override { }

  virtual void enterPrimary_expression(mylang::Primary_expressionContext * /*ctx*/) override { }
  virtual void exitPrimary_expression(mylang::Primary_expressionContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(mylang::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(mylang::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterCastExpression(mylang::CastExpressionContext * /*ctx*/) override { }
  virtual void exitCastExpression(mylang::CastExpressionContext * /*ctx*/) override { }

  virtual void enterUnarySuffixExpr(mylang::UnarySuffixExprContext * /*ctx*/) override { }
  virtual void exitUnarySuffixExpr(mylang::UnarySuffixExprContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpr(mylang::FunctionCallExprContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpr(mylang::FunctionCallExprContext * /*ctx*/) override { }

  virtual void enterMemberAccessExpr(mylang::MemberAccessExprContext * /*ctx*/) override { }
  virtual void exitMemberAccessExpr(mylang::MemberAccessExprContext * /*ctx*/) override { }

  virtual void enterBinaryOperatorExpr(mylang::BinaryOperatorExprContext * /*ctx*/) override { }
  virtual void exitBinaryOperatorExpr(mylang::BinaryOperatorExprContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(mylang::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(mylang::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterInvocationSuffix(mylang::InvocationSuffixContext * /*ctx*/) override { }
  virtual void exitInvocationSuffix(mylang::InvocationSuffixContext * /*ctx*/) override { }

  virtual void enterArgumentList(mylang::ArgumentListContext * /*ctx*/) override { }
  virtual void exitArgumentList(mylang::ArgumentListContext * /*ctx*/) override { }

  virtual void enterLiteralExpression(mylang::LiteralExpressionContext * /*ctx*/) override { }
  virtual void exitLiteralExpression(mylang::LiteralExpressionContext * /*ctx*/) override { }

  virtual void enterIdentifierExpression(mylang::IdentifierExpressionContext * /*ctx*/) override { }
  virtual void exitIdentifierExpression(mylang::IdentifierExpressionContext * /*ctx*/) override { }

  virtual void enterParameterList(mylang::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(mylang::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(mylang::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(mylang::ParameterContext * /*ctx*/) override { }

  virtual void enterSimpleTemplateType(mylang::SimpleTemplateTypeContext * /*ctx*/) override { }
  virtual void exitSimpleTemplateType(mylang::SimpleTemplateTypeContext * /*ctx*/) override { }

  virtual void enterTypeReference(mylang::TypeReferenceContext * /*ctx*/) override { }
  virtual void exitTypeReference(mylang::TypeReferenceContext * /*ctx*/) override { }

  virtual void enterTypeArgumentList(mylang::TypeArgumentListContext * /*ctx*/) override { }
  virtual void exitTypeArgumentList(mylang::TypeArgumentListContext * /*ctx*/) override { }

  virtual void enterBinary_operator(mylang::Binary_operatorContext * /*ctx*/) override { }
  virtual void exitBinary_operator(mylang::Binary_operatorContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

