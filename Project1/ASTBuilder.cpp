#pragma warning(disable:4146)
#include "ASTBuilder.h"


antlrcpp::Any ASTBuilder::visitProgram(mylang::ProgramContext* context) {
    Program program;
    for (auto statement : context->tlsList()->children) {
;
        program.statements.push_back(std::any_cast<Statement*>(visit(statement)));
    }

    return std::make_any<Program>(program);
}

antlrcpp::Any ASTBuilder::visitTopLevelStatement(mylang::TopLevelStatementContext* context)
{
    return visitChildren(context);
}

antlrcpp::Any ASTBuilder::visitFunctionDeclaration(mylang::FunctionDeclarationContext* context)
{
    auto fnDef = new FunctionDeclaration();
    fnDef->Statement::context(context);

    fnDef->returnType = std::any_cast<TypeReference*>(visit(context->typeSpecifier()));
    fnDef->id = context->ID()->getText();

    if (context->parameterList() != NULL) {
        for (auto parameter : context->parameterList()->parameter())
        {
            auto param = std::any_cast<Parameter*>(visit(parameter));
            fnDef->parameters.push_back(param);
        }
    }

    
    if (context->statementList() != NULL)
    {
        fnDef->has_body = true;
        for (auto statement : context->statementList()->children)
        {
            auto stmt = std::any_cast<Statement*>(visit(statement));
            
            if (auto ret_stmt = dynamic_cast<ReturnStatement*>(stmt))
                fnDef->has_return = true;

            
            fnDef->body.push_back(stmt);
        }
    }

    return std::make_any<Statement*>(fnDef);
}

antlrcpp::Any ASTBuilder::visitParameter(mylang::ParameterContext* context)
{
    auto param = new Parameter();
    param->context(context);
    
    param->type = std::any_cast<TypeReference*>(visit(context->typeSpecifier()));
    param->id = context->ID()->getText();

    return std::make_any<Parameter*>(param);
}

antlrcpp::Any ASTBuilder::visitStatement(mylang::StatementContext* context)
{
    return visit(context->children[0]);
}

antlrcpp::Any ASTBuilder::visitExpressionStatement(mylang::ExpressionStatementContext* context)
{
    auto value = std::any_cast<Expression*>(visit(context->expression()));
    auto expr_statement = new ExpressionStatement();
    expr_statement->expression = value;
    return std::make_any<Statement*>(expr_statement);
}

antlrcpp::Any ASTBuilder::visitControlStatement(mylang::ControlStatementContext* context)
{
    return visit(context->children[0]);
}

antlrcpp::Any ASTBuilder::visitReturnStatement(mylang::ReturnStatementContext* context)
{
    ReturnStatement* retStmt = new ReturnStatement();
    retStmt->context(context);
    if (context->expression() != NULL)
    {
        retStmt->expression = std::any_cast<Expression*>(visit(context->expression()));
    }
    return std::make_any<Statement*>(retStmt);
}

antlrcpp::Any ASTBuilder::visitExpression(mylang::ExpressionContext* context) {
    return visitChildren(context);
}

antlrcpp::Any ASTBuilder::visitFunctionCallExpr(mylang::FunctionCallExprContext* context) {
    auto functionCall = new FunctionCall();
    functionCall->context(context);
    functionCall->callee = std::any_cast<Expression*>(visit(context->expression()));

    if (context->invocationSuffix()->argumentList() != NULL) {
        for (auto argument : context->invocationSuffix()->argumentList()->expression())
        {
            auto arg = std::any_cast<Expression*>(visit(argument));
            functionCall->arguments.push_back(arg);
        }
    }

    return std::make_any<Expression*>(functionCall);
}

antlrcpp::Any ASTBuilder::visitVariableDeclaration(mylang::VariableDeclarationContext* context)
{
    VariableDeclStatement* expr = new VariableDeclStatement();
    expr->Statement::context(context);
    
    expr->is_static = context->STATIC() != nullptr;

    if (context->expression())
    {
        expr->assign_expr = std::any_cast<Expression*>(visit(context->expression()));
    }

    expr->type = std::any_cast<TypeReference*>(visit(context->typeSpecifier())); //context->typeSpecifier()->getText();
    expr->id = context->ID()->getText();
    return std::make_any<Statement*>(expr);
}

