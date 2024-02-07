parser grammar mylang;

options {
    tokenVocab = base_lexer;
}

// Parser rules

program: tlsList EOF;

tlsList: topLevelStatement*;
topLevelStatement: functionDeclaration;

emptyStatement: LBRACKET RBRACKET;

// Top level statements
functionDeclaration: typeSpecifier ID LPAREN parameterList? RPAREN (emptyStatement | (LBRACKET statementList RBRACKET) | ';');

// Standard statements
statementList: statement*;

// Combine declarationStatement and expressionStatement into a single rule

statement:  expressionStatement | controlStatement | variableDeclaration ;
expressionStatement: expression ';' ;
controlStatement: ifStatement | basicForStatement | (returnStatement ';') ;

ifStatement
    : IF LPAREN expression RPAREN LBRACKET statementList RBRACKET (elseClause)?
    ;

elseClause
    : ELSE (ifStatement | LBRACKET statementList RBRACKET)
    ;

allocExpression: ALLOC_KEYWORD typeSpecifier LPAREN argumentList? RPAREN ;
newExpression: NEW_KEYWORD typeSpecifier LPAREN argumentList? RPAREN ;

returnStatement: RETURN expression?;

// this should optionally be a constructor call as well
variableDeclaration: typeSpecifier ID (BINOP_ASSIGN expression)? ';' ;

// any section of the for statement should be optional except for the condition. technically
basicForStatement: FOR LPAREN init=variableDeclaration? ';' condition=expression ';' update=expression? RPAREN LBRACKET statementList RBRACKET ;

// Expressions
expression
    : literalExpression                         #exprLiteral
    | identifierExpression                      #exprIdentifier
    | allocExpression                           #exprAlloc
    | newExpression                             #exprNew
    | PREFIX_UNARY_OPS expression               #prefixOpExpr
    | expression invocationSuffix               #functionCall
    | expression BINARY_OPERATORS expression    #binaryOperator 
    | expression DOT identifierExpression       #memberAccessExpr
    ;

invocationSuffix: LPAREN argumentList? RPAREN;
argumentList: expression (COMMA expression)*;

literalExpression: LITERAL_INT | LITERAL_STRING | LITERAL_BOOL;
identifierExpression: ID | typeSpecifier;

parameterList: parameter (COMMA parameter)*;
parameter: typeSpecifier ID;

typeSpecifier: typeReference typeArgumentList? ;

typeArgumentList: BINOP_LESSER typeSpecifier (COMMA typeSpecifier)* BINOP_GREATER;

// we will need to address user types.
typeReference: KEYWORD_TYPES | ID; 