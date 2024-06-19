
// Generated from Zermelo.g4 by ANTLR 4.13.1


#include "ZermeloLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ZermeloLexerStaticData final {
  ZermeloLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ZermeloLexerStaticData(const ZermeloLexerStaticData&) = delete;
  ZermeloLexerStaticData(ZermeloLexerStaticData&&) = delete;
  ZermeloLexerStaticData& operator=(const ZermeloLexerStaticData&) = delete;
  ZermeloLexerStaticData& operator=(ZermeloLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag zermelolexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ZermeloLexerStaticData *zermelolexerLexerStaticData = nullptr;

void zermelolexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (zermelolexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(zermelolexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ZermeloLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "IDENTIFIER", "WHITESPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "'='", "':'", "'<'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "IDENTIFIER", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,7,34,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,4,5,27,8,5,11,5,12,5,28,1,
  	6,1,6,1,6,1,6,0,0,7,1,1,3,2,5,3,7,4,9,5,11,6,13,7,1,0,2,3,0,48,57,65,
  	90,97,122,2,0,10,10,32,32,34,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,
  	1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,1,15,1,0,0,0,3,17,1,0,0,
  	0,5,19,1,0,0,0,7,21,1,0,0,0,9,23,1,0,0,0,11,26,1,0,0,0,13,30,1,0,0,0,
  	15,16,5,123,0,0,16,2,1,0,0,0,17,18,5,125,0,0,18,4,1,0,0,0,19,20,5,61,
  	0,0,20,6,1,0,0,0,21,22,5,58,0,0,22,8,1,0,0,0,23,24,5,60,0,0,24,10,1,0,
  	0,0,25,27,7,0,0,0,26,25,1,0,0,0,27,28,1,0,0,0,28,26,1,0,0,0,28,29,1,0,
  	0,0,29,12,1,0,0,0,30,31,7,1,0,0,31,32,1,0,0,0,32,33,6,6,0,0,33,14,1,0,
  	0,0,2,0,28,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  zermelolexerLexerStaticData = staticData.release();
}

}

ZermeloLexer::ZermeloLexer(CharStream *input) : Lexer(input) {
  ZermeloLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *zermelolexerLexerStaticData->atn, zermelolexerLexerStaticData->decisionToDFA, zermelolexerLexerStaticData->sharedContextCache);
}

ZermeloLexer::~ZermeloLexer() {
  delete _interpreter;
}

std::string ZermeloLexer::getGrammarFileName() const {
  return "Zermelo.g4";
}

const std::vector<std::string>& ZermeloLexer::getRuleNames() const {
  return zermelolexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ZermeloLexer::getChannelNames() const {
  return zermelolexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ZermeloLexer::getModeNames() const {
  return zermelolexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ZermeloLexer::getVocabulary() const {
  return zermelolexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ZermeloLexer::getSerializedATN() const {
  return zermelolexerLexerStaticData->serializedATN;
}

const atn::ATN& ZermeloLexer::getATN() const {
  return *zermelolexerLexerStaticData->atn;
}




void ZermeloLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  zermelolexerLexerInitialize();
#else
  ::antlr4::internal::call_once(zermelolexerLexerOnceFlag, zermelolexerLexerInitialize);
#endif
}
