
// Generated from base_lexer.g4 by ANTLR 4.13.1


#include "base_lexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct Base_lexerStaticData final {
  Base_lexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Base_lexerStaticData(const Base_lexerStaticData&) = delete;
  Base_lexerStaticData(Base_lexerStaticData&&) = delete;
  Base_lexerStaticData& operator=(const Base_lexerStaticData&) = delete;
  Base_lexerStaticData& operator=(Base_lexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag base_lexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
Base_lexerStaticData *base_lexerLexerStaticData = nullptr;

void base_lexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (base_lexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(base_lexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Base_lexerStaticData>(
    std::vector<std::string>{
      "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", "LPAREN", "RPAREN", "LBRACKET", 
      "RBRACKET", "SEMI", "IF", "ELSE", "FOR", "KEYWORD_TYPES", "LITERAL_BOOL", 
      "NEW_KEYWORD", "ALLOC_KEYWORD", "RETURN", "FREE", "DOT", "COMMA", 
      "STATIC", "CAST", "CONSTRUCTOR", "STRUCT_KEYWORD", "BOOLEAN_KEYWORD", 
      "BINOP_EQUALITY", "BINOP_GREATER", "BINOP_LESSER", "BINOP_GTE", "BINOP_LTE", 
      "BINOP_ADD", "BINOP_MINUS", "BINOP_MULT", "BINOP_DIVIDE", "BINOP_BOOL_OR", 
      "BINOP_BOOL_AND", "BINOP_ASSIGN", "PREFIX_UNARY_OPS", "SUFFIX_UNARY_OPS", 
      "POINTER_SYMBOL", "TEMPLATE_ID", "ID", "LITERAL_INT", "LITERAL_STRING", 
      "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,43,313,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,1,0,1,0,1,0,1,0,5,0,92,8,0,10,0,12,0,95,9,0,1,0,1,0,1,1,1,1,1,1,
  	1,1,5,1,103,8,1,10,1,12,1,106,9,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,
  	1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,
  	9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,3,10,165,8,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,3,11,176,8,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,
  	17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,
  	21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,3,22,240,8,22,1,23,1,
  	23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,
  	29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,32,1,33,1,33,1,33,1,34,1,34,1,
  	35,1,35,1,36,1,36,1,36,1,36,3,36,277,8,36,1,37,1,37,1,38,1,38,1,38,1,
  	39,1,39,5,39,286,8,39,10,39,12,39,289,9,39,1,40,4,40,292,8,40,11,40,12,
  	40,293,1,41,1,41,1,41,1,41,5,41,300,8,41,10,41,12,41,303,9,41,1,41,1,
  	41,1,42,4,42,308,8,42,11,42,12,42,309,1,42,1,42,1,104,0,43,1,1,3,2,5,
  	3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,
  	55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,
  	39,79,40,81,41,83,42,85,43,1,0,7,2,0,10,10,13,13,3,0,33,33,64,64,126,
  	126,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,
  	10,10,13,13,34,34,3,0,9,10,13,13,32,32,328,0,1,1,0,0,0,0,3,1,0,0,0,0,
  	5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,
  	0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,
  	0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,
  	1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,
  	0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,
  	0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,
  	1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,
  	0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,1,87,1,0,0,0,3,98,1,0,0,0,
  	5,112,1,0,0,0,7,114,1,0,0,0,9,116,1,0,0,0,11,118,1,0,0,0,13,120,1,0,0,
  	0,15,122,1,0,0,0,17,125,1,0,0,0,19,130,1,0,0,0,21,164,1,0,0,0,23,175,
  	1,0,0,0,25,177,1,0,0,0,27,181,1,0,0,0,29,187,1,0,0,0,31,194,1,0,0,0,33,
  	199,1,0,0,0,35,201,1,0,0,0,37,203,1,0,0,0,39,210,1,0,0,0,41,215,1,0,0,
  	0,43,227,1,0,0,0,45,239,1,0,0,0,47,241,1,0,0,0,49,244,1,0,0,0,51,246,
  	1,0,0,0,53,248,1,0,0,0,55,251,1,0,0,0,57,254,1,0,0,0,59,256,1,0,0,0,61,
  	258,1,0,0,0,63,260,1,0,0,0,65,262,1,0,0,0,67,265,1,0,0,0,69,268,1,0,0,
  	0,71,270,1,0,0,0,73,276,1,0,0,0,75,278,1,0,0,0,77,280,1,0,0,0,79,283,
  	1,0,0,0,81,291,1,0,0,0,83,295,1,0,0,0,85,307,1,0,0,0,87,88,5,47,0,0,88,
  	89,5,47,0,0,89,93,1,0,0,0,90,92,8,0,0,0,91,90,1,0,0,0,92,95,1,0,0,0,93,
  	91,1,0,0,0,93,94,1,0,0,0,94,96,1,0,0,0,95,93,1,0,0,0,96,97,6,0,0,0,97,
  	2,1,0,0,0,98,99,5,47,0,0,99,100,5,42,0,0,100,104,1,0,0,0,101,103,9,0,
  	0,0,102,101,1,0,0,0,103,106,1,0,0,0,104,105,1,0,0,0,104,102,1,0,0,0,105,
  	107,1,0,0,0,106,104,1,0,0,0,107,108,5,42,0,0,108,109,5,47,0,0,109,110,
  	1,0,0,0,110,111,6,1,0,0,111,4,1,0,0,0,112,113,5,40,0,0,113,6,1,0,0,0,
  	114,115,5,41,0,0,115,8,1,0,0,0,116,117,5,123,0,0,117,10,1,0,0,0,118,119,
  	5,125,0,0,119,12,1,0,0,0,120,121,5,59,0,0,121,14,1,0,0,0,122,123,5,105,
  	0,0,123,124,5,102,0,0,124,16,1,0,0,0,125,126,5,101,0,0,126,127,5,108,
  	0,0,127,128,5,115,0,0,128,129,5,101,0,0,129,18,1,0,0,0,130,131,5,102,
  	0,0,131,132,5,111,0,0,132,133,5,114,0,0,133,20,1,0,0,0,134,135,5,98,0,
  	0,135,136,5,111,0,0,136,137,5,111,0,0,137,165,5,108,0,0,138,139,5,108,
  	0,0,139,140,5,111,0,0,140,141,5,110,0,0,141,165,5,103,0,0,142,143,5,105,
  	0,0,143,144,5,110,0,0,144,165,5,116,0,0,145,146,5,115,0,0,146,147,5,104,
  	0,0,147,148,5,111,0,0,148,149,5,114,0,0,149,165,5,116,0,0,150,151,5,98,
  	0,0,151,152,5,121,0,0,152,153,5,116,0,0,153,165,5,101,0,0,154,155,5,115,
  	0,0,155,156,5,116,0,0,156,157,5,114,0,0,157,158,5,105,0,0,158,159,5,110,
  	0,0,159,165,5,103,0,0,160,161,5,118,0,0,161,162,5,111,0,0,162,163,5,105,
  	0,0,163,165,5,100,0,0,164,134,1,0,0,0,164,138,1,0,0,0,164,142,1,0,0,0,
  	164,145,1,0,0,0,164,150,1,0,0,0,164,154,1,0,0,0,164,160,1,0,0,0,165,22,
  	1,0,0,0,166,167,5,116,0,0,167,168,5,114,0,0,168,169,5,117,0,0,169,176,
  	5,101,0,0,170,171,5,102,0,0,171,172,5,97,0,0,172,173,5,108,0,0,173,174,
  	5,115,0,0,174,176,5,101,0,0,175,166,1,0,0,0,175,170,1,0,0,0,176,24,1,
  	0,0,0,177,178,5,110,0,0,178,179,5,101,0,0,179,180,5,119,0,0,180,26,1,
  	0,0,0,181,182,5,97,0,0,182,183,5,108,0,0,183,184,5,108,0,0,184,185,5,
  	111,0,0,185,186,5,99,0,0,186,28,1,0,0,0,187,188,5,114,0,0,188,189,5,101,
  	0,0,189,190,5,116,0,0,190,191,5,117,0,0,191,192,5,114,0,0,192,193,5,110,
  	0,0,193,30,1,0,0,0,194,195,5,102,0,0,195,196,5,114,0,0,196,197,5,101,
  	0,0,197,198,5,101,0,0,198,32,1,0,0,0,199,200,5,46,0,0,200,34,1,0,0,0,
  	201,202,5,44,0,0,202,36,1,0,0,0,203,204,5,115,0,0,204,205,5,116,0,0,205,
  	206,5,97,0,0,206,207,5,116,0,0,207,208,5,105,0,0,208,209,5,99,0,0,209,
  	38,1,0,0,0,210,211,5,99,0,0,211,212,5,97,0,0,212,213,5,115,0,0,213,214,
  	5,116,0,0,214,40,1,0,0,0,215,216,5,99,0,0,216,217,5,111,0,0,217,218,5,
  	110,0,0,218,219,5,115,0,0,219,220,5,116,0,0,220,221,5,114,0,0,221,222,
  	5,117,0,0,222,223,5,99,0,0,223,224,5,116,0,0,224,225,5,111,0,0,225,226,
  	5,114,0,0,226,42,1,0,0,0,227,228,5,115,0,0,228,229,5,116,0,0,229,230,
  	5,114,0,0,230,231,5,117,0,0,231,232,5,99,0,0,232,233,5,116,0,0,233,44,
  	1,0,0,0,234,235,5,97,0,0,235,236,5,110,0,0,236,240,5,100,0,0,237,238,
  	5,111,0,0,238,240,5,114,0,0,239,234,1,0,0,0,239,237,1,0,0,0,240,46,1,
  	0,0,0,241,242,5,61,0,0,242,243,5,61,0,0,243,48,1,0,0,0,244,245,5,62,0,
  	0,245,50,1,0,0,0,246,247,5,60,0,0,247,52,1,0,0,0,248,249,5,62,0,0,249,
  	250,5,61,0,0,250,54,1,0,0,0,251,252,5,60,0,0,252,253,5,61,0,0,253,56,
  	1,0,0,0,254,255,5,43,0,0,255,58,1,0,0,0,256,257,5,45,0,0,257,60,1,0,0,
  	0,258,259,5,42,0,0,259,62,1,0,0,0,260,261,5,47,0,0,261,64,1,0,0,0,262,
  	263,5,124,0,0,263,264,5,124,0,0,264,66,1,0,0,0,265,266,5,38,0,0,266,267,
  	5,38,0,0,267,68,1,0,0,0,268,269,5,61,0,0,269,70,1,0,0,0,270,271,7,1,0,
  	0,271,72,1,0,0,0,272,273,5,43,0,0,273,277,5,43,0,0,274,275,5,45,0,0,275,
  	277,5,45,0,0,276,272,1,0,0,0,276,274,1,0,0,0,277,74,1,0,0,0,278,279,5,
  	94,0,0,279,76,1,0,0,0,280,281,3,79,39,0,281,282,5,60,0,0,282,78,1,0,0,
  	0,283,287,7,2,0,0,284,286,7,3,0,0,285,284,1,0,0,0,286,289,1,0,0,0,287,
  	285,1,0,0,0,287,288,1,0,0,0,288,80,1,0,0,0,289,287,1,0,0,0,290,292,7,
  	4,0,0,291,290,1,0,0,0,292,293,1,0,0,0,293,291,1,0,0,0,293,294,1,0,0,0,
  	294,82,1,0,0,0,295,301,5,34,0,0,296,297,5,92,0,0,297,300,5,34,0,0,298,
  	300,8,5,0,0,299,296,1,0,0,0,299,298,1,0,0,0,300,303,1,0,0,0,301,299,1,
  	0,0,0,301,302,1,0,0,0,302,304,1,0,0,0,303,301,1,0,0,0,304,305,5,34,0,
  	0,305,84,1,0,0,0,306,308,7,6,0,0,307,306,1,0,0,0,308,309,1,0,0,0,309,
  	307,1,0,0,0,309,310,1,0,0,0,310,311,1,0,0,0,311,312,6,42,0,0,312,86,1,
  	0,0,0,12,0,93,104,164,175,239,276,287,293,299,301,309,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  base_lexerLexerStaticData = staticData.release();
}

}

base_lexer::base_lexer(CharStream *input) : Lexer(input) {
  base_lexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *base_lexerLexerStaticData->atn, base_lexerLexerStaticData->decisionToDFA, base_lexerLexerStaticData->sharedContextCache);
}

base_lexer::~base_lexer() {
  delete _interpreter;
}

std::string base_lexer::getGrammarFileName() const {
  return "base_lexer.g4";
}

const std::vector<std::string>& base_lexer::getRuleNames() const {
  return base_lexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& base_lexer::getChannelNames() const {
  return base_lexerLexerStaticData->channelNames;
}

const std::vector<std::string>& base_lexer::getModeNames() const {
  return base_lexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& base_lexer::getVocabulary() const {
  return base_lexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView base_lexer::getSerializedATN() const {
  return base_lexerLexerStaticData->serializedATN;
}

const atn::ATN& base_lexer::getATN() const {
  return *base_lexerLexerStaticData->atn;
}




void base_lexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  base_lexerLexerInitialize();
#else
  ::antlr4::internal::call_once(base_lexerLexerOnceFlag, base_lexerLexerInitialize);
#endif
}
