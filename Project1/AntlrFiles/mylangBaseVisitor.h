
// Generated from mylang.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "mylangVisitor.h"


/**
 * This class provides an empty implementation of mylangVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  mylangBaseVisitor : public mylangVisitor {
public:

  virtual std::any visitProgram(mylang::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTlsList(mylang::TlsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTopLevelStatement(mylang::TopLevelStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmptyStatement(mylang::EmptyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberStatement(mylang::MemberStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclaration(mylang::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCastFunctionDeclaration(mylang::CastFunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructorDeclaration(mylang::ConstructorDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructDeclaration(mylang::StructDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementList(mylang::StatementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(mylang::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStatement(mylang::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitControlStatement(mylang::ControlStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(mylang::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseClause(mylang::ElseClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAllocExpression(mylang::AllocExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewExpression(mylang::NewExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatement(mylang::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaration(mylang::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasicForStatement(mylang::BasicForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary_expression(mylang::Primary_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExpression(mylang::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentExpr(mylang::AssignmentExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCastExpression(mylang::CastExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryPrefixExpr(mylang::UnaryPrefixExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnarySuffixExpr(mylang::UnarySuffixExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalExpr(mylang::LogicalExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCallExpr(mylang::FunctionCallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberAccessExpr(mylang::MemberAccessExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveExpr(mylang::AdditiveExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpr(mylang::RelationalExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeExpr(mylang::MultiplicativeExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(mylang::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInvocationSuffix(mylang::InvocationSuffixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentList(mylang::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteralExpression(mylang::LiteralExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierExpression(mylang::IdentifierExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(mylang::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(mylang::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTemplateType(mylang::SimpleTemplateTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeReference(mylang::TypeReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeArgumentList(mylang::TypeArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinary_operator(mylang::Binary_operatorContext *ctx) override {
    return visitChildren(ctx);
  }


};

