
// Generated from Zermelo.g4 by ANTLR 4.13.1


#include "ZermeloListener.h"

#include "ZermeloParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ZermeloParserStaticData final {
  ZermeloParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ZermeloParserStaticData(const ZermeloParserStaticData&) = delete;
  ZermeloParserStaticData(ZermeloParserStaticData&&) = delete;
  ZermeloParserStaticData& operator=(const ZermeloParserStaticData&) = delete;
  ZermeloParserStaticData& operator=(ZermeloParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag zermeloParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ZermeloParserStaticData *zermeloParserStaticData = nullptr;

void zermeloParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (zermeloParserStaticData != nullptr) {
    return;
  }
#else
  assert(zermeloParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ZermeloParserStaticData>(
    std::vector<std::string>{
      "set", "assignment", "membership", "subset", "program"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "'='", "':'", "'<'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "IDENTIFIER", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,7,47,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,5,0,13,8,0,10,
  	0,12,0,16,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,3,1,3,3,3,30,
  	8,3,1,3,1,3,1,3,3,3,35,8,3,1,4,1,4,1,4,5,4,40,8,4,10,4,12,4,43,9,4,1,
  	4,1,4,1,4,0,0,5,0,2,4,6,8,0,0,47,0,10,1,0,0,0,2,19,1,0,0,0,4,23,1,0,0,
  	0,6,29,1,0,0,0,8,41,1,0,0,0,10,14,5,1,0,0,11,13,5,6,0,0,12,11,1,0,0,0,
  	13,16,1,0,0,0,14,12,1,0,0,0,14,15,1,0,0,0,15,17,1,0,0,0,16,14,1,0,0,0,
  	17,18,5,2,0,0,18,1,1,0,0,0,19,20,5,6,0,0,20,21,5,3,0,0,21,22,3,0,0,0,
  	22,3,1,0,0,0,23,24,5,6,0,0,24,25,5,4,0,0,25,26,3,0,0,0,26,5,1,0,0,0,27,
  	30,5,6,0,0,28,30,3,0,0,0,29,27,1,0,0,0,29,28,1,0,0,0,30,31,1,0,0,0,31,
  	34,5,5,0,0,32,35,5,6,0,0,33,35,3,0,0,0,34,32,1,0,0,0,34,33,1,0,0,0,35,
  	7,1,0,0,0,36,40,3,2,1,0,37,40,3,4,2,0,38,40,3,6,3,0,39,36,1,0,0,0,39,
  	37,1,0,0,0,39,38,1,0,0,0,40,43,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,
  	44,1,0,0,0,43,41,1,0,0,0,44,45,5,0,0,1,45,9,1,0,0,0,5,14,29,34,39,41
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  zermeloParserStaticData = staticData.release();
}

}

ZermeloParser::ZermeloParser(TokenStream *input) : ZermeloParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ZermeloParser::ZermeloParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ZermeloParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *zermeloParserStaticData->atn, zermeloParserStaticData->decisionToDFA, zermeloParserStaticData->sharedContextCache, options);
}

ZermeloParser::~ZermeloParser() {
  delete _interpreter;
}

const atn::ATN& ZermeloParser::getATN() const {
  return *zermeloParserStaticData->atn;
}

std::string ZermeloParser::getGrammarFileName() const {
  return "Zermelo.g4";
}

const std::vector<std::string>& ZermeloParser::getRuleNames() const {
  return zermeloParserStaticData->ruleNames;
}

const dfa::Vocabulary& ZermeloParser::getVocabulary() const {
  return zermeloParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ZermeloParser::getSerializedATN() const {
  return zermeloParserStaticData->serializedATN;
}


//----------------- SetContext ------------------------------------------------------------------

ZermeloParser::SetContext::SetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ZermeloParser::SetContext::IDENTIFIER() {
  return getTokens(ZermeloParser::IDENTIFIER);
}

tree::TerminalNode* ZermeloParser::SetContext::IDENTIFIER(size_t i) {
  return getToken(ZermeloParser::IDENTIFIER, i);
}


size_t ZermeloParser::SetContext::getRuleIndex() const {
  return ZermeloParser::RuleSet;
}

void ZermeloParser::SetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZermeloListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet(this);
}

void ZermeloParser::SetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZermeloListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet(this);
}