antlrcpp::Any ASTBuilder::visitAllocExpression(mylang::AllocExpressionContext* context)
{
    auto allocExpr = new AllocExpression();
    allocExpr->context(context);
    allocExpr->type = std::any_cast<TypeReference*>(visit(context->typeSpecifier())); //context->allocExpression()->typeSpecifier()->getText();
    
    if (context->argumentList())
    {
        for (auto argExpr : context->argumentList()->expression())
            allocExpr->args.push_back(std::any_cast<Expression*>(visit(argExpr)));
    }
    return std::make_any<Expression*>(allocExpr);
}

antlrcpp::Any ASTBuilder::visitMemberAccessExpr(mylang::MemberAccessExprContext* context)
{
    auto expr = new MemberAccessExpression();
    expr->context(context);

    expr->baseExpr = std::any_cast<Expression*>(visit(context->expression()));
    expr->identifier = context->identifierExpression()->getText();

    return std::make_any<Expression*>(expr);
}

antlrcpp::Any ASTBuilder::visitNewExpression(mylang::NewExpressionContext* context)
{
    auto newExpr = new NewExpression();
    newExpr->context(context);

    newExpr->type = std::any_cast<TypeReference*>(context->typeSpecifier());

    if (context->argumentList())
    {
        for (auto argExpr : context->argumentList()->expression())
            newExpr->args.push_back(std::any_cast<Expression*>(visit(argExpr)));
    }
    return std::make_any<Expression*>(newExpr);
}

antlrcpp::Any ASTBuilder::visitUnaryPrefixExpr(mylang::UnaryPrefixExprContext* context)
{
    auto opExpr = new UnaryOperatorExpr();
    opExpr->context(context);

    opExpr->expr = std::any_cast<Expression*>(visit(context->expression()));

    auto opText = context->PREFIX_UNARY_OPS()->getText();
    
    if (opText == "@")
        opExpr->op = UnaryOperatorExpr::PREFIX_DEREF;

    return std::make_any<Expression*>(opExpr);
}

std::string processStringLiteral(const std::string& str) 
{
    std::string result;
    for (std::size_t i = 1; i < str.size() - 1; ++i) {
        if (str[i] == '\\' && i + 1 < str.size()) {
            switch (str[i + 1]) {
                case 'n': result.push_back('\n'); break;
                case 't': result.push_back('\t'); break;
                case 'r': result.push_back('\r'); break;
                case 'b': result.push_back('\b'); break;
                case 'f': result.push_back('\f'); break;
                case '\'': result.push_back('\''); break;
                // Add cases for other escape sequences as needed...
                default: result.push_back(str[i + 1]); break;
            }
            ++i;  // Skip the next character
        } else {
            result.push_back(str[i]);
        }
    }
    return result;
}

antlrcpp::Any ASTBuilder::visitLiteralExpression(mylang::LiteralExpressionContext* context)
{
    auto expression = new LiteralExpression();
    expression->context(context);

    if (context->LITERAL_INT()) {
        int value = atoi(context->LITERAL_INT()->getText().c_str());
        expression->type = LiteralExpression::INT;
        expression->int_value = value;
    }
    else if (context->LITERAL_STRING())
    {
	    expression->type = LiteralExpression::STRING;
		expression->str_value = processStringLiteral(context->LITERAL_STRING()->getText());
    }
    else if (context->LITERAL_BOOL())
    {
        expression->type = LiteralExpression::BOOL;
        expression->bool_value = context->LITERAL_BOOL()->getText() == "true";
    }

    return std::make_any<Expression*>(expression);
}

antlrcpp::Any ASTBuilder::visitIdentifierExpression(mylang::IdentifierExpressionContext* context)
{
    auto expression = new IdExpression();
    expression->context(context);

    expression->id = context->getText(); // we need to handle typespecifier differently but for now this is ok
    return std::make_any<Expression*>(expression);
}

antlrcpp::Any ASTBuilder::visitAssignmentExpr(mylang::AssignmentExprContext* context)
{
    auto assignmentExpr = new BinaryOperatorExpr();
    assignmentExpr->context(context);

    assignmentExpr->lhe = std::any_cast<Expression*>(visit(context->expression(0)));
    assignmentExpr->rhe = std::any_cast<Expression*>(visit(context->expression(1)));

    return std::make_any<Expression*>(assignmentExpr);
}

