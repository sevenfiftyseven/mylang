
// Generated from base_lexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  base_lexer : public antlr4::Lexer {
public:
  enum {
    SINGLE_LINE_COMMENT = 1, MULTI_LINE_COMMENT = 2, LPAREN = 3, RPAREN = 4, 
    LBRACKET = 5, RBRACKET = 6, SEMI = 7, IF = 8, ELSE = 9, FOR = 10, KEYWORD_TYPES = 11, 
    LITERAL_BOOL = 12, NEW_KEYWORD = 13, ALLOC_KEYWORD = 14, RETURN = 15, 
    FREE = 16, DOT = 17, COMMA = 18, STATIC = 19, CAST = 20, CONSTRUCTOR = 21, 
    STRUCT_KEYWORD = 22, BOOLEAN_KEYWORD = 23, BINOP_EQUALITY = 24, BINOP_GREATER = 25, 
    BINOP_LESSER = 26, BINOP_GTE = 27, BINOP_LTE = 28, BINOP_ADD = 29, BINOP_MINUS = 30, 
    BINOP_MULT = 31, BINOP_DIVIDE = 32, BINOP_BOOL_OR = 33, BINOP_BOOL_AND = 34, 
    BINOP_ASSIGN = 35, PREFIX_UNARY_OPS = 36, SUFFIX_UNARY_OPS = 37, POINTER_SYMBOL = 38, 
    TEMPLATE_ID = 39, ID = 40, LITERAL_INT = 41, LITERAL_STRING = 42, WS = 43
  };

  explicit base_lexer(antlr4::CharStream *input);

  ~base_lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

