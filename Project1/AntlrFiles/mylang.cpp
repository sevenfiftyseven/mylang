
// Generated from mylang.g4 by ANTLR 4.13.1


#include "mylangListener.h"
#include "mylangVisitor.h"

#include "mylang.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MylangStaticData final {
  MylangStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MylangStaticData(const MylangStaticData&) = delete;
  MylangStaticData(MylangStaticData&&) = delete;
  MylangStaticData& operator=(const MylangStaticData&) = delete;
  MylangStaticData& operator=(MylangStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mylangParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MylangStaticData *mylangParserStaticData = nullptr;

void mylangParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mylangParserStaticData != nullptr) {
    return;
  }
#else
  assert(mylangParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MylangStaticData>(
    std::vector<std::string>{
      "program", "tlsList", "topLevelStatement", "emptyStatement", "memberStatement", 
      "functionDeclaration", "castFunctionDeclaration", "constructorDeclaration", 
      "structDeclaration", "statementList", "statement", "expressionStatement", 
      "controlStatement", "ifStatement", "elseClause", "allocExpression", 
      "newExpression", "returnStatement", "variableDeclaration", "basicForStatement", 
      "primary_expression", "expression", "invocationSuffix", "argumentList", 
      "literalExpression", "identifierExpression", "parameterList", "parameter", 
      "typeSpecifier", "typeArgumentList", "binary_operator"
    },
    std::vector<std::string>{
      "", "", "", "'('", "')'", "'{'", "'}'", "';'", "'if'", "'else'", "'for'", 
      "", "", "'new'", "'alloc'", "'return'", "'free'", "'.'", "','", "'static'", 
      "'cast'", "'constructor'", "'struct'", "", "'=='", "'>'", "'<'", "'>='", 
      "'<='", "'+'", "'-'", "'*'", "'/'", "'||'", "'&&'", "'='", "", "", 
      "'^'"
    },
    std::vector<std::string>{
      "", "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", "LPAREN", "RPAREN", 
      "LBRACKET", "RBRACKET", "SEMI", "IF", "ELSE", "FOR", "KEYWORD_TYPES", 
      "LITERAL_BOOL", "NEW_KEYWORD", "ALLOC_KEYWORD", "RETURN", "FREE", 
      "DOT", "COMMA", "STATIC", "CAST", "CONSTRUCTOR", "STRUCT_KEYWORD", 
      "BOOLEAN_KEYWORD", "BINOP_EQUALITY", "BINOP_GREATER", "BINOP_LESSER", 
      "BINOP_GTE", "BINOP_LTE", "BINOP_ADD", "BINOP_MINUS", "BINOP_MULT", 
      "BINOP_DIVIDE", "BINOP_BOOL_OR", "BINOP_BOOL_AND", "BINOP_ASSIGN", 
      "PREFIX_UNARY_OPS", "SUFFIX_UNARY_OPS", "POINTER_SYMBOL", "TEMPLATE_ID", 
      "ID", "LITERAL_INT", "LITERAL_STRING", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,43,298,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,1,0,1,0,1,0,1,1,5,1,67,8,1,10,1,12,1,70,9,1,1,
  	2,1,2,3,2,74,8,2,1,3,1,3,1,3,1,4,1,4,1,4,1,4,3,4,83,8,4,1,5,1,5,1,5,1,
  	5,3,5,89,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,98,8,5,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,7,1,7,1,7,3,7,111,8,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,119,
  	8,7,1,8,1,8,1,8,1,8,5,8,125,8,8,10,8,12,8,128,9,8,1,8,1,8,1,9,5,9,133,
  	8,9,10,9,12,9,136,9,9,1,10,1,10,1,10,3,10,141,8,10,1,11,1,11,1,11,1,12,
  	1,12,1,12,3,12,149,8,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,
  	159,8,13,1,14,1,14,1,14,1,14,1,14,1,14,3,14,167,8,14,1,15,1,15,1,15,1,
  	15,3,15,173,8,15,1,15,1,15,1,16,1,16,1,16,1,16,3,16,181,8,16,1,16,1,16,
  	1,17,1,17,3,17,187,8,17,1,17,1,17,1,18,3,18,192,8,18,1,18,1,18,1,18,1,
  	18,3,18,198,8,18,1,18,1,18,1,19,1,19,1,19,3,19,205,8,19,1,19,1,19,1,19,
  	1,19,3,19,211,8,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,3,20,220,8,20,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,231,8,21,1,21,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,5,21,244,8,21,10,21,12,21,
  	247,9,21,1,22,1,22,3,22,251,8,22,1,22,1,22,1,23,1,23,1,23,5,23,258,8,
  	23,10,23,12,23,261,9,23,1,24,1,24,1,25,1,25,1,25,3,25,268,8,25,1,26,1,
  	26,1,26,5,26,273,8,26,10,26,12,26,276,9,26,1,27,1,27,1,27,1,28,1,28,1,
  	28,1,28,1,28,3,28,286,8,28,1,29,1,29,1,29,5,29,291,8,29,10,29,12,29,294,
  	9,29,1,30,1,30,1,30,0,1,42,31,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,0,3,2,0,12,12,41,42,2,
  	0,11,11,40,40,1,0,23,35,305,0,62,1,0,0,0,2,68,1,0,0,0,4,73,1,0,0,0,6,
  	75,1,0,0,0,8,82,1,0,0,0,10,84,1,0,0,0,12,99,1,0,0,0,14,107,1,0,0,0,16,
  	120,1,0,0,0,18,134,1,0,0,0,20,140,1,0,0,0,22,142,1,0,0,0,24,148,1,0,0,
  	0,26,150,1,0,0,0,28,160,1,0,0,0,30,168,1,0,0,0,32,176,1,0,0,0,34,184,
  	1,0,0,0,36,191,1,0,0,0,38,201,1,0,0,0,40,219,1,0,0,0,42,230,1,0,0,0,44,
  	248,1,0,0,0,46,254,1,0,0,0,48,262,1,0,0,0,50,267,1,0,0,0,52,269,1,0,0,
  	0,54,277,1,0,0,0,56,285,1,0,0,0,58,287,1,0,0,0,60,295,1,0,0,0,62,63,3,
  	2,1,0,63,64,5,0,0,1,64,1,1,0,0,0,65,67,3,4,2,0,66,65,1,0,0,0,67,70,1,
  	0,0,0,68,66,1,0,0,0,68,69,1,0,0,0,69,3,1,0,0,0,70,68,1,0,0,0,71,74,3,
  	10,5,0,72,74,3,16,8,0,73,71,1,0,0,0,73,72,1,0,0,0,74,5,1,0,0,0,75,76,
  	5,5,0,0,76,77,5,6,0,0,77,7,1,0,0,0,78,83,3,10,5,0,79,83,3,36,18,0,80,
  	83,3,12,6,0,81,83,3,14,7,0,82,78,1,0,0,0,82,79,1,0,0,0,82,80,1,0,0,0,
  	82,81,1,0,0,0,83,9,1,0,0,0,84,85,3,56,28,0,85,86,5,40,0,0,86,88,5,3,0,
  	0,87,89,3,52,26,0,88,87,1,0,0,0,88,89,1,0,0,0,89,90,1,0,0,0,90,97,5,4,
  	0,0,91,98,3,6,3,0,92,93,5,5,0,0,93,94,3,18,9,0,94,95,5,6,0,0,95,98,1,
  	0,0,0,96,98,5,7,0,0,97,91,1,0,0,0,97,92,1,0,0,0,97,96,1,0,0,0,98,11,1,
  	0,0,0,99,100,5,20,0,0,100,101,3,56,28,0,101,102,5,3,0,0,102,103,5,4,0,
  	0,103,104,5,5,0,0,104,105,3,18,9,0,105,106,5,6,0,0,106,13,1,0,0,0,107,
  	108,5,21,0,0,108,110,5,3,0,0,109,111,3,52,26,0,110,109,1,0,0,0,110,111,
  	1,0,0,0,111,112,1,0,0,0,112,118,5,4,0,0,113,119,3,6,3,0,114,115,5,5,0,
  	0,115,116,3,18,9,0,116,117,5,6,0,0,117,119,1,0,0,0,118,113,1,0,0,0,118,
  	114,1,0,0,0,119,15,1,0,0,0,120,121,5,22,0,0,121,122,5,40,0,0,122,126,
  	5,5,0,0,123,125,3,8,4,0,124,123,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,
  	0,126,127,1,0,0,0,127,129,1,0,0,0,128,126,1,0,0,0,129,130,5,6,0,0,130,
  	17,1,0,0,0,131,133,3,20,10,0,132,131,1,0,0,0,133,136,1,0,0,0,134,132,
  	1,0,0,0,134,135,1,0,0,0,135,19,1,0,0,0,136,134,1,0,0,0,137,141,3,22,11,
  	0,138,141,3,24,12,0,139,141,3,36,18,0,140,137,1,0,0,0,140,138,1,0,0,0,
  	140,139,1,0,0,0,141,21,1,0,0,0,142,143,3,42,21,0,143,144,5,7,0,0,144,
  	23,1,0,0,0,145,149,3,26,13,0,146,149,3,38,19,0,147,149,3,34,17,0,148,
  	145,1,0,0,0,148,146,1,0,0,0,148,147,1,0,0,0,149,25,1,0,0,0,150,151,5,
  	8,0,0,151,152,5,3,0,0,152,153,3,42,21,0,153,154,5,4,0,0,154,155,5,5,0,
  	0,155,156,3,18,9,0,156,158,5,6,0,0,157,159,3,28,14,0,158,157,1,0,0,0,
  	158,159,1,0,0,0,159,27,1,0,0,0,160,166,5,9,0,0,161,167,3,26,13,0,162,
  	163,5,5,0,0,163,164,3,18,9,0,164,165,5,6,0,0,165,167,1,0,0,0,166,161,
  	1,0,0,0,166,162,1,0,0,0,167,29,1,0,0,0,168,169,5,14,0,0,169,170,3,56,
  	28,0,170,172,5,3,0,0,171,173,3,46,23,0,172,171,1,0,0,0,172,173,1,0,0,
  	0,173,174,1,0,0,0,174,175,5,4,0,0,175,31,1,0,0,0,176,177,5,13,0,0,177,
  	178,3,56,28,0,178,180,5,3,0,0,179,181,3,46,23,0,180,179,1,0,0,0,180,181,
  	1,0,0,0,181,182,1,0,0,0,182,183,5,4,0,0,183,33,1,0,0,0,184,186,5,15,0,
  	0,185,187,3,42,21,0,186,185,1,0,0,0,186,187,1,0,0,0,187,188,1,0,0,0,188,
  	189,5,7,0,0,189,35,1,0,0,0,190,192,5,19,0,0,191,190,1,0,0,0,191,192,1,
  	0,0,0,192,193,1,0,0,0,193,194,3,56,28,0,194,197,5,40,0,0,195,196,5,35,
  	0,0,196,198,3,42,21,0,197,195,1,0,0,0,197,198,1,0,0,0,198,199,1,0,0,0,
  	199,200,5,7,0,0,200,37,1,0,0,0,201,202,5,10,0,0,202,204,5,3,0,0,203,205,
  	3,36,18,0,204,203,1,0,0,0,204,205,1,0,0,0,205,206,1,0,0,0,206,207,5,7,
  	0,0,207,208,3,42,21,0,208,210,5,7,0,0,209,211,3,42,21,0,210,209,1,0,0,
  	0,210,211,1,0,0,0,211,212,1,0,0,0,212,213,5,4,0,0,213,214,5,5,0,0,214,
  	215,3,18,9,0,215,216,5,6,0,0,216,39,1,0,0,0,217,220,3,48,24,0,218,220,
  	3,50,25,0,219,217,1,0,0,0,219,218,1,0,0,0,220,41,1,0,0,0,221,222,6,21,
  	-1,0,222,231,3,40,20,0,223,224,5,36,0,0,224,231,3,42,21,3,225,226,5,3,
  	0,0,226,227,3,56,28,0,227,228,5,4,0,0,228,229,3,42,21,2,229,231,1,0,0,
  	0,230,221,1,0,0,0,230,223,1,0,0,0,230,225,1,0,0,0,231,245,1,0,0,0,232,
  	233,10,6,0,0,233,234,3,60,30,0,234,235,3,42,21,7,235,244,1,0,0,0,236,
  	237,10,5,0,0,237,238,5,17,0,0,238,244,3,50,25,0,239,240,10,4,0,0,240,
  	244,5,37,0,0,241,242,10,1,0,0,242,244,3,44,22,0,243,232,1,0,0,0,243,236,
  	1,0,0,0,243,239,1,0,0,0,243,241,1,0,0,0,244,247,1,0,0,0,245,243,1,0,0,
  	0,245,246,1,0,0,0,246,43,1,0,0,0,247,245,1,0,0,0,248,250,5,3,0,0,249,
  	251,3,46,23,0,250,249,1,0,0,0,250,251,1,0,0,0,251,252,1,0,0,0,252,253,
  	5,4,0,0,253,45,1,0,0,0,254,259,3,42,21,0,255,256,5,18,0,0,256,258,3,42,
  	21,0,257,255,1,0,0,0,258,261,1,0,0,0,259,257,1,0,0,0,259,260,1,0,0,0,
  	260,47,1,0,0,0,261,259,1,0,0,0,262,263,7,0,0,0,263,49,1,0,0,0,264,268,
  	5,40,0,0,265,268,3,56,28,0,266,268,5,21,0,0,267,264,1,0,0,0,267,265,1,
  	0,0,0,267,266,1,0,0,0,268,51,1,0,0,0,269,274,3,54,27,0,270,271,5,18,0,
  	0,271,273,3,54,27,0,272,270,1,0,0,0,273,276,1,0,0,0,274,272,1,0,0,0,274,
  	275,1,0,0,0,275,53,1,0,0,0,276,274,1,0,0,0,277,278,3,56,28,0,278,279,
  	5,40,0,0,279,55,1,0,0,0,280,281,5,39,0,0,281,282,3,58,29,0,282,283,5,
  	25,0,0,283,286,1,0,0,0,284,286,7,1,0,0,285,280,1,0,0,0,285,284,1,0,0,
  	0,286,57,1,0,0,0,287,292,3,56,28,0,288,289,5,18,0,0,289,291,3,56,28,0,
  	290,288,1,0,0,0,291,294,1,0,0,0,292,290,1,0,0,0,292,293,1,0,0,0,293,59,
  	1,0,0,0,294,292,1,0,0,0,295,296,7,2,0,0,296,61,1,0,0,0,30,68,73,82,88,
  	97,110,118,126,134,140,148,158,166,172,180,186,191,197,204,210,219,230,
  	243,245,250,259,267,274,285,292
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mylangParserStaticData = staticData.release();
}

}

mylang::mylang(TokenStream *input) : mylang(input, antlr4::atn::ParserATNSimulatorOptions()) {}

mylang::mylang(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  mylang::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mylangParserStaticData->atn, mylangParserStaticData->decisionToDFA, mylangParserStaticData->sharedContextCache, options);
}