ZermeloParser::SetContext* ZermeloParser::set() {
  SetContext *_localctx = _tracker.createInstance<SetContext>(_ctx, getState());
  enterRule(_localctx, 0, ZermeloParser::RuleSet);
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
    setState(10);
    match(ZermeloParser::T__0);
    setState(14);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ZermeloParser::IDENTIFIER) {
      setState(11);
      match(ZermeloParser::IDENTIFIER);
      setState(16);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(17);
    match(ZermeloParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

ZermeloParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ZermeloParser::AssignmentContext::IDENTIFIER() {
  return getToken(ZermeloParser::IDENTIFIER, 0);
}

ZermeloParser::SetContext* ZermeloParser::AssignmentContext::set() {
  return getRuleContext<ZermeloParser::SetContext>(0);
}


size_t ZermeloParser::AssignmentContext::getRuleIndex() const {
  return ZermeloParser::RuleAssignment;
}

void ZermeloParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZermeloListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void ZermeloParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZermeloListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

ZermeloParser::AssignmentContext* ZermeloParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 2, ZermeloParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(19);
    match(ZermeloParser::IDENTIFIER);
    setState(20);
    match(ZermeloParser::T__2);
    setState(21);
    set();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MembershipContext ------------------------------------------------------------------

ZermeloParser::MembershipContext::MembershipContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ZermeloParser::MembershipContext::IDENTIFIER() {
  return getToken(ZermeloParser::IDENTIFIER, 0);
}

ZermeloParser::SetContext* ZermeloParser::MembershipContext::set() {
  return getRuleContext<ZermeloParser::SetContext>(0);
}


size_t ZermeloParser::MembershipContext::getRuleIndex() const {
  return ZermeloParser::RuleMembership;
}

void ZermeloParser::MembershipContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZermeloListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMembership(this);
}

void ZermeloParser::MembershipContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZermeloListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMembership(this);
}

ZermeloParser::MembershipContext* ZermeloParser::membership() {
  MembershipContext *_localctx = _tracker.createInstance<MembershipContext>(_ctx, getState());
  enterRule(_localctx, 4, ZermeloParser::RuleMembership);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(23);
    match(ZermeloParser::IDENTIFIER);
    setState(24);
    match(ZermeloParser::T__3);
    setState(25);
    set();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubsetContext ------------------------------------------------------------------

ZermeloParser::SubsetContext::SubsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ZermeloParser::SubsetContext::IDENTIFIER() {
  return getTokens(ZermeloParser::IDENTIFIER);
}

tree::TerminalNode* ZermeloParser::SubsetContext::IDENTIFIER(size_t i) {
  return getToken(ZermeloParser::IDENTIFIER, i);
}

std::vector<ZermeloParser::SetContext *> ZermeloParser::SubsetContext::set() {
  return getRuleContexts<ZermeloParser::SetContext>();
}

ZermeloParser::SetContext* ZermeloParser::SubsetContext::set(size_t i) {
  return getRuleContext<ZermeloParser::SetContext>(i);
}


size_t ZermeloParser::SubsetContext::getRuleIndex() const {
  return ZermeloParser::RuleSubset;
}

void ZermeloParser::SubsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZermeloListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubset(this);
}

void ZermeloParser::SubsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZermeloListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubset(this);
}

ZermeloParser::SubsetContext* ZermeloParser::subset() {
  SubsetContext *_localctx = _tracker.createInstance<SubsetContext>(_ctx, getState());
  enterRule(_localctx, 6, ZermeloParser::RuleSubset);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ZermeloParser::IDENTIFIER: {
        setState(27);
        match(ZermeloParser::IDENTIFIER);
        break;
      }

      case ZermeloParser::T__0: {
        setState(28);
        set();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(31);
    match(ZermeloParser::T__4);
    setState(34);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ZermeloParser::IDENTIFIER: {
        setState(32);
        match(ZermeloParser::IDENTIFIER);
        break;
      }

      case ZermeloParser::T__0: {
        setState(33);
        set();
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

//----------------- ProgramContext ------------------------------------------------------------------

ZermeloParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ZermeloParser::ProgramContext::EOF() {
  return getToken(ZermeloParser::EOF, 0);
}

std::vector<ZermeloParser::AssignmentContext *> ZermeloParser::ProgramContext::assignment() {
  return getRuleContexts<ZermeloParser::AssignmentContext>();
}

ZermeloParser::AssignmentContext* ZermeloParser::ProgramContext::assignment(size_t i) {
  return getRuleContext<ZermeloParser::AssignmentContext>(i);
}

std::vector<ZermeloParser::MembershipContext *> ZermeloParser::ProgramContext::membership() {
  return getRuleContexts<ZermeloParser::MembershipContext>();
}

ZermeloParser::MembershipContext* ZermeloParser::ProgramContext::membership(size_t i) {
  return getRuleContext<ZermeloParser::MembershipContext>(i);
}

std::vector<ZermeloParser::SubsetContext *> ZermeloParser::ProgramContext::subset() {
  return getRuleContexts<ZermeloParser::SubsetContext>();
}

ZermeloParser::SubsetContext* ZermeloParser::ProgramContext::subset(size_t i) {
  return getRuleContext<ZermeloParser::SubsetContext>(i);
}


size_t ZermeloParser::ProgramContext::getRuleIndex() const {
  return ZermeloParser::RuleProgram;
}

void ZermeloParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZermeloListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void ZermeloParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZermeloListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

ZermeloParser::ProgramContext* ZermeloParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 8, ZermeloParser::RuleProgram);
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
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ZermeloParser::T__0

    || _la == ZermeloParser::IDENTIFIER) {
      setState(39);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(36);
        assignment();
        break;
      }

      case 2: {
        setState(37);
        membership();
        break;
      }

      case 3: {
        setState(38);
        subset();
        break;
      }

      default:
        break;
      }
      setState(43);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(44);
    match(ZermeloParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ZermeloParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  zermeloParserInitialize();
#else
  ::antlr4::internal::call_once(zermeloParserOnceFlag, zermeloParserInitialize);
#endif
}
