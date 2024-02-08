
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
  	4,1,43,316,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,1,0,1,0,1,0,1,1,5,1,67,8,1,10,1,12,1,70,9,1,1,
  	2,1,2,3,2,74,8,2,1,3,1,3,1,3,1,4,1,4,1,4,1,4,3,4,83,8,4,1,5,3,5,86,8,
  	5,1,5,1,5,1,5,1,5,3,5,92,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,101,8,5,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,3,7,114,8,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,3,7,122,8,7,1,8,1,8,1,8,1,8,5,8,128,8,8,10,8,12,8,131,9,8,1,
  	8,1,8,1,9,5,9,136,8,9,10,9,12,9,139,9,9,1,10,1,10,1,10,3,10,144,8,10,
  	1,11,1,11,1,11,1,12,1,12,1,12,3,12,152,8,12,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,3,13,162,8,13,1,14,1,14,1,14,1,14,1,14,1,14,3,14,170,8,
  	14,1,15,1,15,1,15,1,15,3,15,176,8,15,1,15,1,15,1,16,1,16,1,16,1,16,3,
  	16,184,8,16,1,16,1,16,1,17,1,17,3,17,190,8,17,1,17,1,17,1,18,3,18,195,
  	8,18,1,18,1,18,1,18,1,18,3,18,201,8,18,1,18,1,18,1,19,1,19,1,19,3,19,
  	208,8,19,1,19,1,19,1,19,1,19,3,19,214,8,19,1,19,1,19,1,19,1,19,1,19,1,
  	20,1,20,3,20,223,8,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,
  	21,1,21,1,21,1,21,3,21,238,8,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,
  	21,5,21,262,8,21,10,21,12,21,265,9,21,1,22,1,22,3,22,269,8,22,1,22,1,
  	22,1,23,1,23,1,23,5,23,276,8,23,10,23,12,23,279,9,23,1,24,1,24,1,25,1,
  	25,1,25,3,25,286,8,25,1,26,1,26,1,26,5,26,291,8,26,10,26,12,26,294,9,
  	26,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,28,3,28,304,8,28,1,29,1,29,1,
  	29,5,29,309,8,29,10,29,12,29,312,9,29,1,30,1,30,1,30,0,1,42,31,0,2,4,
  	6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,
  	54,56,58,60,0,7,1,0,29,30,1,0,31,32,1,0,24,28,2,0,23,23,33,34,2,0,12,
  	12,41,42,2,0,11,11,40,40,1,0,23,35,329,0,62,1,0,0,0,2,68,1,0,0,0,4,73,
  	1,0,0,0,6,75,1,0,0,0,8,82,1,0,0,0,10,85,1,0,0,0,12,102,1,0,0,0,14,110,
  	1,0,0,0,16,123,1,0,0,0,18,137,1,0,0,0,20,143,1,0,0,0,22,145,1,0,0,0,24,
  	151,1,0,0,0,26,153,1,0,0,0,28,163,1,0,0,0,30,171,1,0,0,0,32,179,1,0,0,
  	0,34,187,1,0,0,0,36,194,1,0,0,0,38,204,1,0,0,0,40,222,1,0,0,0,42,237,
  	1,0,0,0,44,266,1,0,0,0,46,272,1,0,0,0,48,280,1,0,0,0,50,285,1,0,0,0,52,
  	287,1,0,0,0,54,295,1,0,0,0,56,303,1,0,0,0,58,305,1,0,0,0,60,313,1,0,0,
  	0,62,63,3,2,1,0,63,64,5,0,0,1,64,1,1,0,0,0,65,67,3,4,2,0,66,65,1,0,0,
  	0,67,70,1,0,0,0,68,66,1,0,0,0,68,69,1,0,0,0,69,3,1,0,0,0,70,68,1,0,0,
  	0,71,74,3,10,5,0,72,74,3,16,8,0,73,71,1,0,0,0,73,72,1,0,0,0,74,5,1,0,
  	0,0,75,76,5,5,0,0,76,77,5,6,0,0,77,7,1,0,0,0,78,83,3,10,5,0,79,83,3,36,
  	18,0,80,83,3,12,6,0,81,83,3,14,7,0,82,78,1,0,0,0,82,79,1,0,0,0,82,80,
  	1,0,0,0,82,81,1,0,0,0,83,9,1,0,0,0,84,86,5,19,0,0,85,84,1,0,0,0,85,86,
  	1,0,0,0,86,87,1,0,0,0,87,88,3,56,28,0,88,89,5,40,0,0,89,91,5,3,0,0,90,
  	92,3,52,26,0,91,90,1,0,0,0,91,92,1,0,0,0,92,93,1,0,0,0,93,100,5,4,0,0,
  	94,101,3,6,3,0,95,96,5,5,0,0,96,97,3,18,9,0,97,98,5,6,0,0,98,101,1,0,
  	0,0,99,101,5,7,0,0,100,94,1,0,0,0,100,95,1,0,0,0,100,99,1,0,0,0,101,11,
  	1,0,0,0,102,103,5,20,0,0,103,104,3,56,28,0,104,105,5,3,0,0,105,106,5,
  	4,0,0,106,107,5,5,0,0,107,108,3,18,9,0,108,109,5,6,0,0,109,13,1,0,0,0,
  	110,111,5,21,0,0,111,113,5,3,0,0,112,114,3,52,26,0,113,112,1,0,0,0,113,
  	114,1,0,0,0,114,115,1,0,0,0,115,121,5,4,0,0,116,122,3,6,3,0,117,118,5,
  	5,0,0,118,119,3,18,9,0,119,120,5,6,0,0,120,122,1,0,0,0,121,116,1,0,0,
  	0,121,117,1,0,0,0,122,15,1,0,0,0,123,124,5,22,0,0,124,125,5,40,0,0,125,
  	129,5,5,0,0,126,128,3,8,4,0,127,126,1,0,0,0,128,131,1,0,0,0,129,127,1,
  	0,0,0,129,130,1,0,0,0,130,132,1,0,0,0,131,129,1,0,0,0,132,133,5,6,0,0,
  	133,17,1,0,0,0,134,136,3,20,10,0,135,134,1,0,0,0,136,139,1,0,0,0,137,
  	135,1,0,0,0,137,138,1,0,0,0,138,19,1,0,0,0,139,137,1,0,0,0,140,144,3,
  	22,11,0,141,144,3,24,12,0,142,144,3,36,18,0,143,140,1,0,0,0,143,141,1,
  	0,0,0,143,142,1,0,0,0,144,21,1,0,0,0,145,146,3,42,21,0,146,147,5,7,0,
  	0,147,23,1,0,0,0,148,152,3,26,13,0,149,152,3,38,19,0,150,152,3,34,17,
  	0,151,148,1,0,0,0,151,149,1,0,0,0,151,150,1,0,0,0,152,25,1,0,0,0,153,
  	154,5,8,0,0,154,155,5,3,0,0,155,156,3,42,21,0,156,157,5,4,0,0,157,158,
  	5,5,0,0,158,159,3,18,9,0,159,161,5,6,0,0,160,162,3,28,14,0,161,160,1,
  	0,0,0,161,162,1,0,0,0,162,27,1,0,0,0,163,169,5,9,0,0,164,170,3,26,13,
  	0,165,166,5,5,0,0,166,167,3,18,9,0,167,168,5,6,0,0,168,170,1,0,0,0,169,
  	164,1,0,0,0,169,165,1,0,0,0,170,29,1,0,0,0,171,172,5,14,0,0,172,173,3,
  	56,28,0,173,175,5,3,0,0,174,176,3,46,23,0,175,174,1,0,0,0,175,176,1,0,
  	0,0,176,177,1,0,0,0,177,178,5,4,0,0,178,31,1,0,0,0,179,180,5,13,0,0,180,
  	181,3,56,28,0,181,183,5,3,0,0,182,184,3,46,23,0,183,182,1,0,0,0,183,184,
  	1,0,0,0,184,185,1,0,0,0,185,186,5,4,0,0,186,33,1,0,0,0,187,189,5,15,0,
  	0,188,190,3,42,21,0,189,188,1,0,0,0,189,190,1,0,0,0,190,191,1,0,0,0,191,
  	192,5,7,0,0,192,35,1,0,0,0,193,195,5,19,0,0,194,193,1,0,0,0,194,195,1,
  	0,0,0,195,196,1,0,0,0,196,197,3,56,28,0,197,200,5,40,0,0,198,199,5,35,
  	0,0,199,201,3,42,21,0,200,198,1,0,0,0,200,201,1,0,0,0,201,202,1,0,0,0,
  	202,203,5,7,0,0,203,37,1,0,0,0,204,205,5,10,0,0,205,207,5,3,0,0,206,208,
  	3,36,18,0,207,206,1,0,0,0,207,208,1,0,0,0,208,209,1,0,0,0,209,210,5,7,
  	0,0,210,211,3,42,21,0,211,213,5,7,0,0,212,214,3,42,21,0,213,212,1,0,0,
  	0,213,214,1,0,0,0,214,215,1,0,0,0,215,216,5,4,0,0,216,217,5,5,0,0,217,
  	218,3,18,9,0,218,219,5,6,0,0,219,39,1,0,0,0,220,223,3,48,24,0,221,223,
  	3,50,25,0,222,220,1,0,0,0,222,221,1,0,0,0,223,41,1,0,0,0,224,225,6,21,
  	-1,0,225,226,5,3,0,0,226,227,3,42,21,0,227,228,5,4,0,0,228,238,1,0,0,
  	0,229,238,3,40,20,0,230,231,5,36,0,0,231,238,3,42,21,4,232,233,5,3,0,
  	0,233,234,3,56,28,0,234,235,5,4,0,0,235,236,3,42,21,2,236,238,1,0,0,0,
  	237,224,1,0,0,0,237,229,1,0,0,0,237,230,1,0,0,0,237,232,1,0,0,0,238,263,
  	1,0,0,0,239,240,10,12,0,0,240,241,7,0,0,0,241,262,3,42,21,13,242,243,
  	10,11,0,0,243,244,7,1,0,0,244,262,3,42,21,12,245,246,10,10,0,0,246,247,
  	7,2,0,0,247,262,3,42,21,11,248,249,10,9,0,0,249,250,7,3,0,0,250,262,3,
  	42,21,10,251,252,10,1,0,0,252,253,5,35,0,0,253,262,3,42,21,2,254,255,
  	10,6,0,0,255,256,5,17,0,0,256,262,3,50,25,0,257,258,10,5,0,0,258,262,
  	5,37,0,0,259,260,10,3,0,0,260,262,3,44,22,0,261,239,1,0,0,0,261,242,1,
  	0,0,0,261,245,1,0,0,0,261,248,1,0,0,0,261,251,1,0,0,0,261,254,1,0,0,0,
  	261,257,1,0,0,0,261,259,1,0,0,0,262,265,1,0,0,0,263,261,1,0,0,0,263,264,
  	1,0,0,0,264,43,1,0,0,0,265,263,1,0,0,0,266,268,5,3,0,0,267,269,3,46,23,
  	0,268,267,1,0,0,0,268,269,1,0,0,0,269,270,1,0,0,0,270,271,5,4,0,0,271,
  	45,1,0,0,0,272,277,3,42,21,0,273,274,5,18,0,0,274,276,3,42,21,0,275,273,
  	1,0,0,0,276,279,1,0,0,0,277,275,1,0,0,0,277,278,1,0,0,0,278,47,1,0,0,
  	0,279,277,1,0,0,0,280,281,7,4,0,0,281,49,1,0,0,0,282,286,5,40,0,0,283,
  	286,3,56,28,0,284,286,5,21,0,0,285,282,1,0,0,0,285,283,1,0,0,0,285,284,
  	1,0,0,0,286,51,1,0,0,0,287,292,3,54,27,0,288,289,5,18,0,0,289,291,3,54,
  	27,0,290,288,1,0,0,0,291,294,1,0,0,0,292,290,1,0,0,0,292,293,1,0,0,0,
  	293,53,1,0,0,0,294,292,1,0,0,0,295,296,3,56,28,0,296,297,5,40,0,0,297,
  	55,1,0,0,0,298,299,5,39,0,0,299,300,3,58,29,0,300,301,5,25,0,0,301,304,
  	1,0,0,0,302,304,7,5,0,0,303,298,1,0,0,0,303,302,1,0,0,0,304,57,1,0,0,
  	0,305,310,3,56,28,0,306,307,5,18,0,0,307,309,3,56,28,0,308,306,1,0,0,
  	0,309,312,1,0,0,0,310,308,1,0,0,0,310,311,1,0,0,0,311,59,1,0,0,0,312,
  	310,1,0,0,0,313,314,7,6,0,0,314,61,1,0,0,0,31,68,73,82,85,91,100,113,
  	121,129,137,143,151,161,169,175,183,189,194,200,207,213,222,237,261,263,
  	268,277,285,292,303,310
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
      ((1ULL << _la) & 1649272162304) != 0)) {
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
      case mylang::STATIC:
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

tree::TerminalNode* mylang::FunctionDeclarationContext::STATIC() {
  return getToken(mylang::STATIC, 0);
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
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mylang::STATIC) {
      setState(84);
      match(mylang::STATIC);
    }
    setState(87);
    typeSpecifier();
    setState(88);
    match(mylang::ID);
    setState(89);
    match(mylang::LPAREN);
    setState(91);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1649267443712) != 0)) {
      setState(90);
      parameterList();
    }
    setState(93);
    match(mylang::RPAREN);
    setState(100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(94);
      emptyStatement();
      break;
    }

    case 2: {
      setState(95);
      match(mylang::LBRACKET);
      setState(96);
      statementList();
      setState(97);
      match(mylang::RBRACKET);
      break;
    }

    case 3: {
      setState(99);
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
    setState(102);
    match(mylang::CAST);
    setState(103);
    typeSpecifier();
    setState(104);
    match(mylang::LPAREN);
    setState(105);
    match(mylang::RPAREN);

    setState(106);
    match(mylang::LBRACKET);
    setState(107);
    statementList();
    setState(108);
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
    setState(110);
    match(mylang::CONSTRUCTOR);
    setState(111);
    match(mylang::LPAREN);
    setState(113);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1649267443712) != 0)) {
      setState(112);
      parameterList();
    }
    setState(115);
    match(mylang::RPAREN);
    setState(121);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(116);
      emptyStatement();
      break;
    }

    case 2: {
      setState(117);
      match(mylang::LBRACKET);
      setState(118);
      statementList();
      setState(119);
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
    setState(123);
    match(mylang::STRUCT_KEYWORD);
    setState(124);
    match(mylang::ID);
    setState(125);
    match(mylang::LBRACKET);
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1649271113728) != 0)) {
      setState(126);
      memberStatement();
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(132);
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
    setState(137);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8315059346696) != 0)) {
      setState(134);
      statement();
      setState(139);
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
    setState(143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(140);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(141);
      controlStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(142);
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
    setState(145);
    expression(0);
    setState(146);
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
    setState(151);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mylang::IF: {
        enterOuterAlt(_localctx, 1);
        setState(148);
        ifStatement();
        break;
      }

      case mylang::FOR: {
        enterOuterAlt(_localctx, 2);
        setState(149);
        basicForStatement();
        break;
      }

      case mylang::RETURN: {
        enterOuterAlt(_localctx, 3);
        setState(150);
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
    setState(153);
    match(mylang::IF);
    setState(154);
    match(mylang::LPAREN);
    setState(155);
    expression(0);
    setState(156);
    match(mylang::RPAREN);
    setState(157);
    match(mylang::LBRACKET);
    setState(158);
    statementList();
    setState(159);
    match(mylang::RBRACKET);
    setState(161);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mylang::ELSE) {
      setState(160);
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
    setState(163);
    match(mylang::ELSE);
    setState(169);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mylang::IF: {
        setState(164);
        ifStatement();
        break;
      }

      case mylang::LBRACKET: {
        setState(165);
        match(mylang::LBRACKET);
        setState(166);
        statementList();
        setState(167);
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
    setState(171);
    match(mylang::ALLOC_KEYWORD);
    setState(172);
    typeSpecifier();
    setState(173);
    match(mylang::LPAREN);
    setState(175);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8315058788360) != 0)) {
      setState(174);
      argumentList();
    }
    setState(177);
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
    setState(179);
    match(mylang::NEW_KEYWORD);
    setState(180);
    typeSpecifier();
    setState(181);
    match(mylang::LPAREN);
    setState(183);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8315058788360) != 0)) {
      setState(182);
      argumentList();
    }
    setState(185);
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
    setState(187);
    match(mylang::RETURN);
    setState(189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8315058788360) != 0)) {
      setState(188);
      expression(0);
    }
    setState(191);
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
    setState(194);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mylang::STATIC) {
      setState(193);
      match(mylang::STATIC);
    }
    setState(196);
    typeSpecifier();
    setState(197);
    match(mylang::ID);
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mylang::BINOP_ASSIGN) {
      setState(198);
      match(mylang::BINOP_ASSIGN);
      setState(199);
      expression(0);
    }
    setState(202);
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
    setState(204);
    match(mylang::FOR);
    setState(205);
    match(mylang::LPAREN);
    setState(207);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1649267968000) != 0)) {
      setState(206);
      antlrcpp::downCast<BasicForStatementContext *>(_localctx)->init = variableDeclaration();
    }
    setState(209);
    match(mylang::SEMI);
    setState(210);
    antlrcpp::downCast<BasicForStatementContext *>(_localctx)->condition = expression(0);
    setState(211);
    match(mylang::SEMI);
    setState(213);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8315058788360) != 0)) {
      setState(212);
      antlrcpp::downCast<BasicForStatementContext *>(_localctx)->update = expression(0);
    }
    setState(215);
    match(mylang::RPAREN);
    setState(216);
    match(mylang::LBRACKET);
    setState(217);
    statementList();
    setState(218);
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
    setState(222);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mylang::LITERAL_BOOL:
      case mylang::LITERAL_INT:
      case mylang::LITERAL_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(220);
        literalExpression();
        break;
      }

      case mylang::KEYWORD_TYPES:
      case mylang::CONSTRUCTOR:
      case mylang::TEMPLATE_ID:
      case mylang::ID: {
        enterOuterAlt(_localctx, 2);
        setState(221);
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
//----------------- AssignmentExprContext ------------------------------------------------------------------

std::vector<mylang::ExpressionContext *> mylang::AssignmentExprContext::expression() {
  return getRuleContexts<mylang::ExpressionContext>();
}

mylang::ExpressionContext* mylang::AssignmentExprContext::expression(size_t i) {
  return getRuleContext<mylang::ExpressionContext>(i);
}

tree::TerminalNode* mylang::AssignmentExprContext::BINOP_ASSIGN() {
  return getToken(mylang::BINOP_ASSIGN, 0);
}

mylang::AssignmentExprContext::AssignmentExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::AssignmentExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpr(this);
}
void mylang::AssignmentExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpr(this);
}