mylang::~mylang() {
  delete _interpreter;
}

const atn::ATN& mylang::getATN() const {
  return *mylangParserStaticData->atn;
}

std::string mylang::getGrammarFileName() const {
  return "mylang.g4";
}

const std::vector<std::string>& mylang::getRuleNames() const {
  return mylangParserStaticData->ruleNames;
}

const dfa::Vocabulary& mylang::getVocabulary() const {
  return mylangParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView mylang::getSerializedATN() const {
  return mylangParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

mylang::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mylang::TlsListContext* mylang::ProgramContext::tlsList() {
  return getRuleContext<mylang::TlsListContext>(0);
}

tree::TerminalNode* mylang::ProgramContext::EOF() {
  return getToken(mylang::EOF, 0);
}


size_t mylang::ProgramContext::getRuleIndex() const {
  return mylang::RuleProgram;
}

void mylang::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void mylang::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any mylang::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

mylang::ProgramContext* mylang::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, mylang::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    tlsList();
    setState(63);
    match(mylang::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TlsListContext ------------------------------------------------------------------

mylang::TlsListContext::TlsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<mylang::TopLevelStatementContext *> mylang::TlsListContext::topLevelStatement() {
  return getRuleContexts<mylang::TopLevelStatementContext>();
}

mylang::TopLevelStatementContext* mylang::TlsListContext::topLevelStatement(size_t i) {
  return getRuleContext<mylang::TopLevelStatementContext>(i);
}


size_t mylang::TlsListContext::getRuleIndex() const {
  return mylang::RuleTlsList;
}

void mylang::TlsListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTlsList(this);
}

void mylang::TlsListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTlsList(this);
}


std::any mylang::TlsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitTlsList(this);
  else
    return visitor->visitChildren(this);
}