antlrcpp::Any ASTBuilder::visitAdditiveExpr(mylang::AdditiveExprContext* context)
{
    auto additiveExpr = new BinaryOperatorExpr();
    additiveExpr->context(context);

    additiveExpr->lhe = std::any_cast<Expression*>(visit(context->expression(0)));
    additiveExpr->rhe = std::any_cast<Expression*>(visit(context->expression(1)));
    additiveExpr->op = context->BINOP_ADD() ? BinaryOperatorExpr::ADD : BinaryOperatorExpr::MINUS;

    return std::make_any<Expression*>(additiveExpr);
}

antlrcpp::Any ASTBuilder::visitMultiplicativeExpr(mylang::MultiplicativeExprContext* context)
{
    auto multiplicativeExpr = new BinaryOperatorExpr();
    multiplicativeExpr->context(context);

    multiplicativeExpr->lhe = std::any_cast<Expression*>(visit(context->expression(0)));
    multiplicativeExpr->rhe = std::any_cast<Expression*>(visit(context->expression(1)));
    multiplicativeExpr->op = context->BINOP_MULT() ? BinaryOperatorExpr::MULT : BinaryOperatorExpr::DIVIDE;

    return std::make_any<Expression*>(multiplicativeExpr);
}

antlrcpp::Any ASTBuilder::visitRelationalExpr(mylang::RelationalExprContext* context)
{
    auto relationalExpr = new BinaryOperatorExpr();
    relationalExpr->context(context);

    relationalExpr->lhe = std::any_cast<Expression*>(visit(context->expression(0)));
    relationalExpr->rhe = std::any_cast<Expression*>(visit(context->expression(1)));

    // Determine the operation type based on the operator token
    if (context->BINOP_GREATER()) {
        relationalExpr->op = BinaryOperatorExpr::GREATER;
    } else if (context->BINOP_LESSER()) {
        relationalExpr->op = BinaryOperatorExpr::LESSER;
    } else if (context->BINOP_GTE()) {
        relationalExpr->op = BinaryOperatorExpr::GTE;
    } else if (context->BINOP_LTE()) {
        relationalExpr->op = BinaryOperatorExpr::LTE;
    } else if (context->BINOP_EQUALITY()) {
        relationalExpr->op = BinaryOperatorExpr::EQUALITY;
    }

    return std::make_any<Expression*>(relationalExpr);
}

antlrcpp::Any ASTBuilder::visitLogicalExpr(mylang::LogicalExprContext* context)
{
    auto logicalExpr = new BinaryOperatorExpr();
    logicalExpr->context(context);

    logicalExpr->lhe = std::any_cast<Expression*>(visit(context->expression(0)));
    logicalExpr->rhe = std::any_cast<Expression*>(visit(context->expression(1)));
    logicalExpr->op = context->BINOP_BOOL_AND() ? BinaryOperatorExpr::BOOL_AND : BinaryOperatorExpr::BOOL_OR;

    return std::make_any<Expression*>(logicalExpr);
}

antlrcpp::Any ASTBuilder::visitIfStatement(mylang::IfStatementContext* context)
{
    IfStatement* statement = new IfStatement();
    statement->context(context);

    statement->condition = std::any_cast<Expression*>(visit(context->expression()));

    for (auto stmnt : context->statementList()->statement())
    {
        auto ast_stmt = std::any_cast<Statement*>(visit(stmnt));

        if (auto ret = dynamic_cast<ReturnStatement*>(ast_stmt))
            statement->has_exit = true;

        statement->body.push_back(std::any_cast<Statement*>(visit(stmnt)));
    }

    if (context->elseClause())
    {
        statement->else_clause = std::any_cast<ElseClause*>(visit(context->elseClause()));
    }

    return std::make_any<Statement*>(statement);
}

antlrcpp::Any ASTBuilder::visitElseClause(mylang::ElseClauseContext* context)
{
    auto else_clause = new ElseClause();
    else_clause->context(context);

    if (context->ifStatement())
    {
        else_clause->if_clause = (IfStatement*)std::any_cast<Statement*>(visit(context->ifStatement()));
    }
    else
    {
        for (auto statement : context->statementList()->statement())
        {
            auto ast_stmt = std::any_cast<Statement*>(visit(statement));

            if (auto ret = dynamic_cast<ReturnStatement*>(ast_stmt))
                else_clause->has_exit = true;

            else_clause->body.push_back(ast_stmt);
        }
    }
    return std::make_any<ElseClause*>(else_clause);
}