std::any mylang::AssignmentExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpr(this);
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
//----------------- UnaryPrefixExprContext ------------------------------------------------------------------

tree::TerminalNode* mylang::UnaryPrefixExprContext::PREFIX_UNARY_OPS() {
  return getToken(mylang::PREFIX_UNARY_OPS, 0);
}

mylang::ExpressionContext* mylang::UnaryPrefixExprContext::expression() {
  return getRuleContext<mylang::ExpressionContext>(0);
}

mylang::UnaryPrefixExprContext::UnaryPrefixExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::UnaryPrefixExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryPrefixExpr(this);
}
void mylang::UnaryPrefixExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryPrefixExpr(this);
}

std::any mylang::UnaryPrefixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitUnaryPrefixExpr(this);
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
//----------------- LogicalExprContext ------------------------------------------------------------------

std::vector<mylang::ExpressionContext *> mylang::LogicalExprContext::expression() {
  return getRuleContexts<mylang::ExpressionContext>();
}

mylang::ExpressionContext* mylang::LogicalExprContext::expression(size_t i) {
  return getRuleContext<mylang::ExpressionContext>(i);
}

tree::TerminalNode* mylang::LogicalExprContext::BINOP_BOOL_AND() {
  return getToken(mylang::BINOP_BOOL_AND, 0);
}