mylang::TlsListContext* mylang::tlsList() {
  TlsListContext *_localctx = _tracker.createInstance<TlsListContext>(_ctx, getState());
  enterRule(_localctx, 2, mylang::RuleTlsList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1649271638016) != 0)) {
      setState(65);
      topLevelStatement();
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopLevelStatementContext ------------------------------------------------------------------

mylang::TopLevelStatementContext::TopLevelStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mylang::FunctionDeclarationContext* mylang::TopLevelStatementContext::functionDeclaration() {
  return getRuleContext<mylang::FunctionDeclarationContext>(0);
}

mylang::StructDeclarationContext* mylang::TopLevelStatementContext::structDeclaration() {
  return getRuleContext<mylang::StructDeclarationContext>(0);
}


size_t mylang::TopLevelStatementContext::getRuleIndex() const {
  return mylang::RuleTopLevelStatement;
}

void mylang::TopLevelStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopLevelStatement(this);
}

void mylang::TopLevelStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopLevelStatement(this);
}


std::any mylang::TopLevelStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitTopLevelStatement(this);
  else
    return visitor->visitChildren(this);
}

mylang::TopLevelStatementContext* mylang::topLevelStatement() {
  TopLevelStatementContext *_localctx = _tracker.createInstance<TopLevelStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, mylang::RuleTopLevelStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mylang::KEYWORD_TYPES:
      case mylang::TEMPLATE_ID:
      case mylang::ID: {
        enterOuterAlt(_localctx, 1);
        setState(71);
        functionDeclaration();
        break;
      }

      case mylang::STRUCT_KEYWORD: {
        enterOuterAlt(_localctx, 2);
        setState(72);
        structDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

mylang::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::EmptyStatementContext::LBRACKET() {
  return getToken(mylang::LBRACKET, 0);
}

tree::TerminalNode* mylang::EmptyStatementContext::RBRACKET() {
  return getToken(mylang::RBRACKET, 0);
}


size_t mylang::EmptyStatementContext::getRuleIndex() const {
  return mylang::RuleEmptyStatement;
}

void mylang::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void mylang::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}


std::any mylang::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

mylang::EmptyStatementContext* mylang::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, mylang::RuleEmptyStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(mylang::LBRACKET);
    setState(76);
    match(mylang::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberStatementContext ------------------------------------------------------------------

mylang::MemberStatementContext::MemberStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mylang::FunctionDeclarationContext* mylang::MemberStatementContext::functionDeclaration() {
  return getRuleContext<mylang::FunctionDeclarationContext>(0);
}

mylang::VariableDeclarationContext* mylang::MemberStatementContext::variableDeclaration() {
  return getRuleContext<mylang::VariableDeclarationContext>(0);
}

mylang::CastFunctionDeclarationContext* mylang::MemberStatementContext::castFunctionDeclaration() {
  return getRuleContext<mylang::CastFunctionDeclarationContext>(0);
}

mylang::ConstructorDeclarationContext* mylang::MemberStatementContext::constructorDeclaration() {
  return getRuleContext<mylang::ConstructorDeclarationContext>(0);
}


size_t mylang::MemberStatementContext::getRuleIndex() const {
  return mylang::RuleMemberStatement;
}

void mylang::MemberStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberStatement(this);
}

void mylang::MemberStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberStatement(this);
}


std::any mylang::MemberStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitMemberStatement(this);
  else
    return visitor->visitChildren(this);
}

mylang::MemberStatementContext* mylang::memberStatement() {
  MemberStatementContext *_localctx = _tracker.createInstance<MemberStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, mylang::RuleMemberStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      functionDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(79);
      variableDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(80);
      castFunctionDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(81);
      constructorDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

mylang::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mylang::TypeSpecifierContext* mylang::FunctionDeclarationContext::typeSpecifier() {
  return getRuleContext<mylang::TypeSpecifierContext>(0);
}

tree::TerminalNode* mylang::FunctionDeclarationContext::ID() {
  return getToken(mylang::ID, 0);
}

tree::TerminalNode* mylang::FunctionDeclarationContext::LPAREN() {
  return getToken(mylang::LPAREN, 0);
}

tree::TerminalNode* mylang::FunctionDeclarationContext::RPAREN() {
  return getToken(mylang::RPAREN, 0);
}

mylang::EmptyStatementContext* mylang::FunctionDeclarationContext::emptyStatement() {
  return getRuleContext<mylang::EmptyStatementContext>(0);
}

tree::TerminalNode* mylang::FunctionDeclarationContext::SEMI() {
  return getToken(mylang::SEMI, 0);
}

mylang::ParameterListContext* mylang::FunctionDeclarationContext::parameterList() {
  return getRuleContext<mylang::ParameterListContext>(0);
}

tree::TerminalNode* mylang::FunctionDeclarationContext::LBRACKET() {
  return getToken(mylang::LBRACKET, 0);
}

mylang::StatementListContext* mylang::FunctionDeclarationContext::statementList() {
  return getRuleContext<mylang::StatementListContext>(0);
}

tree::TerminalNode* mylang::FunctionDeclarationContext::RBRACKET() {
  return getToken(mylang::RBRACKET, 0);
}


size_t mylang::FunctionDeclarationContext::getRuleIndex() const {
  return mylang::RuleFunctionDeclaration;
}

void mylang::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void mylang::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


std::any mylang::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

mylang::FunctionDeclarationContext* mylang::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, mylang::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    typeSpecifier();
    setState(85);
    match(mylang::ID);
    setState(86);
    match(mylang::LPAREN);
    setState(88);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1649267443712) != 0)) {
      setState(87);
      parameterList();
    }
    setState(90);
    match(mylang::RPAREN);
    setState(97);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(91);
      emptyStatement();
      break;
    }

    case 2: {
      setState(92);
      match(mylang::LBRACKET);
      setState(93);
      statementList();
      setState(94);
      match(mylang::RBRACKET);
      break;
    }

    case 3: {
      setState(96);
      match(mylang::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastFunctionDeclarationContext ------------------------------------------------------------------

mylang::CastFunctionDeclarationContext::CastFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::CastFunctionDeclarationContext::CAST() {
  return getToken(mylang::CAST, 0);
}

mylang::TypeSpecifierContext* mylang::CastFunctionDeclarationContext::typeSpecifier() {
  return getRuleContext<mylang::TypeSpecifierContext>(0);
}

tree::TerminalNode* mylang::CastFunctionDeclarationContext::LPAREN() {
  return getToken(mylang::LPAREN, 0);
}

tree::TerminalNode* mylang::CastFunctionDeclarationContext::RPAREN() {
  return getToken(mylang::RPAREN, 0);
}

tree::TerminalNode* mylang::CastFunctionDeclarationContext::LBRACKET() {
  return getToken(mylang::LBRACKET, 0);
}

mylang::StatementListContext* mylang::CastFunctionDeclarationContext::statementList() {
  return getRuleContext<mylang::StatementListContext>(0);
}

tree::TerminalNode* mylang::CastFunctionDeclarationContext::RBRACKET() {
  return getToken(mylang::RBRACKET, 0);
}


size_t mylang::CastFunctionDeclarationContext::getRuleIndex() const {
  return mylang::RuleCastFunctionDeclaration;
}

void mylang::CastFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastFunctionDeclaration(this);
}

void mylang::CastFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastFunctionDeclaration(this);
}


