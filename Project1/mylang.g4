parser grammar mylang;

options {
	tokenVocab = base_lexer;
}

// Parser rules

program: tlsList EOF;

tlsList: topLevelStatement*;
topLevelStatement: functionDeclaration | structDeclaration;

emptyStatement: LBRACKET RBRACKET;

memberStatement:
	functionDeclaration
	| variableDeclaration
	| castFunctionDeclaration
	| constructorDeclaration;

// Top level statements
functionDeclaration:
	typeSpecifier ID LPAREN parameterList? RPAREN (
		emptyStatement
		| (LBRACKET statementList RBRACKET)
		| SEMI
	);

castFunctionDeclaration:
	CAST typeSpecifier LPAREN RPAREN (
		// cast function cannot have parameters
		LBRACKET statementList RBRACKET
	);

constructorDeclaration:
	CONSTRUCTOR LPAREN parameterList? RPAREN (
		emptyStatement
		| (LBRACKET statementList RBRACKET)
	);

structDeclaration:
	STRUCT_KEYWORD ID LBRACKET memberStatement* RBRACKET;

// Standard statements
statementList: statement*;

// Combine declarationStatement and expressionStatement into a single rule

statement:
	expressionStatement
	| controlStatement
	| variableDeclaration;

expressionStatement: expression SEMI;

controlStatement:
	ifStatement
	| basicForStatement
	| returnStatement;

ifStatement:
	IF LPAREN expression RPAREN LBRACKET statementList RBRACKET (
		elseClause
	)?;

elseClause:
	ELSE (ifStatement | LBRACKET statementList RBRACKET);

allocExpression:
	ALLOC_KEYWORD typeSpecifier LPAREN argumentList? RPAREN;
newExpression:
	NEW_KEYWORD typeSpecifier LPAREN argumentList? RPAREN;

returnStatement: RETURN expression? SEMI;

// this should optionally be a constructor call as well
variableDeclaration:
	STATIC? typeSpecifier ID (BINOP_ASSIGN expression)? SEMI;

// any section of the for statement should be optional except for the condition. technically
basicForStatement:
	FOR LPAREN init = variableDeclaration? SEMI condition = expression SEMI update = expression?
		RPAREN LBRACKET statementList RBRACKET;

primary_expression: literalExpression | identifierExpression;

// Expressions

expression:
	expression (BINOP_ASSIGN) expression				# assignmentExpr
	| expression (BINOP_ADD | BINOP_MINUS) expression	# additiveExpr
	| expression (BINOP_MULT | BINOP_DIVIDE) expression	# multiplicativeExpr
	| expression (
		BINOP_GREATER
		| BINOP_LESSER
		| BINOP_GTE
		| BINOP_LTE
		| BINOP_EQUALITY
	) expression                                # relationalExpr
	| expression (
		BINOP_BOOL_AND
		| BINOP_BOOL_OR
		| BOOLEAN_KEYWORD
	) expression								# logicalExpr
	| LPAREN expression RPAREN					# parenExpr
	| primary_expression						# primaryExpression
	| expression DOT identifierExpression		# memberAccessExpr
	| expression SUFFIX_UNARY_OPS				# unarySuffixExpr
	| PREFIX_UNARY_OPS expression				# unaryPrefixExpr
	| expression invocationSuffix				# functionCallExpr
	| LPAREN typeSpecifier RPAREN expression	# castExpression;

invocationSuffix: LPAREN argumentList? RPAREN;
argumentList: expression (COMMA expression)*;

literalExpression: LITERAL_INT | LITERAL_STRING | LITERAL_BOOL;
identifierExpression: ID | typeSpecifier | CONSTRUCTOR;

parameterList: parameter (COMMA parameter)*;
parameter: typeSpecifier ID;

typeSpecifier:
	TEMPLATE_ID typeArgumentList BINOP_GREATER	# simpleTemplateType
	| (KEYWORD_TYPES | ID)						# typeReference;

typeArgumentList: typeSpecifier (COMMA typeSpecifier)*;

// we will need to address user types. typeReference: ; simpleTemplateType: ID BINOP_LESSER
// typeArgumentList BINOP_GREATER;

binary_operator:
	BINOP_EQUALITY
	| BINOP_GREATER
	| BINOP_LESSER
	| BINOP_GTE
	| BINOP_LTE
	| BINOP_ADD
	| BINOP_MINUS
	| BINOP_MULT
	| BINOP_DIVIDE
	| BINOP_BOOL_OR
	| BINOP_BOOL_AND
	| BOOLEAN_KEYWORD
	| BINOP_ASSIGN;