tree::TerminalNode* mylang::LogicalExprContext::BINOP_BOOL_OR() {
  return getToken(mylang::BINOP_BOOL_OR, 0);
}

tree::TerminalNode* mylang::LogicalExprContext::BOOLEAN_KEYWORD() {
  return getToken(mylang::BOOLEAN_KEYWORD, 0);
}

mylang::LogicalExprContext::LogicalExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::LogicalExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalExpr(this);
}
void mylang::LogicalExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalExpr(this);
}

std::any mylang::LogicalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitLogicalExpr(this);
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
//----------------- AdditiveExprContext ------------------------------------------------------------------

std::vector<mylang::ExpressionContext *> mylang::AdditiveExprContext::expression() {
  return getRuleContexts<mylang::ExpressionContext>();
}

mylang::ExpressionContext* mylang::AdditiveExprContext::expression(size_t i) {
  return getRuleContext<mylang::ExpressionContext>(i);
}

tree::TerminalNode* mylang::AdditiveExprContext::BINOP_ADD() {
  return getToken(mylang::BINOP_ADD, 0);
}

tree::TerminalNode* mylang::AdditiveExprContext::BINOP_MINUS() {
  return getToken(mylang::BINOP_MINUS, 0);
}

mylang::AdditiveExprContext::AdditiveExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::AdditiveExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpr(this);
}
void mylang::AdditiveExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpr(this);
}