std::any mylang::CastFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitCastFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

mylang::CastFunctionDeclarationContext* mylang::castFunctionDeclaration() {
  CastFunctionDeclarationContext *_localctx = _tracker.createInstance<CastFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, mylang::RuleCastFunctionDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(mylang::CAST);
    setState(100);
    typeSpecifier();
    setState(101);
    match(mylang::LPAREN);
    setState(102);
    match(mylang::RPAREN);

    setState(103);
    match(mylang::LBRACKET);
    setState(104);
    statementList();
    setState(105);
    match(mylang::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorDeclarationContext ------------------------------------------------------------------

mylang::ConstructorDeclarationContext::ConstructorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::ConstructorDeclarationContext::CONSTRUCTOR() {
  return getToken(mylang::CONSTRUCTOR, 0);
}

tree::TerminalNode* mylang::ConstructorDeclarationContext::LPAREN() {
  return getToken(mylang::LPAREN, 0);
}

tree::TerminalNode* mylang::ConstructorDeclarationContext::RPAREN() {
  return getToken(mylang::RPAREN, 0);
}

mylang::EmptyStatementContext* mylang::ConstructorDeclarationContext::emptyStatement() {
  return getRuleContext<mylang::EmptyStatementContext>(0);
}

mylang::ParameterListContext* mylang::ConstructorDeclarationContext::parameterList() {
  return getRuleContext<mylang::ParameterListContext>(0);
}

tree::TerminalNode* mylang::ConstructorDeclarationContext::LBRACKET() {
  return getToken(mylang::LBRACKET, 0);
}

mylang::StatementListContext* mylang::ConstructorDeclarationContext::statementList() {
  return getRuleContext<mylang::StatementListContext>(0);
}

tree::TerminalNode* mylang::ConstructorDeclarationContext::RBRACKET() {
  return getToken(mylang::RBRACKET, 0);
}


size_t mylang::ConstructorDeclarationContext::getRuleIndex() const {
  return mylang::RuleConstructorDeclaration;
}

void mylang::ConstructorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorDeclaration(this);
}

void mylang::ConstructorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorDeclaration(this);
}


std::any mylang::ConstructorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitConstructorDeclaration(this);
  else
    return visitor->visitChildren(this);
}

mylang::ConstructorDeclarationContext* mylang::constructorDeclaration() {
  ConstructorDeclarationContext *_localctx = _tracker.createInstance<ConstructorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, mylang::RuleConstructorDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(mylang::CONSTRUCTOR);
    setState(108);
    match(mylang::LPAREN);
    setState(110);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1649267443712) != 0)) {
      setState(109);
      parameterList();
    }
    setState(112);
    match(mylang::RPAREN);
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(113);
      emptyStatement();
      break;
    }

    case 2: {
      setState(114);
      match(mylang::LBRACKET);
      setState(115);
      statementList();
      setState(116);
      match(mylang::RBRACKET);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationContext ------------------------------------------------------------------

mylang::StructDeclarationContext::StructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::StructDeclarationContext::STRUCT_KEYWORD() {
  return getToken(mylang::STRUCT_KEYWORD, 0);
}

tree::TerminalNode* mylang::StructDeclarationContext::ID() {
  return getToken(mylang::ID, 0);
}

tree::TerminalNode* mylang::StructDeclarationContext::LBRACKET() {
  return getToken(mylang::LBRACKET, 0);
}

tree::TerminalNode* mylang::StructDeclarationContext::RBRACKET() {
  return getToken(mylang::RBRACKET, 0);
}

std::vector<mylang::MemberStatementContext *> mylang::StructDeclarationContext::memberStatement() {
  return getRuleContexts<mylang::MemberStatementContext>();
}

mylang::MemberStatementContext* mylang::StructDeclarationContext::memberStatement(size_t i) {
  return getRuleContext<mylang::MemberStatementContext>(i);
}


size_t mylang::StructDeclarationContext::getRuleIndex() const {
  return mylang::RuleStructDeclaration;
}

void mylang::StructDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclaration(this);
}

void mylang::StructDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclaration(this);
}


std::any mylang::StructDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitStructDeclaration(this);
  else
    return visitor->visitChildren(this);
}

mylang::StructDeclarationContext* mylang::structDeclaration() {
  StructDeclarationContext *_localctx = _tracker.createInstance<StructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, mylang::RuleStructDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(mylang::STRUCT_KEYWORD);
    setState(121);
    match(mylang::ID);
    setState(122);
    match(mylang::LBRACKET);
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1649271113728) != 0)) {
      setState(123);
      memberStatement();
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(129);
    match(mylang::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementListContext ------------------------------------------------------------------

mylang::StatementListContext::StatementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<mylang::StatementContext *> mylang::StatementListContext::statement() {
  return getRuleContexts<mylang::StatementContext>();
}

mylang::StatementContext* mylang::StatementListContext::statement(size_t i) {
  return getRuleContext<mylang::StatementContext>(i);
}


size_t mylang::StatementListContext::getRuleIndex() const {
  return mylang::RuleStatementList;
}

void mylang::StatementListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementList(this);
}

void mylang::StatementListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementList(this);
}


std::any mylang::StatementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitStatementList(this);
  else
    return visitor->visitChildren(this);
}

mylang::StatementListContext* mylang::statementList() {
  StatementListContext *_localctx = _tracker.createInstance<StatementListContext>(_ctx, getState());
  enterRule(_localctx, 18, mylang::RuleStatementList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8315059346696) != 0)) {
      setState(131);
      statement();
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

mylang::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mylang::ExpressionStatementContext* mylang::StatementContext::expressionStatement() {
  return getRuleContext<mylang::ExpressionStatementContext>(0);
}

mylang::ControlStatementContext* mylang::StatementContext::controlStatement() {
  return getRuleContext<mylang::ControlStatementContext>(0);
}

mylang::VariableDeclarationContext* mylang::StatementContext::variableDeclaration() {
  return getRuleContext<mylang::VariableDeclarationContext>(0);
}


size_t mylang::StatementContext::getRuleIndex() const {
  return mylang::RuleStatement;
}

void mylang::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void mylang::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any mylang::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

mylang::StatementContext* mylang::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 20, mylang::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(137);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(138);
      controlStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(139);
      variableDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

mylang::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mylang::ExpressionContext* mylang::ExpressionStatementContext::expression() {
  return getRuleContext<mylang::ExpressionContext>(0);
}

tree::TerminalNode* mylang::ExpressionStatementContext::SEMI() {
  return getToken(mylang::SEMI, 0);
}


size_t mylang::ExpressionStatementContext::getRuleIndex() const {
  return mylang::RuleExpressionStatement;
}

void mylang::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void mylang::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


std::any mylang::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

mylang::ExpressionStatementContext* mylang::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, mylang::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    expression(0);
    setState(143);
    match(mylang::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlStatementContext ------------------------------------------------------------------

mylang::ControlStatementContext::ControlStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mylang::IfStatementContext* mylang::ControlStatementContext::ifStatement() {
  return getRuleContext<mylang::IfStatementContext>(0);
}

mylang::BasicForStatementContext* mylang::ControlStatementContext::basicForStatement() {
  return getRuleContext<mylang::BasicForStatementContext>(0);
}

mylang::ReturnStatementContext* mylang::ControlStatementContext::returnStatement() {
  return getRuleContext<mylang::ReturnStatementContext>(0);
}


size_t mylang::ControlStatementContext::getRuleIndex() const {
  return mylang::RuleControlStatement;
}

void mylang::ControlStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlStatement(this);
}

void mylang::ControlStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlStatement(this);
}


std::any mylang::ControlStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitControlStatement(this);
  else
    return visitor->visitChildren(this);
}

