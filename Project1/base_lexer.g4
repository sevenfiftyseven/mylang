lexer grammar base_lexer;

// Single-line comment
SINGLE_LINE_COMMENT: '//' ~[\r\n]* -> skip;

// Multi-line comment
MULTI_LINE_COMMENT: '/*' .*? '*/' -> skip;

LPAREN: '(' ;
RPAREN: ')' ;
LBRACKET: '{' ;
RBRACKET: '}' ;
SEMI: ';' ;

// Other lexer rules for regular tokens
IF: 'if' ;
ELSE: 'else' ;
FOR: 'for' ;

KEYWORD_TYPES : 'bool' | 'long' | 'int' | 'short' | 'byte' | 'string' | 'void' ;
LITERAL_BOOL: 'true' | 'false' ;
NEW_KEYWORD : 'new' ;
ALLOC_KEYWORD : 'alloc' ;
RETURN: 'return' ;
FREE: 'free' ;
DOT: '.' ;
COMMA: ',' ;
STATIC: 'static';
CAST: 'cast';
CONSTRUCTOR: 'constructor';

STRUCT_KEYWORD : 'struct' ;

BOOLEAN_KEYWORD: 'and' | 'or' ;
BINOP_EQUALITY:     '==' ;
BINOP_GREATER:      '>' ;
BINOP_LESSER:       '<' ;
BINOP_GTE:          '>=' ;
BINOP_LTE:          '<=' ;
BINOP_ADD:          '+' ;
BINOP_MINUS:        '-' ;
BINOP_MULT:         '*' ;
BINOP_DIVIDE:       '/' ;
BINOP_BOOL_OR:      '||';
BINOP_BOOL_AND:     '&&';
BINOP_ASSIGN:       '=' ;


PREFIX_UNARY_OPS: '~' | '!' | '@';
SUFFIX_UNARY_OPS: '++' | '--' ;

POINTER_SYMBOL: '^' ;

TEMPLATE_ID: ID '<';

ID: [a-zA-Z_][a-zA-Z0-9_]*;
LITERAL_INT: [0-9]+; 
LITERAL_STRING: '"' ( '\\"' | ~["\r\n] )* '"';
WS: [ \t\r\n]+ -> skip;