std::any mylang::AdditiveExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalExprContext ------------------------------------------------------------------

std::vector<mylang::ExpressionContext *> mylang::RelationalExprContext::expression() {
  return getRuleContexts<mylang::ExpressionContext>();
}

mylang::ExpressionContext* mylang::RelationalExprContext::expression(size_t i) {
  return getRuleContext<mylang::ExpressionContext>(i);
}

tree::TerminalNode* mylang::RelationalExprContext::BINOP_GREATER() {
  return getToken(mylang::BINOP_GREATER, 0);
}

tree::TerminalNode* mylang::RelationalExprContext::BINOP_LESSER() {
  return getToken(mylang::BINOP_LESSER, 0);
}

tree::TerminalNode* mylang::RelationalExprContext::BINOP_GTE() {
  return getToken(mylang::BINOP_GTE, 0);
}

tree::TerminalNode* mylang::RelationalExprContext::BINOP_LTE() {
  return getToken(mylang::BINOP_LTE, 0);
}

tree::TerminalNode* mylang::RelationalExprContext::BINOP_EQUALITY() {
  return getToken(mylang::BINOP_EQUALITY, 0);
}

mylang::RelationalExprContext::RelationalExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::RelationalExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpr(this);
}
void mylang::RelationalExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpr(this);
}