mylang::ControlStatementContext* mylang::controlStatement() {
  ControlStatementContext *_localctx = _tracker.createInstance<ControlStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, mylang::RuleControlStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(148);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mylang::IF: {
        enterOuterAlt(_localctx, 1);
        setState(145);
        ifStatement();
        break;
      }

      case mylang::FOR: {
        enterOuterAlt(_localctx, 2);
        setState(146);
        basicForStatement();
        break;
      }

      case mylang::RETURN: {
        enterOuterAlt(_localctx, 3);
        setState(147);
        returnStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

mylang::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::IfStatementContext::IF() {
  return getToken(mylang::IF, 0);
}

tree::TerminalNode* mylang::IfStatementContext::LPAREN() {
  return getToken(mylang::LPAREN, 0);
}

mylang::ExpressionContext* mylang::IfStatementContext::expression() {
  return getRuleContext<mylang::ExpressionContext>(0);
}

tree::TerminalNode* mylang::IfStatementContext::RPAREN() {
  return getToken(mylang::RPAREN, 0);
}

tree::TerminalNode* mylang::IfStatementContext::LBRACKET() {
  return getToken(mylang::LBRACKET, 0);
}

mylang::StatementListContext* mylang::IfStatementContext::statementList() {
  return getRuleContext<mylang::StatementListContext>(0);
}

tree::TerminalNode* mylang::IfStatementContext::RBRACKET() {
  return getToken(mylang::RBRACKET, 0);
}

mylang::ElseClauseContext* mylang::IfStatementContext::elseClause() {
  return getRuleContext<mylang::ElseClauseContext>(0);
}


size_t mylang::IfStatementContext::getRuleIndex() const {
  return mylang::RuleIfStatement;
}

void mylang::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void mylang::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


std::any mylang::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

mylang::IfStatementContext* mylang::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, mylang::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(mylang::IF);
    setState(151);
    match(mylang::LPAREN);
    setState(152);
    expression(0);
    setState(153);
    match(mylang::RPAREN);
    setState(154);
    match(mylang::LBRACKET);
    setState(155);
    statementList();
    setState(156);
    match(mylang::RBRACKET);
    setState(158);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mylang::ELSE) {
      setState(157);
      elseClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseClauseContext ------------------------------------------------------------------

mylang::ElseClauseContext::ElseClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::ElseClauseContext::ELSE() {
  return getToken(mylang::ELSE, 0);
}

mylang::IfStatementContext* mylang::ElseClauseContext::ifStatement() {
  return getRuleContext<mylang::IfStatementContext>(0);
}

tree::TerminalNode* mylang::ElseClauseContext::LBRACKET() {
  return getToken(mylang::LBRACKET, 0);
}

mylang::StatementListContext* mylang::ElseClauseContext::statementList() {
  return getRuleContext<mylang::StatementListContext>(0);
}

tree::TerminalNode* mylang::ElseClauseContext::RBRACKET() {
  return getToken(mylang::RBRACKET, 0);
}


size_t mylang::ElseClauseContext::getRuleIndex() const {
  return mylang::RuleElseClause;
}

void mylang::ElseClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseClause(this);
}

void mylang::ElseClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseClause(this);
}


std::any mylang::ElseClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitElseClause(this);
  else
    return visitor->visitChildren(this);
}

mylang::ElseClauseContext* mylang::elseClause() {
  ElseClauseContext *_localctx = _tracker.createInstance<ElseClauseContext>(_ctx, getState());
  enterRule(_localctx, 28, mylang::RuleElseClause);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(mylang::ELSE);
    setState(166);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mylang::IF: {
        setState(161);
        ifStatement();
        break;
      }

      case mylang::LBRACKET: {
        setState(162);
        match(mylang::LBRACKET);
        setState(163);
        statementList();
        setState(164);
        match(mylang::RBRACKET);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AllocExpressionContext ------------------------------------------------------------------

mylang::AllocExpressionContext::AllocExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::AllocExpressionContext::ALLOC_KEYWORD() {
  return getToken(mylang::ALLOC_KEYWORD, 0);
}

mylang::TypeSpecifierContext* mylang::AllocExpressionContext::typeSpecifier() {
  return getRuleContext<mylang::TypeSpecifierContext>(0);
}

tree::TerminalNode* mylang::AllocExpressionContext::LPAREN() {
  return getToken(mylang::LPAREN, 0);
}

tree::TerminalNode* mylang::AllocExpressionContext::RPAREN() {
  return getToken(mylang::RPAREN, 0);
}

mylang::ArgumentListContext* mylang::AllocExpressionContext::argumentList() {
  return getRuleContext<mylang::ArgumentListContext>(0);
}


size_t mylang::AllocExpressionContext::getRuleIndex() const {
  return mylang::RuleAllocExpression;
}

void mylang::AllocExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAllocExpression(this);
}

void mylang::AllocExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAllocExpression(this);
}


std::any mylang::AllocExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitAllocExpression(this);
  else
    return visitor->visitChildren(this);
}

mylang::AllocExpressionContext* mylang::allocExpression() {
  AllocExpressionContext *_localctx = _tracker.createInstance<AllocExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, mylang::RuleAllocExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(mylang::ALLOC_KEYWORD);
    setState(169);
    typeSpecifier();
    setState(170);
    match(mylang::LPAREN);
    setState(172);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8315058788360) != 0)) {
      setState(171);
      argumentList();
    }
    setState(174);
    match(mylang::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewExpressionContext ------------------------------------------------------------------

mylang::NewExpressionContext::NewExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::NewExpressionContext::NEW_KEYWORD() {
  return getToken(mylang::NEW_KEYWORD, 0);
}

mylang::TypeSpecifierContext* mylang::NewExpressionContext::typeSpecifier() {
  return getRuleContext<mylang::TypeSpecifierContext>(0);
}

tree::TerminalNode* mylang::NewExpressionContext::LPAREN() {
  return getToken(mylang::LPAREN, 0);
}

tree::TerminalNode* mylang::NewExpressionContext::RPAREN() {
  return getToken(mylang::RPAREN, 0);
}

mylang::ArgumentListContext* mylang::NewExpressionContext::argumentList() {
  return getRuleContext<mylang::ArgumentListContext>(0);
}


size_t mylang::NewExpressionContext::getRuleIndex() const {
  return mylang::RuleNewExpression;
}

void mylang::NewExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewExpression(this);
}

void mylang::NewExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewExpression(this);
}


std::any mylang::NewExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitNewExpression(this);
  else
    return visitor->visitChildren(this);
}