antlrcpp::Any ASTBuilder::visitBasicForStatement(mylang::BasicForStatementContext* context)
{
    BasicForStatement* forStmt = new BasicForStatement();
    forStmt->context(context);

    if (context->init)
        forStmt->init_stmt = (VariableDeclStatement*)std::any_cast<Statement*>(visit(context->init));

    // this is not optional
    forStmt->condition_expr = std::any_cast<Expression*>(visit(context->condition));

    if (context->update)
        forStmt->update_expr = std::any_cast<Expression*>(visit(context->update));

    for (auto statement : context->statementList()->statement())
        forStmt->body.push_back(std::any_cast<Statement*>(visit(statement)));

    return std::make_any<Statement*>(forStmt);
}

antlrcpp::Any ASTBuilder::visitSimpleTemplateType(mylang::SimpleTemplateTypeContext* context)
{
    auto type = new TypeReference();
    type->context(context);

    // we have to trim this string because the tokenizer needs to see the ID and the < together for it to properly
    // get noted as a template type
    auto base_str = context->TEMPLATE_ID()->getText();
    type->type = base_str.substr(0, base_str.length() - 1);// trim trailing <

    for (auto specifier : context->typeArgumentList()->typeSpecifier())
    {
        type->template_types.push_back(std::any_cast<TypeReference*>(visit(specifier)));
    }

    return std::make_any<TypeReference*>(type);
}

antlrcpp::Any ASTBuilder::visitTypeReference(mylang::TypeReferenceContext* context)
{
    auto type = new TypeReference();
    type->context(context);

    type->type = context->getText();

    return std::make_any<TypeReference*>(type);
}

antlrcpp::Any ASTBuilder::visitStructDeclaration(mylang::StructDeclarationContext* context)
{
    StructDeclaration* def = new StructDeclaration();
    def->context(context);

    def->id = context->ID()->getText();

    for (auto member: context->memberStatement())
    {
        def->members.push_back(std::any_cast<MemberStatement*>(visit(member)));
    }

    return std::make_any<Statement*>(def);
}

antlrcpp::Any ASTBuilder::visitMemberStatement(mylang::MemberStatementContext* context)
{
    // up up up down up down up -- voodoo casting = bad.
    return std::make_any<MemberStatement*>((MemberStatement*)std::any_cast<Statement*>(visit(context->children[0])));
}

antlrcpp::Any ASTBuilder::visitCastFunctionDeclaration(mylang::CastFunctionDeclarationContext* context)
{
    auto cast_fn = new CastFunctionDeclaration();
    cast_fn->context(context);

    cast_fn->returnType = std::any_cast<TypeReference*>(visit(context->typeSpecifier()));

    for (auto stmt : context->statementList()->statement())
    {
        cast_fn->body.push_back(std::any_cast<Statement*>(visit(stmt)));
    }

    return std::make_any<Statement*>(cast_fn);
}

antlrcpp::Any ASTBuilder::visitCastExpression(mylang::CastExpressionContext* context)
{
    CastExpression* expr = new CastExpression();
    expr->context(context);

    expr->target_type = std::any_cast<TypeReference*>(visit(context->typeSpecifier()));
    expr->casted_value = std::any_cast<Expression*>(visit(context->expression()));

    return std::make_any<Expression*>(expr);
}

antlrcpp::Any ASTBuilder::visitConstructorDeclaration(mylang::ConstructorDeclarationContext* context)
{
    auto constr = new ConstructorDeclaration();
    constr->context(context);

    if (context->parameterList() != NULL) {
        for (auto parameter : context->parameterList()->parameter())
        {
            auto param = std::any_cast<Parameter*>(visit(parameter));
            constr->parameters.push_back(param);
        }
    }


    if (context->statementList() != NULL)
    {
        for (auto statement : context->statementList()->children)
        {
            constr->body.push_back(std::any_cast<Statement*>(visit(statement)));
        }
    }

    return std::make_any<Statement*>(constr);
}