std::any mylang::RelationalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitRelationalExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplicativeExprContext ------------------------------------------------------------------

std::vector<mylang::ExpressionContext *> mylang::MultiplicativeExprContext::expression() {
  return getRuleContexts<mylang::ExpressionContext>();
}

mylang::ExpressionContext* mylang::MultiplicativeExprContext::expression(size_t i) {
  return getRuleContext<mylang::ExpressionContext>(i);
}

tree::TerminalNode* mylang::MultiplicativeExprContext::BINOP_MULT() {
  return getToken(mylang::BINOP_MULT, 0);
}

tree::TerminalNode* mylang::MultiplicativeExprContext::BINOP_DIVIDE() {
  return getToken(mylang::BINOP_DIVIDE, 0);
}

mylang::MultiplicativeExprContext::MultiplicativeExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::MultiplicativeExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpr(this);
}
void mylang::MultiplicativeExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpr(this);
}

std::any mylang::MultiplicativeExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

tree::TerminalNode* mylang::ParenExprContext::LPAREN() {
  return getToken(mylang::LPAREN, 0);
}

mylang::ExpressionContext* mylang::ParenExprContext::expression() {
  return getRuleContext<mylang::ExpressionContext>(0);
}

tree::TerminalNode* mylang::ParenExprContext::RPAREN() {
  return getToken(mylang::RPAREN, 0);
}