mylang::NewExpressionContext* mylang::newExpression() {
  NewExpressionContext *_localctx = _tracker.createInstance<NewExpressionContext>(_ctx, getState());
  enterRule(_localctx, 32, mylang::RuleNewExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(mylang::NEW_KEYWORD);
    setState(177);
    typeSpecifier();
    setState(178);
    match(mylang::LPAREN);
    setState(180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8315058788360) != 0)) {
      setState(179);
      argumentList();
    }
    setState(182);
    match(mylang::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

mylang::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::ReturnStatementContext::RETURN() {
  return getToken(mylang::RETURN, 0);
}

tree::TerminalNode* mylang::ReturnStatementContext::SEMI() {
  return getToken(mylang::SEMI, 0);
}

mylang::ExpressionContext* mylang::ReturnStatementContext::expression() {
  return getRuleContext<mylang::ExpressionContext>(0);
}


size_t mylang::ReturnStatementContext::getRuleIndex() const {
  return mylang::RuleReturnStatement;
}

void mylang::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void mylang::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


std::any mylang::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

mylang::ReturnStatementContext* mylang::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, mylang::RuleReturnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(mylang::RETURN);
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8315058788360) != 0)) {
      setState(185);
      expression(0);
    }
    setState(188);
    match(mylang::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

mylang::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mylang::TypeSpecifierContext* mylang::VariableDeclarationContext::typeSpecifier() {
  return getRuleContext<mylang::TypeSpecifierContext>(0);
}

tree::TerminalNode* mylang::VariableDeclarationContext::ID() {
  return getToken(mylang::ID, 0);
}

tree::TerminalNode* mylang::VariableDeclarationContext::SEMI() {
  return getToken(mylang::SEMI, 0);
}

tree::TerminalNode* mylang::VariableDeclarationContext::STATIC() {
  return getToken(mylang::STATIC, 0);
}

tree::TerminalNode* mylang::VariableDeclarationContext::BINOP_ASSIGN() {
  return getToken(mylang::BINOP_ASSIGN, 0);
}

mylang::ExpressionContext* mylang::VariableDeclarationContext::expression() {
  return getRuleContext<mylang::ExpressionContext>(0);
}


size_t mylang::VariableDeclarationContext::getRuleIndex() const {
  return mylang::RuleVariableDeclaration;
}

void mylang::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void mylang::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


std::any mylang::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

mylang::VariableDeclarationContext* mylang::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 36, mylang::RuleVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mylang::STATIC) {
      setState(190);
      match(mylang::STATIC);
    }
    setState(193);
    typeSpecifier();
    setState(194);
    match(mylang::ID);
    setState(197);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mylang::BINOP_ASSIGN) {
      setState(195);
      match(mylang::BINOP_ASSIGN);
      setState(196);
      expression(0);
    }
    setState(199);
    match(mylang::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicForStatementContext ------------------------------------------------------------------

mylang::BasicForStatementContext::BasicForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::BasicForStatementContext::FOR() {
  return getToken(mylang::FOR, 0);
}

tree::TerminalNode* mylang::BasicForStatementContext::LPAREN() {
  return getToken(mylang::LPAREN, 0);
}

std::vector<tree::TerminalNode *> mylang::BasicForStatementContext::SEMI() {
  return getTokens(mylang::SEMI);
}

tree::TerminalNode* mylang::BasicForStatementContext::SEMI(size_t i) {
  return getToken(mylang::SEMI, i);
}

tree::TerminalNode* mylang::BasicForStatementContext::RPAREN() {
  return getToken(mylang::RPAREN, 0);
}

tree::TerminalNode* mylang::BasicForStatementContext::LBRACKET() {
  return getToken(mylang::LBRACKET, 0);
}

mylang::StatementListContext* mylang::BasicForStatementContext::statementList() {
  return getRuleContext<mylang::StatementListContext>(0);
}

tree::TerminalNode* mylang::BasicForStatementContext::RBRACKET() {
  return getToken(mylang::RBRACKET, 0);
}

std::vector<mylang::ExpressionContext *> mylang::BasicForStatementContext::expression() {
  return getRuleContexts<mylang::ExpressionContext>();
}

mylang::ExpressionContext* mylang::BasicForStatementContext::expression(size_t i) {
  return getRuleContext<mylang::ExpressionContext>(i);
}

mylang::VariableDeclarationContext* mylang::BasicForStatementContext::variableDeclaration() {
  return getRuleContext<mylang::VariableDeclarationContext>(0);
}


size_t mylang::BasicForStatementContext::getRuleIndex() const {
  return mylang::RuleBasicForStatement;
}

void mylang::BasicForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicForStatement(this);
}

void mylang::BasicForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicForStatement(this);
}


std::any mylang::BasicForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitBasicForStatement(this);
  else
    return visitor->visitChildren(this);
}

mylang::BasicForStatementContext* mylang::basicForStatement() {
  BasicForStatementContext *_localctx = _tracker.createInstance<BasicForStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, mylang::RuleBasicForStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(mylang::FOR);
    setState(202);
    match(mylang::LPAREN);
    setState(204);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1649267968000) != 0)) {
      setState(203);
      antlrcpp::downCast<BasicForStatementContext *>(_localctx)->init = variableDeclaration();
    }
    setState(206);
    match(mylang::SEMI);
    setState(207);
    antlrcpp::downCast<BasicForStatementContext *>(_localctx)->condition = expression(0);
    setState(208);
    match(mylang::SEMI);
    setState(210);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8315058788360) != 0)) {
      setState(209);
      antlrcpp::downCast<BasicForStatementContext *>(_localctx)->update = expression(0);
    }
    setState(212);
    match(mylang::RPAREN);
    setState(213);
    match(mylang::LBRACKET);
    setState(214);
    statementList();
    setState(215);
    match(mylang::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_expressionContext ------------------------------------------------------------------

mylang::Primary_expressionContext::Primary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mylang::LiteralExpressionContext* mylang::Primary_expressionContext::literalExpression() {
  return getRuleContext<mylang::LiteralExpressionContext>(0);
}

mylang::IdentifierExpressionContext* mylang::Primary_expressionContext::identifierExpression() {
  return getRuleContext<mylang::IdentifierExpressionContext>(0);
}


size_t mylang::Primary_expressionContext::getRuleIndex() const {
  return mylang::RulePrimary_expression;
}

void mylang::Primary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary_expression(this);
}

void mylang::Primary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary_expression(this);
}


std::any mylang::Primary_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitPrimary_expression(this);
  else
    return visitor->visitChildren(this);
}

mylang::Primary_expressionContext* mylang::primary_expression() {
  Primary_expressionContext *_localctx = _tracker.createInstance<Primary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 40, mylang::RulePrimary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(219);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mylang::LITERAL_BOOL:
      case mylang::LITERAL_INT:
      case mylang::LITERAL_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(217);
        literalExpression();
        break;
      }

      case mylang::KEYWORD_TYPES:
      case mylang::CONSTRUCTOR:
      case mylang::TEMPLATE_ID:
      case mylang::ID: {
        enterOuterAlt(_localctx, 2);
        setState(218);
        identifierExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

mylang::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mylang::ExpressionContext::getRuleIndex() const {
  return mylang::RuleExpression;
}

void mylang::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

mylang::Primary_expressionContext* mylang::PrimaryExpressionContext::primary_expression() {
  return getRuleContext<mylang::Primary_expressionContext>(0);
}

mylang::PrimaryExpressionContext::PrimaryExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}
void mylang::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}

std::any mylang::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CastExpressionContext ------------------------------------------------------------------

tree::TerminalNode* mylang::CastExpressionContext::LPAREN() {
  return getToken(mylang::LPAREN, 0);
}

mylang::TypeSpecifierContext* mylang::CastExpressionContext::typeSpecifier() {
  return getRuleContext<mylang::TypeSpecifierContext>(0);
}

tree::TerminalNode* mylang::CastExpressionContext::RPAREN() {
  return getToken(mylang::RPAREN, 0);
}

mylang::ExpressionContext* mylang::CastExpressionContext::expression() {
  return getRuleContext<mylang::ExpressionContext>(0);
}

mylang::CastExpressionContext::CastExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::CastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastExpression(this);
}
void mylang::CastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastExpression(this);
}

std::any mylang::CastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitCastExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnarySuffixExprContext ------------------------------------------------------------------

mylang::ExpressionContext* mylang::UnarySuffixExprContext::expression() {
  return getRuleContext<mylang::ExpressionContext>(0);
}

tree::TerminalNode* mylang::UnarySuffixExprContext::SUFFIX_UNARY_OPS() {
  return getToken(mylang::SUFFIX_UNARY_OPS, 0);
}

mylang::UnarySuffixExprContext::UnarySuffixExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::UnarySuffixExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnarySuffixExpr(this);
}
void mylang::UnarySuffixExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnarySuffixExpr(this);
}

std::any mylang::UnarySuffixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitUnarySuffixExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallExprContext ------------------------------------------------------------------

mylang::ExpressionContext* mylang::FunctionCallExprContext::expression() {
  return getRuleContext<mylang::ExpressionContext>(0);
}

mylang::InvocationSuffixContext* mylang::FunctionCallExprContext::invocationSuffix() {
  return getRuleContext<mylang::InvocationSuffixContext>(0);
}

mylang::FunctionCallExprContext::FunctionCallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::FunctionCallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallExpr(this);
}
void mylang::FunctionCallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallExpr(this);
}

std::any mylang::FunctionCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MemberAccessExprContext ------------------------------------------------------------------

mylang::ExpressionContext* mylang::MemberAccessExprContext::expression() {
  return getRuleContext<mylang::ExpressionContext>(0);
}

tree::TerminalNode* mylang::MemberAccessExprContext::DOT() {
  return getToken(mylang::DOT, 0);
}

mylang::IdentifierExpressionContext* mylang::MemberAccessExprContext::identifierExpression() {
  return getRuleContext<mylang::IdentifierExpressionContext>(0);
}