mylang::ParenExprContext::ParenExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void mylang::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void mylang::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mylangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

std::any mylang::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mylangVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
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

    size_t _la = 0;

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
    setState(237);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(225);
      match(mylang::LPAREN);
      setState(226);
      expression(0);
      setState(227);
      match(mylang::RPAREN);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PrimaryExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(229);
      primary_expression();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<UnaryPrefixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(230);
      match(mylang::PREFIX_UNARY_OPS);
      setState(231);
      expression(4);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CastExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(232);
      match(mylang::LPAREN);
      setState(233);
      typeSpecifier();
      setState(234);
      match(mylang::RPAREN);
      setState(235);
      expression(2);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(263);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(261);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<AdditiveExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(239);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(240);
          _la = _input->LA(1);
          if (!(_la == mylang::BINOP_ADD

          || _la == mylang::BINOP_MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(241);
          expression(13);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiplicativeExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(242);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(243);
          _la = _input->LA(1);
          if (!(_la == mylang::BINOP_MULT

          || _la == mylang::BINOP_DIVIDE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(244);
          expression(12);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(245);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(246);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 520093696) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(247);
          expression(11);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<LogicalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(248);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(249);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 25778192384) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(250);
          expression(10);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AssignmentExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(251);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");

          setState(252);
          match(mylang::BINOP_ASSIGN);
          setState(253);
          expression(2);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<MemberAccessExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(254);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(255);
          match(mylang::DOT);
          setState(256);
          identifierExpression();
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<UnarySuffixExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(257);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(258);
          match(mylang::SUFFIX_UNARY_OPS);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<FunctionCallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(259);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(260);
          invocationSuffix();
          break;
        }

        default:
          break;
        } 
      }
      setState(265);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
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
    setState(266);
    match(mylang::LPAREN);
    setState(268);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8315058788360) != 0)) {
      setState(267);
      argumentList();
    }
    setState(270);
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
    setState(272);
    expression(0);
    setState(277);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mylang::COMMA) {
      setState(273);
      match(mylang::COMMA);
      setState(274);
      expression(0);
      setState(279);
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
    setState(280);
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
    setState(285);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(282);
      match(mylang::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(283);
      typeSpecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(284);
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
    setState(287);
    parameter();
    setState(292);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mylang::COMMA) {
      setState(288);
      match(mylang::COMMA);
      setState(289);
      parameter();
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
    setState(295);
    typeSpecifier();
    setState(296);
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
    setState(303);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mylang::TEMPLATE_ID: {
        _localctx = _tracker.createInstance<mylang::SimpleTemplateTypeContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(298);
        match(mylang::TEMPLATE_ID);
        setState(299);
        typeArgumentList();
        setState(300);
        match(mylang::BINOP_GREATER);
        break;
      }

      case mylang::KEYWORD_TYPES:
      case mylang::ID: {
        _localctx = _tracker.createInstance<mylang::TypeReferenceContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(302);
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
    setState(305);
    typeSpecifier();
    setState(310);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mylang::COMMA) {
      setState(306);
      match(mylang::COMMA);
      setState(307);
      typeSpecifier();
      setState(312);
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
    setState(313);
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
    case 0: return precpred(_ctx, 12);
    case 1: return precpred(_ctx, 11);
    case 2: return precpred(_ctx, 10);
    case 3: return precpred(_ctx, 9);
    case 4: return precpred(_ctx, 1);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 5);
    case 7: return precpred(_ctx, 3);

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