mylang::MemberAccessExprContext::MemberAccessExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::MemberAccessExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccessExpr(this);
}
void mylang::MemberAccessExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccessExpr(this);
}

std::any mylang::MemberAccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitMemberAccessExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryOperatorExprContext ------------------------------------------------------------------

std::vector<mylang::ExpressionContext *> mylang::BinaryOperatorExprContext::expression() {
  return getRuleContexts<mylang::ExpressionContext>();
}

mylang::ExpressionContext* mylang::BinaryOperatorExprContext::expression(size_t i) {
  return getRuleContext<mylang::ExpressionContext>(i);
}

mylang::Binary_operatorContext* mylang::BinaryOperatorExprContext::binary_operator() {
  return getRuleContext<mylang::Binary_operatorContext>(0);
}

mylang::BinaryOperatorExprContext::BinaryOperatorExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::BinaryOperatorExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryOperatorExpr(this);
}
void mylang::BinaryOperatorExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryOperatorExpr(this);
}

std::any mylang::BinaryOperatorExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitBinaryOperatorExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryExpressionContext ------------------------------------------------------------------

tree::TerminalNode* mylang::UnaryExpressionContext::PREFIX_UNARY_OPS() {
  return getToken(mylang::PREFIX_UNARY_OPS, 0);
}

mylang::ExpressionContext* mylang::UnaryExpressionContext::expression() {
  return getRuleContext<mylang::ExpressionContext>(0);
}

mylang::UnaryExpressionContext::UnaryExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}
void mylang::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}

std::any mylang::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

mylang::ExpressionContext* mylang::expression() {
   return expression(0);
}

mylang::ExpressionContext* mylang::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mylang::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  mylang::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, mylang::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(230);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mylang::KEYWORD_TYPES:
      case mylang::LITERAL_BOOL:
      case mylang::CONSTRUCTOR:
      case mylang::TEMPLATE_ID:
      case mylang::ID:
      case mylang::LITERAL_INT:
      case mylang::LITERAL_STRING: {
        _localctx = _tracker.createInstance<PrimaryExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(222);
        primary_expression();
        break;
      }

      case mylang::PREFIX_UNARY_OPS: {
        _localctx = _tracker.createInstance<UnaryExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(223);
        match(mylang::PREFIX_UNARY_OPS);
        setState(224);
        expression(3);
        break;
      }

      case mylang::LPAREN: {
        _localctx = _tracker.createInstance<CastExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(225);
        match(mylang::LPAREN);
        setState(226);
        typeSpecifier();
        setState(227);
        match(mylang::RPAREN);
        setState(228);
        expression(2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(245);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(243);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryOperatorExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(232);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(233);
          binary_operator();
          setState(234);
          expression(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MemberAccessExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(236);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(237);
          match(mylang::DOT);
          setState(238);
          identifierExpression();
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<UnarySuffixExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(239);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(240);
          match(mylang::SUFFIX_UNARY_OPS);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<FunctionCallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(241);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(242);
          invocationSuffix();
          break;
        }

        default:
          break;
        } 
      }
      setState(247);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InvocationSuffixContext ------------------------------------------------------------------

mylang::InvocationSuffixContext::InvocationSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::InvocationSuffixContext::LPAREN() {
  return getToken(mylang::LPAREN, 0);
}

tree::TerminalNode* mylang::InvocationSuffixContext::RPAREN() {
  return getToken(mylang::RPAREN, 0);
}

mylang::ArgumentListContext* mylang::InvocationSuffixContext::argumentList() {
  return getRuleContext<mylang::ArgumentListContext>(0);
}


size_t mylang::InvocationSuffixContext::getRuleIndex() const {
  return mylang::RuleInvocationSuffix;
}

void mylang::InvocationSuffixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInvocationSuffix(this);
}

void mylang::InvocationSuffixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInvocationSuffix(this);
}


std::any mylang::InvocationSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitInvocationSuffix(this);
  else
    return visitor->visitChildren(this);
}

mylang::InvocationSuffixContext* mylang::invocationSuffix() {
  InvocationSuffixContext *_localctx = _tracker.createInstance<InvocationSuffixContext>(_ctx, getState());
  enterRule(_localctx, 44, mylang::RuleInvocationSuffix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(mylang::LPAREN);
    setState(250);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8315058788360) != 0)) {
      setState(249);
      argumentList();
    }
    setState(252);
    match(mylang::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

mylang::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<mylang::ExpressionContext *> mylang::ArgumentListContext::expression() {
  return getRuleContexts<mylang::ExpressionContext>();
}

mylang::ExpressionContext* mylang::ArgumentListContext::expression(size_t i) {
  return getRuleContext<mylang::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> mylang::ArgumentListContext::COMMA() {
  return getTokens(mylang::COMMA);
}

tree::TerminalNode* mylang::ArgumentListContext::COMMA(size_t i) {
  return getToken(mylang::COMMA, i);
}


size_t mylang::ArgumentListContext::getRuleIndex() const {
  return mylang::RuleArgumentList;
}

void mylang::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void mylang::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}


std::any mylang::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

mylang::ArgumentListContext* mylang::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 46, mylang::RuleArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    expression(0);
    setState(259);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mylang::COMMA) {
      setState(255);
      match(mylang::COMMA);
      setState(256);
      expression(0);
      setState(261);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralExpressionContext ------------------------------------------------------------------

mylang::LiteralExpressionContext::LiteralExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::LiteralExpressionContext::LITERAL_INT() {
  return getToken(mylang::LITERAL_INT, 0);
}

tree::TerminalNode* mylang::LiteralExpressionContext::LITERAL_STRING() {
  return getToken(mylang::LITERAL_STRING, 0);
}

tree::TerminalNode* mylang::LiteralExpressionContext::LITERAL_BOOL() {
  return getToken(mylang::LITERAL_BOOL, 0);
}


size_t mylang::LiteralExpressionContext::getRuleIndex() const {
  return mylang::RuleLiteralExpression;
}

void mylang::LiteralExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralExpression(this);
}

void mylang::LiteralExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralExpression(this);
}


std::any mylang::LiteralExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitLiteralExpression(this);
  else
    return visitor->visitChildren(this);
}

mylang::LiteralExpressionContext* mylang::literalExpression() {
  LiteralExpressionContext *_localctx = _tracker.createInstance<LiteralExpressionContext>(_ctx, getState());
  enterRule(_localctx, 48, mylang::RuleLiteralExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(262);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6597069770752) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierExpressionContext ------------------------------------------------------------------

mylang::IdentifierExpressionContext::IdentifierExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::IdentifierExpressionContext::ID() {
  return getToken(mylang::ID, 0);
}

mylang::TypeSpecifierContext* mylang::IdentifierExpressionContext::typeSpecifier() {
  return getRuleContext<mylang::TypeSpecifierContext>(0);
}

tree::TerminalNode* mylang::IdentifierExpressionContext::CONSTRUCTOR() {
  return getToken(mylang::CONSTRUCTOR, 0);
}


size_t mylang::IdentifierExpressionContext::getRuleIndex() const {
  return mylang::RuleIdentifierExpression;
}

void mylang::IdentifierExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpression(this);
}

void mylang::IdentifierExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpression(this);
}


std::any mylang::IdentifierExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitIdentifierExpression(this);
  else
    return visitor->visitChildren(this);
}

mylang::IdentifierExpressionContext* mylang::identifierExpression() {
  IdentifierExpressionContext *_localctx = _tracker.createInstance<IdentifierExpressionContext>(_ctx, getState());
  enterRule(_localctx, 50, mylang::RuleIdentifierExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(267);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(264);
      match(mylang::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(265);
      typeSpecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(266);
      match(mylang::CONSTRUCTOR);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

mylang::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<mylang::ParameterContext *> mylang::ParameterListContext::parameter() {
  return getRuleContexts<mylang::ParameterContext>();
}

mylang::ParameterContext* mylang::ParameterListContext::parameter(size_t i) {
  return getRuleContext<mylang::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> mylang::ParameterListContext::COMMA() {
  return getTokens(mylang::COMMA);
}

tree::TerminalNode* mylang::ParameterListContext::COMMA(size_t i) {
  return getToken(mylang::COMMA, i);
}


size_t mylang::ParameterListContext::getRuleIndex() const {
  return mylang::RuleParameterList;
}

void mylang::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void mylang::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}


std::any mylang::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

mylang::ParameterListContext* mylang::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 52, mylang::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    parameter();
    setState(274);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mylang::COMMA) {
      setState(270);
      match(mylang::COMMA);
      setState(271);
      parameter();
      setState(276);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

mylang::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mylang::TypeSpecifierContext* mylang::ParameterContext::typeSpecifier() {
  return getRuleContext<mylang::TypeSpecifierContext>(0);
}

tree::TerminalNode* mylang::ParameterContext::ID() {
  return getToken(mylang::ID, 0);
}


size_t mylang::ParameterContext::getRuleIndex() const {
  return mylang::RuleParameter;
}

void mylang::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void mylang::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


std::any mylang::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

mylang::ParameterContext* mylang::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 54, mylang::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    typeSpecifier();
    setState(278);
    match(mylang::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

mylang::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mylang::TypeSpecifierContext::getRuleIndex() const {
  return mylang::RuleTypeSpecifier;
}

void mylang::TypeSpecifierContext::copyFrom(TypeSpecifierContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SimpleTemplateTypeContext ------------------------------------------------------------------

tree::TerminalNode* mylang::SimpleTemplateTypeContext::TEMPLATE_ID() {
  return getToken(mylang::TEMPLATE_ID, 0);
}

mylang::TypeArgumentListContext* mylang::SimpleTemplateTypeContext::typeArgumentList() {
  return getRuleContext<mylang::TypeArgumentListContext>(0);
}

tree::TerminalNode* mylang::SimpleTemplateTypeContext::BINOP_GREATER() {
  return getToken(mylang::BINOP_GREATER, 0);
}

mylang::SimpleTemplateTypeContext::SimpleTemplateTypeContext(TypeSpecifierContext *ctx) { copyFrom(ctx); }

void mylang::SimpleTemplateTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleTemplateType(this);
}
void mylang::SimpleTemplateTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleTemplateType(this);
}

std::any mylang::SimpleTemplateTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitSimpleTemplateType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeReferenceContext ------------------------------------------------------------------

tree::TerminalNode* mylang::TypeReferenceContext::KEYWORD_TYPES() {
  return getToken(mylang::KEYWORD_TYPES, 0);
}

tree::TerminalNode* mylang::TypeReferenceContext::ID() {
  return getToken(mylang::ID, 0);
}

mylang::TypeReferenceContext::TypeReferenceContext(TypeSpecifierContext *ctx) { copyFrom(ctx); }

void mylang::TypeReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeReference(this);
}
void mylang::TypeReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeReference(this);
}

std::any mylang::TypeReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitTypeReference(this);
  else
    return visitor->visitChildren(this);
}
mylang::TypeSpecifierContext* mylang::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 56, mylang::RuleTypeSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(285);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mylang::TEMPLATE_ID: {
        _localctx = _tracker.createInstance<mylang::SimpleTemplateTypeContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(280);
        match(mylang::TEMPLATE_ID);
        setState(281);
        typeArgumentList();
        setState(282);
        match(mylang::BINOP_GREATER);
        break;
      }

      case mylang::KEYWORD_TYPES:
      case mylang::ID: {
        _localctx = _tracker.createInstance<mylang::TypeReferenceContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(284);
        _la = _input->LA(1);
        if (!(_la == mylang::KEYWORD_TYPES

        || _la == mylang::ID)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeArgumentListContext ------------------------------------------------------------------

mylang::TypeArgumentListContext::TypeArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<mylang::TypeSpecifierContext *> mylang::TypeArgumentListContext::typeSpecifier() {
  return getRuleContexts<mylang::TypeSpecifierContext>();
}

mylang::TypeSpecifierContext* mylang::TypeArgumentListContext::typeSpecifier(size_t i) {
  return getRuleContext<mylang::TypeSpecifierContext>(i);
}

std::vector<tree::TerminalNode *> mylang::TypeArgumentListContext::COMMA() {
  return getTokens(mylang::COMMA);
}

tree::TerminalNode* mylang::TypeArgumentListContext::COMMA(size_t i) {
  return getToken(mylang::COMMA, i);
}


size_t mylang::TypeArgumentListContext::getRuleIndex() const {
  return mylang::RuleTypeArgumentList;
}

void mylang::TypeArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgumentList(this);
}

void mylang::TypeArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgumentList(this);
}


std::any mylang::TypeArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitTypeArgumentList(this);
  else
    return visitor->visitChildren(this);
}

mylang::TypeArgumentListContext* mylang::typeArgumentList() {
  TypeArgumentListContext *_localctx = _tracker.createInstance<TypeArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 58, mylang::RuleTypeArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    typeSpecifier();
    setState(292);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mylang::COMMA) {
      setState(288);
      match(mylang::COMMA);
      setState(289);
      typeSpecifier();
      setState(294);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_operatorContext ------------------------------------------------------------------

mylang::Binary_operatorContext::Binary_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mylang::Binary_operatorContext::BINOP_EQUALITY() {
  return getToken(mylang::BINOP_EQUALITY, 0);
}

tree::TerminalNode* mylang::Binary_operatorContext::BINOP_GREATER() {
  return getToken(mylang::BINOP_GREATER, 0);
}

tree::TerminalNode* mylang::Binary_operatorContext::BINOP_LESSER() {
  return getToken(mylang::BINOP_LESSER, 0);
}

tree::TerminalNode* mylang::Binary_operatorContext::BINOP_GTE() {
  return getToken(mylang::BINOP_GTE, 0);
}

tree::TerminalNode* mylang::Binary_operatorContext::BINOP_LTE() {
  return getToken(mylang::BINOP_LTE, 0);
}

tree::TerminalNode* mylang::Binary_operatorContext::BINOP_ADD() {
  return getToken(mylang::BINOP_ADD, 0);
}

tree::TerminalNode* mylang::Binary_operatorContext::BINOP_MINUS() {
  return getToken(mylang::BINOP_MINUS, 0);
}

tree::TerminalNode* mylang::Binary_operatorContext::BINOP_MULT() {
  return getToken(mylang::BINOP_MULT, 0);
}

tree::TerminalNode* mylang::Binary_operatorContext::BINOP_DIVIDE() {
  return getToken(mylang::BINOP_DIVIDE, 0);
}

tree::TerminalNode* mylang::Binary_operatorContext::BINOP_BOOL_OR() {
  return getToken(mylang::BINOP_BOOL_OR, 0);
}

tree::TerminalNode* mylang::Binary_operatorContext::BINOP_BOOL_AND() {
  return getToken(mylang::BINOP_BOOL_AND, 0);
}

tree::TerminalNode* mylang::Binary_operatorContext::BOOLEAN_KEYWORD() {
  return getToken(mylang::BOOLEAN_KEYWORD, 0);
}

tree::TerminalNode* mylang::Binary_operatorContext::BINOP_ASSIGN() {
  return getToken(mylang::BINOP_ASSIGN, 0);
}


size_t mylang::Binary_operatorContext::getRuleIndex() const {
  return mylang::RuleBinary_operator;
}

void mylang::Binary_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary_operator(this);
}

void mylang::Binary_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary_operator(this);
}


std::any mylang::Binary_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitBinary_operator(this);
  else
    return visitor->visitChildren(this);
}

mylang::Binary_operatorContext* mylang::binary_operator() {
  Binary_operatorContext *_localctx = _tracker.createInstance<Binary_operatorContext>(_ctx, getState());
  enterRule(_localctx, 60, mylang::RuleBinary_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68711088128) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool mylang::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 21: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool mylang::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void mylang::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mylangParserInitialize();
#else
  ::antlr4::internal::call_once(mylangParserOnceFlag, mylangParserInitialize);
#endif
}
