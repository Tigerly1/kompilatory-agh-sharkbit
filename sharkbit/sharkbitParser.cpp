
// Generated from sharkbit.g4 by ANTLR 4.7


#include "sharkbitListener.h"
#include "sharkbitVisitor.h"

#include "sharkbitParser.h"


using namespace antlrcpp;
using namespace antlr4;

sharkbitParser::sharkbitParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

sharkbitParser::~sharkbitParser() {
  delete _interpreter;
}

std::string sharkbitParser::getGrammarFileName() const {
  return "sharkbit.g4";
}

const std::vector<std::string>& sharkbitParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& sharkbitParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

sharkbitParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::DeclListContext* sharkbitParser::ProgramContext::declList() {
  return getRuleContext<sharkbitParser::DeclListContext>(0);
}


size_t sharkbitParser::ProgramContext::getRuleIndex() const {
  return sharkbitParser::RuleProgram;
}

void sharkbitParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void sharkbitParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any sharkbitParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::ProgramContext* sharkbitParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, sharkbitParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    declList(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclListContext ------------------------------------------------------------------

sharkbitParser::DeclListContext::DeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::DeclContext* sharkbitParser::DeclListContext::decl() {
  return getRuleContext<sharkbitParser::DeclContext>(0);
}

sharkbitParser::DeclListContext* sharkbitParser::DeclListContext::declList() {
  return getRuleContext<sharkbitParser::DeclListContext>(0);
}


size_t sharkbitParser::DeclListContext::getRuleIndex() const {
  return sharkbitParser::RuleDeclList;
}

void sharkbitParser::DeclListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclList(this);
}

void sharkbitParser::DeclListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclList(this);
}


antlrcpp::Any sharkbitParser::DeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitDeclList(this);
  else
    return visitor->visitChildren(this);
}


sharkbitParser::DeclListContext* sharkbitParser::declList() {
   return declList(0);
}

sharkbitParser::DeclListContext* sharkbitParser::declList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  sharkbitParser::DeclListContext *_localctx = _tracker.createInstance<DeclListContext>(_ctx, parentState);
  sharkbitParser::DeclListContext *previousContext = _localctx;
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, sharkbitParser::RuleDeclList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(85);
    decl();
    _ctx->stop = _input->LT(-1);
    setState(91);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DeclListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDeclList);
        setState(87);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(88);
        decl(); 
      }
      setState(93);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

sharkbitParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::CoutDeclContext* sharkbitParser::DeclContext::coutDecl() {
  return getRuleContext<sharkbitParser::CoutDeclContext>(0);
}

sharkbitParser::VarDeclContext* sharkbitParser::DeclContext::varDecl() {
  return getRuleContext<sharkbitParser::VarDeclContext>(0);
}

sharkbitParser::FunDeclContext* sharkbitParser::DeclContext::funDecl() {
  return getRuleContext<sharkbitParser::FunDeclContext>(0);
}


size_t sharkbitParser::DeclContext::getRuleIndex() const {
  return sharkbitParser::RuleDecl;
}

void sharkbitParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void sharkbitParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}


antlrcpp::Any sharkbitParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::DeclContext* sharkbitParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 4, sharkbitParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(97);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sharkbitParser::COUT: {
        enterOuterAlt(_localctx, 1);
        setState(94);
        coutDecl();
        break;
      }

      case sharkbitParser::DOUBLE:
      case sharkbitParser::INT:
      case sharkbitParser::STRING:
      case sharkbitParser::CHAR:
      case sharkbitParser::CONST:
      case sharkbitParser::LIST:
      case sharkbitParser::BOOL:
      case sharkbitParser::IP:
      case sharkbitParser::ADDRESS:
      case sharkbitParser::FILE:
      case sharkbitParser::PROTOCOL:
      case sharkbitParser::POINTER:
      case sharkbitParser::ID:
      case sharkbitParser::PORT: {
        enterOuterAlt(_localctx, 2);
        setState(95);
        varDecl();
        break;
      }

      case sharkbitParser::FUNCTION: {
        enterOuterAlt(_localctx, 3);
        setState(96);
        funDecl();
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

//----------------- VarDeclContext ------------------------------------------------------------------

sharkbitParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::ConstSpecContext* sharkbitParser::VarDeclContext::constSpec() {
  return getRuleContext<sharkbitParser::ConstSpecContext>(0);
}

sharkbitParser::TypeDecContext* sharkbitParser::VarDeclContext::typeDec() {
  return getRuleContext<sharkbitParser::TypeDecContext>(0);
}

sharkbitParser::VarDeclInitContext* sharkbitParser::VarDeclContext::varDeclInit() {
  return getRuleContext<sharkbitParser::VarDeclInitContext>(0);
}

tree::TerminalNode* sharkbitParser::VarDeclContext::SEMICOLON() {
  return getToken(sharkbitParser::SEMICOLON, 0);
}


size_t sharkbitParser::VarDeclContext::getRuleIndex() const {
  return sharkbitParser::RuleVarDecl;
}

void sharkbitParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void sharkbitParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}


antlrcpp::Any sharkbitParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::VarDeclContext* sharkbitParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, sharkbitParser::RuleVarDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    constSpec();
    setState(100);
    typeDec();
    setState(101);
    varDeclInit();
    setState(102);
    match(sharkbitParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclInitContext ------------------------------------------------------------------

sharkbitParser::VarDeclInitContext::VarDeclInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::VarDeclIdContext* sharkbitParser::VarDeclInitContext::varDeclId() {
  return getRuleContext<sharkbitParser::VarDeclIdContext>(0);
}

tree::TerminalNode* sharkbitParser::VarDeclInitContext::ASSIGN() {
  return getToken(sharkbitParser::ASSIGN, 0);
}

sharkbitParser::MathExpContext* sharkbitParser::VarDeclInitContext::mathExp() {
  return getRuleContext<sharkbitParser::MathExpContext>(0);
}


size_t sharkbitParser::VarDeclInitContext::getRuleIndex() const {
  return sharkbitParser::RuleVarDeclInit;
}

void sharkbitParser::VarDeclInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclInit(this);
}

void sharkbitParser::VarDeclInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclInit(this);
}


antlrcpp::Any sharkbitParser::VarDeclInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitVarDeclInit(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::VarDeclInitContext* sharkbitParser::varDeclInit() {
  VarDeclInitContext *_localctx = _tracker.createInstance<VarDeclInitContext>(_ctx, getState());
  enterRule(_localctx, 8, sharkbitParser::RuleVarDeclInit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(109);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(104);
      varDeclId();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(105);
      varDeclId();
      setState(106);
      match(sharkbitParser::ASSIGN);
      setState(107);
      mathExp();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclIdContext ------------------------------------------------------------------

sharkbitParser::VarDeclIdContext::VarDeclIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::VarDeclIdContext::ID() {
  return getToken(sharkbitParser::ID, 0);
}

tree::TerminalNode* sharkbitParser::VarDeclIdContext::LS() {
  return getToken(sharkbitParser::LS, 0);
}

tree::TerminalNode* sharkbitParser::VarDeclIdContext::RS() {
  return getToken(sharkbitParser::RS, 0);
}


size_t sharkbitParser::VarDeclIdContext::getRuleIndex() const {
  return sharkbitParser::RuleVarDeclId;
}

void sharkbitParser::VarDeclIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclId(this);
}

void sharkbitParser::VarDeclIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclId(this);
}


antlrcpp::Any sharkbitParser::VarDeclIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitVarDeclId(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::VarDeclIdContext* sharkbitParser::varDeclId() {
  VarDeclIdContext *_localctx = _tracker.createInstance<VarDeclIdContext>(_ctx, getState());
  enterRule(_localctx, 10, sharkbitParser::RuleVarDeclId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(111);
      match(sharkbitParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(112);
      match(sharkbitParser::ID);
      setState(113);
      match(sharkbitParser::LS);
      setState(114);
      match(sharkbitParser::RS);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CoutDeclContext ------------------------------------------------------------------

sharkbitParser::CoutDeclContext::CoutDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::CoutDeclContext::COUT() {
  return getToken(sharkbitParser::COUT, 0);
}

tree::TerminalNode* sharkbitParser::CoutDeclContext::ID() {
  return getToken(sharkbitParser::ID, 0);
}

tree::TerminalNode* sharkbitParser::CoutDeclContext::SEMICOLON() {
  return getToken(sharkbitParser::SEMICOLON, 0);
}

sharkbitParser::MathExpContext* sharkbitParser::CoutDeclContext::mathExp() {
  return getRuleContext<sharkbitParser::MathExpContext>(0);
}


size_t sharkbitParser::CoutDeclContext::getRuleIndex() const {
  return sharkbitParser::RuleCoutDecl;
}

void sharkbitParser::CoutDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCoutDecl(this);
}

void sharkbitParser::CoutDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCoutDecl(this);
}


antlrcpp::Any sharkbitParser::CoutDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitCoutDecl(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::CoutDeclContext* sharkbitParser::coutDecl() {
  CoutDeclContext *_localctx = _tracker.createInstance<CoutDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, sharkbitParser::RuleCoutDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(124);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(117);
      match(sharkbitParser::COUT);
      setState(118);
      match(sharkbitParser::ID);
      setState(119);
      match(sharkbitParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(120);
      match(sharkbitParser::COUT);
      setState(121);
      mathExp();
      setState(122);
      match(sharkbitParser::SEMICOLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstSpecContext ------------------------------------------------------------------

sharkbitParser::ConstSpecContext::ConstSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::ConstSpecContext::CONST() {
  return getToken(sharkbitParser::CONST, 0);
}


size_t sharkbitParser::ConstSpecContext::getRuleIndex() const {
  return sharkbitParser::RuleConstSpec;
}

void sharkbitParser::ConstSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstSpec(this);
}

void sharkbitParser::ConstSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstSpec(this);
}


antlrcpp::Any sharkbitParser::ConstSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitConstSpec(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::ConstSpecContext* sharkbitParser::constSpec() {
  ConstSpecContext *_localctx = _tracker.createInstance<ConstSpecContext>(_ctx, getState());
  enterRule(_localctx, 14, sharkbitParser::RuleConstSpec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(128);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sharkbitParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(126);
        match(sharkbitParser::CONST);
        break;
      }

      case sharkbitParser::DOUBLE:
      case sharkbitParser::INT:
      case sharkbitParser::STRING:
      case sharkbitParser::CHAR:
      case sharkbitParser::LIST:
      case sharkbitParser::BOOL:
      case sharkbitParser::IP:
      case sharkbitParser::ADDRESS:
      case sharkbitParser::FILE:
      case sharkbitParser::PROTOCOL:
      case sharkbitParser::POINTER:
      case sharkbitParser::ID:
      case sharkbitParser::PORT: {
        enterOuterAlt(_localctx, 2);

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

//----------------- TypeSpecContext ------------------------------------------------------------------

sharkbitParser::TypeSpecContext::TypeSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::TypeSpecContext::INT() {
  return getToken(sharkbitParser::INT, 0);
}

tree::TerminalNode* sharkbitParser::TypeSpecContext::BOOL() {
  return getToken(sharkbitParser::BOOL, 0);
}

tree::TerminalNode* sharkbitParser::TypeSpecContext::DOUBLE() {
  return getToken(sharkbitParser::DOUBLE, 0);
}

tree::TerminalNode* sharkbitParser::TypeSpecContext::STRING() {
  return getToken(sharkbitParser::STRING, 0);
}

tree::TerminalNode* sharkbitParser::TypeSpecContext::IP() {
  return getToken(sharkbitParser::IP, 0);
}

tree::TerminalNode* sharkbitParser::TypeSpecContext::PROTOCOL() {
  return getToken(sharkbitParser::PROTOCOL, 0);
}

tree::TerminalNode* sharkbitParser::TypeSpecContext::ADDRESS() {
  return getToken(sharkbitParser::ADDRESS, 0);
}

tree::TerminalNode* sharkbitParser::TypeSpecContext::FILE() {
  return getToken(sharkbitParser::FILE, 0);
}

tree::TerminalNode* sharkbitParser::TypeSpecContext::PORT() {
  return getToken(sharkbitParser::PORT, 0);
}

tree::TerminalNode* sharkbitParser::TypeSpecContext::CHAR() {
  return getToken(sharkbitParser::CHAR, 0);
}

sharkbitParser::ListContext* sharkbitParser::TypeSpecContext::list() {
  return getRuleContext<sharkbitParser::ListContext>(0);
}


size_t sharkbitParser::TypeSpecContext::getRuleIndex() const {
  return sharkbitParser::RuleTypeSpec;
}

void sharkbitParser::TypeSpecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpec(this);
}

void sharkbitParser::TypeSpecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpec(this);
}


antlrcpp::Any sharkbitParser::TypeSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitTypeSpec(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::TypeSpecContext* sharkbitParser::typeSpec() {
  TypeSpecContext *_localctx = _tracker.createInstance<TypeSpecContext>(_ctx, getState());
  enterRule(_localctx, 16, sharkbitParser::RuleTypeSpec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(142);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sharkbitParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(130);
        match(sharkbitParser::INT);
        break;
      }

      case sharkbitParser::BOOL: {
        enterOuterAlt(_localctx, 2);
        setState(131);
        match(sharkbitParser::BOOL);
        break;
      }

      case sharkbitParser::DOUBLE: {
        enterOuterAlt(_localctx, 3);
        setState(132);
        match(sharkbitParser::DOUBLE);
        break;
      }

      case sharkbitParser::STRING: {
        enterOuterAlt(_localctx, 4);
        setState(133);
        match(sharkbitParser::STRING);
        break;
      }

      case sharkbitParser::IP: {
        enterOuterAlt(_localctx, 5);
        setState(134);
        match(sharkbitParser::IP);
        break;
      }

      case sharkbitParser::PROTOCOL: {
        enterOuterAlt(_localctx, 6);
        setState(135);
        match(sharkbitParser::PROTOCOL);
        break;
      }

      case sharkbitParser::ADDRESS: {
        enterOuterAlt(_localctx, 7);
        setState(136);
        match(sharkbitParser::ADDRESS);
        break;
      }

      case sharkbitParser::FILE: {
        enterOuterAlt(_localctx, 8);
        setState(137);
        match(sharkbitParser::FILE);
        break;
      }

      case sharkbitParser::PORT: {
        enterOuterAlt(_localctx, 9);
        setState(138);
        match(sharkbitParser::PORT);
        break;
      }

      case sharkbitParser::CHAR: {
        enterOuterAlt(_localctx, 10);
        setState(139);
        match(sharkbitParser::CHAR);
        break;
      }

      case sharkbitParser::LIST: {
        enterOuterAlt(_localctx, 11);
        setState(140);
        list();
        break;
      }

      case sharkbitParser::POINTER:
      case sharkbitParser::LR:
      case sharkbitParser::GREATER:
      case sharkbitParser::ID: {
        enterOuterAlt(_localctx, 12);

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

//----------------- ListContext ------------------------------------------------------------------

sharkbitParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::ListContext::LIST() {
  return getToken(sharkbitParser::LIST, 0);
}

tree::TerminalNode* sharkbitParser::ListContext::LESS() {
  return getToken(sharkbitParser::LESS, 0);
}

sharkbitParser::TypeSpecContext* sharkbitParser::ListContext::typeSpec() {
  return getRuleContext<sharkbitParser::TypeSpecContext>(0);
}

tree::TerminalNode* sharkbitParser::ListContext::GREATER() {
  return getToken(sharkbitParser::GREATER, 0);
}


size_t sharkbitParser::ListContext::getRuleIndex() const {
  return sharkbitParser::RuleList;
}

void sharkbitParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}

void sharkbitParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}


antlrcpp::Any sharkbitParser::ListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitList(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::ListContext* sharkbitParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 18, sharkbitParser::RuleList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(sharkbitParser::LIST);
    setState(145);
    match(sharkbitParser::LESS);
    setState(146);
    typeSpec();
    setState(147);
    match(sharkbitParser::GREATER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDecContext ------------------------------------------------------------------

sharkbitParser::TypeDecContext::TypeDecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::TypeSpecContext* sharkbitParser::TypeDecContext::typeSpec() {
  return getRuleContext<sharkbitParser::TypeSpecContext>(0);
}

sharkbitParser::PointerDecContext* sharkbitParser::TypeDecContext::pointerDec() {
  return getRuleContext<sharkbitParser::PointerDecContext>(0);
}


size_t sharkbitParser::TypeDecContext::getRuleIndex() const {
  return sharkbitParser::RuleTypeDec;
}

void sharkbitParser::TypeDecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDec(this);
}

void sharkbitParser::TypeDecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDec(this);
}


antlrcpp::Any sharkbitParser::TypeDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitTypeDec(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::TypeDecContext* sharkbitParser::typeDec() {
  TypeDecContext *_localctx = _tracker.createInstance<TypeDecContext>(_ctx, getState());
  enterRule(_localctx, 20, sharkbitParser::RuleTypeDec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    typeSpec();
    setState(150);
    pointerDec();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerDecContext ------------------------------------------------------------------

sharkbitParser::PointerDecContext::PointerDecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::PointerDecContext::POINTER() {
  return getToken(sharkbitParser::POINTER, 0);
}


size_t sharkbitParser::PointerDecContext::getRuleIndex() const {
  return sharkbitParser::RulePointerDec;
}

void sharkbitParser::PointerDecContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerDec(this);
}

void sharkbitParser::PointerDecContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerDec(this);
}


antlrcpp::Any sharkbitParser::PointerDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitPointerDec(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::PointerDecContext* sharkbitParser::pointerDec() {
  PointerDecContext *_localctx = _tracker.createInstance<PointerDecContext>(_ctx, getState());
  enterRule(_localctx, 22, sharkbitParser::RulePointerDec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(154);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sharkbitParser::POINTER: {
        enterOuterAlt(_localctx, 1);
        setState(152);
        match(sharkbitParser::POINTER);
        break;
      }

      case sharkbitParser::LR:
      case sharkbitParser::ID: {
        enterOuterAlt(_localctx, 2);

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

//----------------- FunDeclContext ------------------------------------------------------------------

sharkbitParser::FunDeclContext::FunDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::FunDeclContext::FUNCTION() {
  return getToken(sharkbitParser::FUNCTION, 0);
}

tree::TerminalNode* sharkbitParser::FunDeclContext::ID() {
  return getToken(sharkbitParser::ID, 0);
}

sharkbitParser::TypeDecContext* sharkbitParser::FunDeclContext::typeDec() {
  return getRuleContext<sharkbitParser::TypeDecContext>(0);
}

tree::TerminalNode* sharkbitParser::FunDeclContext::LR() {
  return getToken(sharkbitParser::LR, 0);
}

sharkbitParser::ParmsContext* sharkbitParser::FunDeclContext::parms() {
  return getRuleContext<sharkbitParser::ParmsContext>(0);
}

tree::TerminalNode* sharkbitParser::FunDeclContext::RR() {
  return getToken(sharkbitParser::RR, 0);
}

sharkbitParser::StmtContext* sharkbitParser::FunDeclContext::stmt() {
  return getRuleContext<sharkbitParser::StmtContext>(0);
}


size_t sharkbitParser::FunDeclContext::getRuleIndex() const {
  return sharkbitParser::RuleFunDecl;
}

void sharkbitParser::FunDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunDecl(this);
}

void sharkbitParser::FunDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunDecl(this);
}


antlrcpp::Any sharkbitParser::FunDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitFunDecl(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::FunDeclContext* sharkbitParser::funDecl() {
  FunDeclContext *_localctx = _tracker.createInstance<FunDeclContext>(_ctx, getState());
  enterRule(_localctx, 24, sharkbitParser::RuleFunDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(sharkbitParser::FUNCTION);
    setState(157);
    match(sharkbitParser::ID);
    setState(158);
    typeDec();
    setState(159);
    match(sharkbitParser::LR);
    setState(160);
    parms();
    setState(161);
    match(sharkbitParser::RR);
    setState(162);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParmsContext ------------------------------------------------------------------

sharkbitParser::ParmsContext::ParmsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::ParmListContext* sharkbitParser::ParmsContext::parmList() {
  return getRuleContext<sharkbitParser::ParmListContext>(0);
}


size_t sharkbitParser::ParmsContext::getRuleIndex() const {
  return sharkbitParser::RuleParms;
}

void sharkbitParser::ParmsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParms(this);
}

void sharkbitParser::ParmsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParms(this);
}


antlrcpp::Any sharkbitParser::ParmsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitParms(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::ParmsContext* sharkbitParser::parms() {
  ParmsContext *_localctx = _tracker.createInstance<ParmsContext>(_ctx, getState());
  enterRule(_localctx, 26, sharkbitParser::RuleParms);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(166);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sharkbitParser::DOUBLE:
      case sharkbitParser::INT:
      case sharkbitParser::STRING:
      case sharkbitParser::CHAR:
      case sharkbitParser::LIST:
      case sharkbitParser::BOOL:
      case sharkbitParser::IP:
      case sharkbitParser::ADDRESS:
      case sharkbitParser::FILE:
      case sharkbitParser::PROTOCOL:
      case sharkbitParser::POINTER:
      case sharkbitParser::ID:
      case sharkbitParser::PORT: {
        enterOuterAlt(_localctx, 1);
        setState(164);
        parmList(0);
        break;
      }

      case sharkbitParser::RR: {
        enterOuterAlt(_localctx, 2);

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

//----------------- ParmListContext ------------------------------------------------------------------

sharkbitParser::ParmListContext::ParmListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::ParmTypeListContext* sharkbitParser::ParmListContext::parmTypeList() {
  return getRuleContext<sharkbitParser::ParmTypeListContext>(0);
}

sharkbitParser::ParmListContext* sharkbitParser::ParmListContext::parmList() {
  return getRuleContext<sharkbitParser::ParmListContext>(0);
}

tree::TerminalNode* sharkbitParser::ParmListContext::COMMA() {
  return getToken(sharkbitParser::COMMA, 0);
}


size_t sharkbitParser::ParmListContext::getRuleIndex() const {
  return sharkbitParser::RuleParmList;
}

void sharkbitParser::ParmListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParmList(this);
}

void sharkbitParser::ParmListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParmList(this);
}


antlrcpp::Any sharkbitParser::ParmListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitParmList(this);
  else
    return visitor->visitChildren(this);
}


sharkbitParser::ParmListContext* sharkbitParser::parmList() {
   return parmList(0);
}

sharkbitParser::ParmListContext* sharkbitParser::parmList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  sharkbitParser::ParmListContext *_localctx = _tracker.createInstance<ParmListContext>(_ctx, parentState);
  sharkbitParser::ParmListContext *previousContext = _localctx;
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, sharkbitParser::RuleParmList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(169);
    parmTypeList();
    _ctx->stop = _input->LT(-1);
    setState(176);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParmListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParmList);
        setState(171);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(172);
        match(sharkbitParser::COMMA);
        setState(173);
        parmTypeList(); 
      }
      setState(178);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParmTypeListContext ------------------------------------------------------------------

sharkbitParser::ParmTypeListContext::ParmTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::TypeDecContext* sharkbitParser::ParmTypeListContext::typeDec() {
  return getRuleContext<sharkbitParser::TypeDecContext>(0);
}

sharkbitParser::ParmIdListContext* sharkbitParser::ParmTypeListContext::parmIdList() {
  return getRuleContext<sharkbitParser::ParmIdListContext>(0);
}


size_t sharkbitParser::ParmTypeListContext::getRuleIndex() const {
  return sharkbitParser::RuleParmTypeList;
}

void sharkbitParser::ParmTypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParmTypeList(this);
}

void sharkbitParser::ParmTypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParmTypeList(this);
}


antlrcpp::Any sharkbitParser::ParmTypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitParmTypeList(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::ParmTypeListContext* sharkbitParser::parmTypeList() {
  ParmTypeListContext *_localctx = _tracker.createInstance<ParmTypeListContext>(_ctx, getState());
  enterRule(_localctx, 30, sharkbitParser::RuleParmTypeList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    typeDec();
    setState(180);
    parmIdList(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParmIdListContext ------------------------------------------------------------------

sharkbitParser::ParmIdListContext::ParmIdListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::ParmIdContext* sharkbitParser::ParmIdListContext::parmId() {
  return getRuleContext<sharkbitParser::ParmIdContext>(0);
}

sharkbitParser::ParmIdListContext* sharkbitParser::ParmIdListContext::parmIdList() {
  return getRuleContext<sharkbitParser::ParmIdListContext>(0);
}

tree::TerminalNode* sharkbitParser::ParmIdListContext::COMMA() {
  return getToken(sharkbitParser::COMMA, 0);
}


size_t sharkbitParser::ParmIdListContext::getRuleIndex() const {
  return sharkbitParser::RuleParmIdList;
}

void sharkbitParser::ParmIdListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParmIdList(this);
}

void sharkbitParser::ParmIdListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParmIdList(this);
}


antlrcpp::Any sharkbitParser::ParmIdListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitParmIdList(this);
  else
    return visitor->visitChildren(this);
}


sharkbitParser::ParmIdListContext* sharkbitParser::parmIdList() {
   return parmIdList(0);
}

sharkbitParser::ParmIdListContext* sharkbitParser::parmIdList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  sharkbitParser::ParmIdListContext *_localctx = _tracker.createInstance<ParmIdListContext>(_ctx, parentState);
  sharkbitParser::ParmIdListContext *previousContext = _localctx;
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, sharkbitParser::RuleParmIdList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(183);
    parmId();
    _ctx->stop = _input->LT(-1);
    setState(190);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParmIdListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParmIdList);
        setState(185);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(186);
        match(sharkbitParser::COMMA);
        setState(187);
        parmId(); 
      }
      setState(192);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParmIdContext ------------------------------------------------------------------

sharkbitParser::ParmIdContext::ParmIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::ParmIdContext::ID() {
  return getToken(sharkbitParser::ID, 0);
}

tree::TerminalNode* sharkbitParser::ParmIdContext::LS() {
  return getToken(sharkbitParser::LS, 0);
}

tree::TerminalNode* sharkbitParser::ParmIdContext::RS() {
  return getToken(sharkbitParser::RS, 0);
}


size_t sharkbitParser::ParmIdContext::getRuleIndex() const {
  return sharkbitParser::RuleParmId;
}

void sharkbitParser::ParmIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParmId(this);
}

void sharkbitParser::ParmIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParmId(this);
}


antlrcpp::Any sharkbitParser::ParmIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitParmId(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::ParmIdContext* sharkbitParser::parmId() {
  ParmIdContext *_localctx = _tracker.createInstance<ParmIdContext>(_ctx, getState());
  enterRule(_localctx, 34, sharkbitParser::RuleParmId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(197);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(193);
      match(sharkbitParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(194);
      match(sharkbitParser::ID);
      setState(195);
      match(sharkbitParser::LS);
      setState(196);
      match(sharkbitParser::RS);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

sharkbitParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::ExpStmtContext* sharkbitParser::StmtContext::expStmt() {
  return getRuleContext<sharkbitParser::ExpStmtContext>(0);
}

sharkbitParser::CompoundStmtContext* sharkbitParser::StmtContext::compoundStmt() {
  return getRuleContext<sharkbitParser::CompoundStmtContext>(0);
}

sharkbitParser::SelectStmtContext* sharkbitParser::StmtContext::selectStmt() {
  return getRuleContext<sharkbitParser::SelectStmtContext>(0);
}

sharkbitParser::IterStmtContext* sharkbitParser::StmtContext::iterStmt() {
  return getRuleContext<sharkbitParser::IterStmtContext>(0);
}

sharkbitParser::ReturnStmtContext* sharkbitParser::StmtContext::returnStmt() {
  return getRuleContext<sharkbitParser::ReturnStmtContext>(0);
}

sharkbitParser::BreakStmtContext* sharkbitParser::StmtContext::breakStmt() {
  return getRuleContext<sharkbitParser::BreakStmtContext>(0);
}

sharkbitParser::VarDeclContext* sharkbitParser::StmtContext::varDecl() {
  return getRuleContext<sharkbitParser::VarDeclContext>(0);
}

sharkbitParser::CoutDeclContext* sharkbitParser::StmtContext::coutDecl() {
  return getRuleContext<sharkbitParser::CoutDeclContext>(0);
}


size_t sharkbitParser::StmtContext::getRuleIndex() const {
  return sharkbitParser::RuleStmt;
}

void sharkbitParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void sharkbitParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any sharkbitParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::StmtContext* sharkbitParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 36, sharkbitParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(207);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(199);
      expStmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(200);
      compoundStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(201);
      selectStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(202);
      iterStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(203);
      returnStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(204);
      breakStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(205);
      varDecl();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(206);
      coutDecl();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpStmtContext ------------------------------------------------------------------

sharkbitParser::ExpStmtContext::ExpStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::SimpleExpContext* sharkbitParser::ExpStmtContext::simpleExp() {
  return getRuleContext<sharkbitParser::SimpleExpContext>(0);
}

tree::TerminalNode* sharkbitParser::ExpStmtContext::SEMICOLON() {
  return getToken(sharkbitParser::SEMICOLON, 0);
}


size_t sharkbitParser::ExpStmtContext::getRuleIndex() const {
  return sharkbitParser::RuleExpStmt;
}

void sharkbitParser::ExpStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpStmt(this);
}

void sharkbitParser::ExpStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpStmt(this);
}


antlrcpp::Any sharkbitParser::ExpStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitExpStmt(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::ExpStmtContext* sharkbitParser::expStmt() {
  ExpStmtContext *_localctx = _tracker.createInstance<ExpStmtContext>(_ctx, getState());
  enterRule(_localctx, 38, sharkbitParser::RuleExpStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(213);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sharkbitParser::TRUE:
      case sharkbitParser::FALSE:
      case sharkbitParser::LR:
      case sharkbitParser::POINTER_ADDRESS:
      case sharkbitParser::NULL:
      case sharkbitParser::NOT:
      case sharkbitParser::ID:
      case sharkbitParser::STRING_CONST:
      case sharkbitParser::DOUBNUMBER:
      case sharkbitParser::INTNUMBER:
      case sharkbitParser::CHAR_CONST: {
        enterOuterAlt(_localctx, 1);
        setState(209);
        simpleExp();
        setState(210);
        match(sharkbitParser::SEMICOLON);
        break;
      }

      case sharkbitParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);
        setState(212);
        match(sharkbitParser::SEMICOLON);
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

//----------------- CompoundStmtContext ------------------------------------------------------------------

sharkbitParser::CompoundStmtContext::CompoundStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::CompoundStmtContext::LC() {
  return getToken(sharkbitParser::LC, 0);
}

sharkbitParser::StmtListContext* sharkbitParser::CompoundStmtContext::stmtList() {
  return getRuleContext<sharkbitParser::StmtListContext>(0);
}

tree::TerminalNode* sharkbitParser::CompoundStmtContext::RC() {
  return getToken(sharkbitParser::RC, 0);
}


size_t sharkbitParser::CompoundStmtContext::getRuleIndex() const {
  return sharkbitParser::RuleCompoundStmt;
}

void sharkbitParser::CompoundStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStmt(this);
}

void sharkbitParser::CompoundStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStmt(this);
}


antlrcpp::Any sharkbitParser::CompoundStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitCompoundStmt(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::CompoundStmtContext* sharkbitParser::compoundStmt() {
  CompoundStmtContext *_localctx = _tracker.createInstance<CompoundStmtContext>(_ctx, getState());
  enterRule(_localctx, 40, sharkbitParser::RuleCompoundStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(sharkbitParser::LC);
    setState(216);
    stmtList(0);
    setState(217);
    match(sharkbitParser::RC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtListContext ------------------------------------------------------------------

sharkbitParser::StmtListContext::StmtListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::StmtListContext* sharkbitParser::StmtListContext::stmtList() {
  return getRuleContext<sharkbitParser::StmtListContext>(0);
}

sharkbitParser::StmtContext* sharkbitParser::StmtListContext::stmt() {
  return getRuleContext<sharkbitParser::StmtContext>(0);
}


size_t sharkbitParser::StmtListContext::getRuleIndex() const {
  return sharkbitParser::RuleStmtList;
}

void sharkbitParser::StmtListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmtList(this);
}

void sharkbitParser::StmtListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmtList(this);
}


antlrcpp::Any sharkbitParser::StmtListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitStmtList(this);
  else
    return visitor->visitChildren(this);
}


sharkbitParser::StmtListContext* sharkbitParser::stmtList() {
   return stmtList(0);
}

sharkbitParser::StmtListContext* sharkbitParser::stmtList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  sharkbitParser::StmtListContext *_localctx = _tracker.createInstance<StmtListContext>(_ctx, parentState);
  sharkbitParser::StmtListContext *previousContext = _localctx;
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, sharkbitParser::RuleStmtList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _ctx->stop = _input->LT(-1);
    setState(224);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StmtListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStmtList);
        setState(220);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(221);
        stmt(); 
      }
      setState(226);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SelectStmtContext ------------------------------------------------------------------

sharkbitParser::SelectStmtContext::SelectStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::SelectStmtContext::IF() {
  return getToken(sharkbitParser::IF, 0);
}

tree::TerminalNode* sharkbitParser::SelectStmtContext::LR() {
  return getToken(sharkbitParser::LR, 0);
}

sharkbitParser::SimpleExpContext* sharkbitParser::SelectStmtContext::simpleExp() {
  return getRuleContext<sharkbitParser::SimpleExpContext>(0);
}

tree::TerminalNode* sharkbitParser::SelectStmtContext::RR() {
  return getToken(sharkbitParser::RR, 0);
}

std::vector<sharkbitParser::StmtContext *> sharkbitParser::SelectStmtContext::stmt() {
  return getRuleContexts<sharkbitParser::StmtContext>();
}

sharkbitParser::StmtContext* sharkbitParser::SelectStmtContext::stmt(size_t i) {
  return getRuleContext<sharkbitParser::StmtContext>(i);
}

tree::TerminalNode* sharkbitParser::SelectStmtContext::ELSE() {
  return getToken(sharkbitParser::ELSE, 0);
}


size_t sharkbitParser::SelectStmtContext::getRuleIndex() const {
  return sharkbitParser::RuleSelectStmt;
}

void sharkbitParser::SelectStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectStmt(this);
}

void sharkbitParser::SelectStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectStmt(this);
}


antlrcpp::Any sharkbitParser::SelectStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitSelectStmt(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::SelectStmtContext* sharkbitParser::selectStmt() {
  SelectStmtContext *_localctx = _tracker.createInstance<SelectStmtContext>(_ctx, getState());
  enterRule(_localctx, 44, sharkbitParser::RuleSelectStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(241);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(227);
      match(sharkbitParser::IF);
      setState(228);
      match(sharkbitParser::LR);
      setState(229);
      simpleExp();
      setState(230);
      match(sharkbitParser::RR);
      setState(231);
      stmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(233);
      match(sharkbitParser::IF);
      setState(234);
      match(sharkbitParser::LR);
      setState(235);
      simpleExp();
      setState(236);
      match(sharkbitParser::RR);
      setState(237);
      stmt();
      setState(238);
      match(sharkbitParser::ELSE);
      setState(239);
      stmt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterStmtContext ------------------------------------------------------------------

sharkbitParser::IterStmtContext::IterStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::IterStmtContext::WHILE() {
  return getToken(sharkbitParser::WHILE, 0);
}

tree::TerminalNode* sharkbitParser::IterStmtContext::LR() {
  return getToken(sharkbitParser::LR, 0);
}

sharkbitParser::SimpleExpContext* sharkbitParser::IterStmtContext::simpleExp() {
  return getRuleContext<sharkbitParser::SimpleExpContext>(0);
}

tree::TerminalNode* sharkbitParser::IterStmtContext::RR() {
  return getToken(sharkbitParser::RR, 0);
}

sharkbitParser::StmtContext* sharkbitParser::IterStmtContext::stmt() {
  return getRuleContext<sharkbitParser::StmtContext>(0);
}

tree::TerminalNode* sharkbitParser::IterStmtContext::FOR() {
  return getToken(sharkbitParser::FOR, 0);
}

tree::TerminalNode* sharkbitParser::IterStmtContext::ID() {
  return getToken(sharkbitParser::ID, 0);
}

tree::TerminalNode* sharkbitParser::IterStmtContext::IN() {
  return getToken(sharkbitParser::IN, 0);
}

sharkbitParser::IterRangeContext* sharkbitParser::IterStmtContext::iterRange() {
  return getRuleContext<sharkbitParser::IterRangeContext>(0);
}


size_t sharkbitParser::IterStmtContext::getRuleIndex() const {
  return sharkbitParser::RuleIterStmt;
}

void sharkbitParser::IterStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterStmt(this);
}

void sharkbitParser::IterStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterStmt(this);
}


antlrcpp::Any sharkbitParser::IterStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitIterStmt(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::IterStmtContext* sharkbitParser::iterStmt() {
  IterStmtContext *_localctx = _tracker.createInstance<IterStmtContext>(_ctx, getState());
  enterRule(_localctx, 46, sharkbitParser::RuleIterStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sharkbitParser::WHILE: {
        enterOuterAlt(_localctx, 1);
        setState(243);
        match(sharkbitParser::WHILE);
        setState(244);
        match(sharkbitParser::LR);
        setState(245);
        simpleExp();
        setState(246);
        match(sharkbitParser::RR);
        setState(247);
        stmt();
        break;
      }

      case sharkbitParser::FOR: {
        enterOuterAlt(_localctx, 2);
        setState(249);
        match(sharkbitParser::FOR);
        setState(250);
        match(sharkbitParser::LR);
        setState(251);
        match(sharkbitParser::ID);
        setState(252);
        match(sharkbitParser::IN);
        setState(253);
        iterRange();
        setState(254);
        match(sharkbitParser::RR);
        setState(255);
        stmt();
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

//----------------- IterRangeContext ------------------------------------------------------------------

sharkbitParser::IterRangeContext::IterRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sharkbitParser::SimpleExpContext *> sharkbitParser::IterRangeContext::simpleExp() {
  return getRuleContexts<sharkbitParser::SimpleExpContext>();
}

sharkbitParser::SimpleExpContext* sharkbitParser::IterRangeContext::simpleExp(size_t i) {
  return getRuleContext<sharkbitParser::SimpleExpContext>(i);
}

tree::TerminalNode* sharkbitParser::IterRangeContext::TO() {
  return getToken(sharkbitParser::TO, 0);
}

tree::TerminalNode* sharkbitParser::IterRangeContext::BY() {
  return getToken(sharkbitParser::BY, 0);
}


size_t sharkbitParser::IterRangeContext::getRuleIndex() const {
  return sharkbitParser::RuleIterRange;
}

void sharkbitParser::IterRangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterRange(this);
}

void sharkbitParser::IterRangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterRange(this);
}


antlrcpp::Any sharkbitParser::IterRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitIterRange(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::IterRangeContext* sharkbitParser::iterRange() {
  IterRangeContext *_localctx = _tracker.createInstance<IterRangeContext>(_ctx, getState());
  enterRule(_localctx, 48, sharkbitParser::RuleIterRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(269);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(259);
      simpleExp();
      setState(260);
      match(sharkbitParser::TO);
      setState(261);
      simpleExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(263);
      simpleExp();
      setState(264);
      match(sharkbitParser::TO);
      setState(265);
      simpleExp();
      setState(266);
      match(sharkbitParser::BY);
      setState(267);
      simpleExp();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

sharkbitParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::ReturnStmtContext::RETURN() {
  return getToken(sharkbitParser::RETURN, 0);
}

tree::TerminalNode* sharkbitParser::ReturnStmtContext::SEMICOLON() {
  return getToken(sharkbitParser::SEMICOLON, 0);
}

sharkbitParser::SimpleExpContext* sharkbitParser::ReturnStmtContext::simpleExp() {
  return getRuleContext<sharkbitParser::SimpleExpContext>(0);
}


size_t sharkbitParser::ReturnStmtContext::getRuleIndex() const {
  return sharkbitParser::RuleReturnStmt;
}

void sharkbitParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}

void sharkbitParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}


antlrcpp::Any sharkbitParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::ReturnStmtContext* sharkbitParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 50, sharkbitParser::RuleReturnStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(277);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(271);
      match(sharkbitParser::RETURN);
      setState(272);
      match(sharkbitParser::SEMICOLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(273);
      match(sharkbitParser::RETURN);
      setState(274);
      simpleExp();
      setState(275);
      match(sharkbitParser::SEMICOLON);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStmtContext ------------------------------------------------------------------

sharkbitParser::BreakStmtContext::BreakStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::BreakStmtContext::BREAK() {
  return getToken(sharkbitParser::BREAK, 0);
}

tree::TerminalNode* sharkbitParser::BreakStmtContext::SEMICOLON() {
  return getToken(sharkbitParser::SEMICOLON, 0);
}


size_t sharkbitParser::BreakStmtContext::getRuleIndex() const {
  return sharkbitParser::RuleBreakStmt;
}

void sharkbitParser::BreakStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStmt(this);
}

void sharkbitParser::BreakStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStmt(this);
}


antlrcpp::Any sharkbitParser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::BreakStmtContext* sharkbitParser::breakStmt() {
  BreakStmtContext *_localctx = _tracker.createInstance<BreakStmtContext>(_ctx, getState());
  enterRule(_localctx, 52, sharkbitParser::RuleBreakStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(sharkbitParser::BREAK);
    setState(280);
    match(sharkbitParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleExpContext ------------------------------------------------------------------

sharkbitParser::SimpleExpContext::SimpleExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::MathExpContext* sharkbitParser::SimpleExpContext::mathExp() {
  return getRuleContext<sharkbitParser::MathExpContext>(0);
}

sharkbitParser::LogicalExpContext* sharkbitParser::SimpleExpContext::logicalExp() {
  return getRuleContext<sharkbitParser::LogicalExpContext>(0);
}


size_t sharkbitParser::SimpleExpContext::getRuleIndex() const {
  return sharkbitParser::RuleSimpleExp;
}

void sharkbitParser::SimpleExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleExp(this);
}

void sharkbitParser::SimpleExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleExp(this);
}


antlrcpp::Any sharkbitParser::SimpleExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitSimpleExp(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::SimpleExpContext* sharkbitParser::simpleExp() {
  SimpleExpContext *_localctx = _tracker.createInstance<SimpleExpContext>(_ctx, getState());
  enterRule(_localctx, 54, sharkbitParser::RuleSimpleExp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(284);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(282);
      mathExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(283);
      logicalExp(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalExpContext ------------------------------------------------------------------

sharkbitParser::LogicalExpContext::LogicalExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::UnaryRelExpContext* sharkbitParser::LogicalExpContext::unaryRelExp() {
  return getRuleContext<sharkbitParser::UnaryRelExpContext>(0);
}

sharkbitParser::LogicalExpContext* sharkbitParser::LogicalExpContext::logicalExp() {
  return getRuleContext<sharkbitParser::LogicalExpContext>(0);
}

tree::TerminalNode* sharkbitParser::LogicalExpContext::AND() {
  return getToken(sharkbitParser::AND, 0);
}


size_t sharkbitParser::LogicalExpContext::getRuleIndex() const {
  return sharkbitParser::RuleLogicalExp;
}

void sharkbitParser::LogicalExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalExp(this);
}

void sharkbitParser::LogicalExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalExp(this);
}


antlrcpp::Any sharkbitParser::LogicalExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitLogicalExp(this);
  else
    return visitor->visitChildren(this);
}


sharkbitParser::LogicalExpContext* sharkbitParser::logicalExp() {
   return logicalExp(0);
}

sharkbitParser::LogicalExpContext* sharkbitParser::logicalExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  sharkbitParser::LogicalExpContext *_localctx = _tracker.createInstance<LogicalExpContext>(_ctx, parentState);
  sharkbitParser::LogicalExpContext *previousContext = _localctx;
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, sharkbitParser::RuleLogicalExp, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(287);
    unaryRelExp();
    _ctx->stop = _input->LT(-1);
    setState(294);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalExp);
        setState(289);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(290);
        match(sharkbitParser::AND);
        setState(291);
        unaryRelExp(); 
      }
      setState(296);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryRelExpContext ------------------------------------------------------------------

sharkbitParser::UnaryRelExpContext::UnaryRelExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::UnaryRelExpContext::NOT() {
  return getToken(sharkbitParser::NOT, 0);
}

sharkbitParser::UnaryRelExpContext* sharkbitParser::UnaryRelExpContext::unaryRelExp() {
  return getRuleContext<sharkbitParser::UnaryRelExpContext>(0);
}

sharkbitParser::RelExpContext* sharkbitParser::UnaryRelExpContext::relExp() {
  return getRuleContext<sharkbitParser::RelExpContext>(0);
}


size_t sharkbitParser::UnaryRelExpContext::getRuleIndex() const {
  return sharkbitParser::RuleUnaryRelExp;
}

void sharkbitParser::UnaryRelExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryRelExp(this);
}

void sharkbitParser::UnaryRelExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryRelExp(this);
}


antlrcpp::Any sharkbitParser::UnaryRelExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitUnaryRelExp(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::UnaryRelExpContext* sharkbitParser::unaryRelExp() {
  UnaryRelExpContext *_localctx = _tracker.createInstance<UnaryRelExpContext>(_ctx, getState());
  enterRule(_localctx, 58, sharkbitParser::RuleUnaryRelExp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(300);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sharkbitParser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(297);
        match(sharkbitParser::NOT);
        setState(298);
        unaryRelExp();
        break;
      }

      case sharkbitParser::TRUE:
      case sharkbitParser::FALSE:
      case sharkbitParser::LR:
      case sharkbitParser::POINTER_ADDRESS:
      case sharkbitParser::NULL:
      case sharkbitParser::ID:
      case sharkbitParser::STRING_CONST:
      case sharkbitParser::DOUBNUMBER:
      case sharkbitParser::INTNUMBER:
      case sharkbitParser::CHAR_CONST: {
        enterOuterAlt(_localctx, 2);
        setState(299);
        relExp();
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

//----------------- RelExpContext ------------------------------------------------------------------

sharkbitParser::RelExpContext::RelExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sharkbitParser::MathExpContext *> sharkbitParser::RelExpContext::mathExp() {
  return getRuleContexts<sharkbitParser::MathExpContext>();
}

sharkbitParser::MathExpContext* sharkbitParser::RelExpContext::mathExp(size_t i) {
  return getRuleContext<sharkbitParser::MathExpContext>(i);
}

sharkbitParser::CompopContext* sharkbitParser::RelExpContext::compop() {
  return getRuleContext<sharkbitParser::CompopContext>(0);
}


size_t sharkbitParser::RelExpContext::getRuleIndex() const {
  return sharkbitParser::RuleRelExp;
}

void sharkbitParser::RelExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelExp(this);
}

void sharkbitParser::RelExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelExp(this);
}


antlrcpp::Any sharkbitParser::RelExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitRelExp(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::RelExpContext* sharkbitParser::relExp() {
  RelExpContext *_localctx = _tracker.createInstance<RelExpContext>(_ctx, getState());
  enterRule(_localctx, 60, sharkbitParser::RuleRelExp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(307);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(302);
      mathExp();
      setState(303);
      compop();
      setState(304);
      mathExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(306);
      mathExp();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompopContext ------------------------------------------------------------------

sharkbitParser::CompopContext::CompopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::CompopContext::LESS() {
  return getToken(sharkbitParser::LESS, 0);
}

tree::TerminalNode* sharkbitParser::CompopContext::GREATER() {
  return getToken(sharkbitParser::GREATER, 0);
}

tree::TerminalNode* sharkbitParser::CompopContext::LEQ() {
  return getToken(sharkbitParser::LEQ, 0);
}

tree::TerminalNode* sharkbitParser::CompopContext::GEQ() {
  return getToken(sharkbitParser::GEQ, 0);
}

tree::TerminalNode* sharkbitParser::CompopContext::DIFF() {
  return getToken(sharkbitParser::DIFF, 0);
}


size_t sharkbitParser::CompopContext::getRuleIndex() const {
  return sharkbitParser::RuleCompop;
}

void sharkbitParser::CompopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompop(this);
}

void sharkbitParser::CompopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompop(this);
}


antlrcpp::Any sharkbitParser::CompopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitCompop(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::CompopContext* sharkbitParser::compop() {
  CompopContext *_localctx = _tracker.createInstance<CompopContext>(_ctx, getState());
  enterRule(_localctx, 62, sharkbitParser::RuleCompop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sharkbitParser::LESS)
      | (1ULL << sharkbitParser::GREATER)
      | (1ULL << sharkbitParser::LEQ)
      | (1ULL << sharkbitParser::GEQ)
      | (1ULL << sharkbitParser::DIFF))) != 0))) {
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

//----------------- MathExpContext ------------------------------------------------------------------

sharkbitParser::MathExpContext::MathExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::FactorContext* sharkbitParser::MathExpContext::factor() {
  return getRuleContext<sharkbitParser::FactorContext>(0);
}

sharkbitParser::MathOpContext* sharkbitParser::MathExpContext::mathOp() {
  return getRuleContext<sharkbitParser::MathOpContext>(0);
}

sharkbitParser::MathExpContext* sharkbitParser::MathExpContext::mathExp() {
  return getRuleContext<sharkbitParser::MathExpContext>(0);
}


size_t sharkbitParser::MathExpContext::getRuleIndex() const {
  return sharkbitParser::RuleMathExp;
}

void sharkbitParser::MathExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMathExp(this);
}

void sharkbitParser::MathExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMathExp(this);
}


antlrcpp::Any sharkbitParser::MathExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitMathExp(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::MathExpContext* sharkbitParser::mathExp() {
  MathExpContext *_localctx = _tracker.createInstance<MathExpContext>(_ctx, getState());
  enterRule(_localctx, 64, sharkbitParser::RuleMathExp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(316);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(311);
      factor();
      setState(312);
      mathOp();
      setState(313);
      mathExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(315);
      factor();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MathOpContext ------------------------------------------------------------------

sharkbitParser::MathOpContext::MathOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::MathOpContext::ADD() {
  return getToken(sharkbitParser::ADD, 0);
}

tree::TerminalNode* sharkbitParser::MathOpContext::SUBSTRACTION() {
  return getToken(sharkbitParser::SUBSTRACTION, 0);
}

tree::TerminalNode* sharkbitParser::MathOpContext::MULTIPLY() {
  return getToken(sharkbitParser::MULTIPLY, 0);
}

tree::TerminalNode* sharkbitParser::MathOpContext::DIVIDE() {
  return getToken(sharkbitParser::DIVIDE, 0);
}

tree::TerminalNode* sharkbitParser::MathOpContext::MOD() {
  return getToken(sharkbitParser::MOD, 0);
}


size_t sharkbitParser::MathOpContext::getRuleIndex() const {
  return sharkbitParser::RuleMathOp;
}

void sharkbitParser::MathOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMathOp(this);
}

void sharkbitParser::MathOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMathOp(this);
}


antlrcpp::Any sharkbitParser::MathOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitMathOp(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::MathOpContext* sharkbitParser::mathOp() {
  MathOpContext *_localctx = _tracker.createInstance<MathOpContext>(_ctx, getState());
  enterRule(_localctx, 66, sharkbitParser::RuleMathOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sharkbitParser::ADD)
      | (1ULL << sharkbitParser::SUBSTRACTION)
      | (1ULL << sharkbitParser::MULTIPLY)
      | (1ULL << sharkbitParser::DIVIDE)
      | (1ULL << sharkbitParser::MOD))) != 0))) {
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

//----------------- FactorContext ------------------------------------------------------------------

sharkbitParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::ImmutableContext* sharkbitParser::FactorContext::immutable() {
  return getRuleContext<sharkbitParser::ImmutableContext>(0);
}

sharkbitParser::MutableContext* sharkbitParser::FactorContext::mutable() {
  return getRuleContext<sharkbitParser::MutableContext>(0);
}


size_t sharkbitParser::FactorContext::getRuleIndex() const {
  return sharkbitParser::RuleFactor;
}

void sharkbitParser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void sharkbitParser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}


antlrcpp::Any sharkbitParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::FactorContext* sharkbitParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 68, sharkbitParser::RuleFactor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(322);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(320);
      immutable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(321);
      mutable();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MutableContext ------------------------------------------------------------------

sharkbitParser::MutableContext::MutableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::MutableContext::ID() {
  return getToken(sharkbitParser::ID, 0);
}

tree::TerminalNode* sharkbitParser::MutableContext::LS() {
  return getToken(sharkbitParser::LS, 0);
}

tree::TerminalNode* sharkbitParser::MutableContext::INTNUMBER() {
  return getToken(sharkbitParser::INTNUMBER, 0);
}

tree::TerminalNode* sharkbitParser::MutableContext::RS() {
  return getToken(sharkbitParser::RS, 0);
}

tree::TerminalNode* sharkbitParser::MutableContext::POINTER_ADDRESS() {
  return getToken(sharkbitParser::POINTER_ADDRESS, 0);
}


size_t sharkbitParser::MutableContext::getRuleIndex() const {
  return sharkbitParser::RuleMutable;
}

void sharkbitParser::MutableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMutable(this);
}

void sharkbitParser::MutableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMutable(this);
}


antlrcpp::Any sharkbitParser::MutableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitMutable(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::MutableContext* sharkbitParser::mutable() {
  MutableContext *_localctx = _tracker.createInstance<MutableContext>(_ctx, getState());
  enterRule(_localctx, 70, sharkbitParser::RuleMutable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(331);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(324);
      match(sharkbitParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(325);
      match(sharkbitParser::ID);
      setState(326);
      match(sharkbitParser::LS);
      setState(327);
      match(sharkbitParser::INTNUMBER);
      setState(328);
      match(sharkbitParser::RS);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(329);
      match(sharkbitParser::POINTER_ADDRESS);
      setState(330);
      match(sharkbitParser::ID);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImmutableContext ------------------------------------------------------------------

sharkbitParser::ImmutableContext::ImmutableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::ImmutableContext::LR() {
  return getToken(sharkbitParser::LR, 0);
}

sharkbitParser::MathExpContext* sharkbitParser::ImmutableContext::mathExp() {
  return getRuleContext<sharkbitParser::MathExpContext>(0);
}

tree::TerminalNode* sharkbitParser::ImmutableContext::RR() {
  return getToken(sharkbitParser::RR, 0);
}

sharkbitParser::CallContext* sharkbitParser::ImmutableContext::call() {
  return getRuleContext<sharkbitParser::CallContext>(0);
}

sharkbitParser::ConstantContext* sharkbitParser::ImmutableContext::constant() {
  return getRuleContext<sharkbitParser::ConstantContext>(0);
}


size_t sharkbitParser::ImmutableContext::getRuleIndex() const {
  return sharkbitParser::RuleImmutable;
}

void sharkbitParser::ImmutableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImmutable(this);
}

void sharkbitParser::ImmutableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImmutable(this);
}


antlrcpp::Any sharkbitParser::ImmutableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitImmutable(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::ImmutableContext* sharkbitParser::immutable() {
  ImmutableContext *_localctx = _tracker.createInstance<ImmutableContext>(_ctx, getState());
  enterRule(_localctx, 72, sharkbitParser::RuleImmutable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(339);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sharkbitParser::LR: {
        enterOuterAlt(_localctx, 1);
        setState(333);
        match(sharkbitParser::LR);
        setState(334);
        mathExp();
        setState(335);
        match(sharkbitParser::RR);
        break;
      }

      case sharkbitParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(337);
        call();
        break;
      }

      case sharkbitParser::TRUE:
      case sharkbitParser::FALSE:
      case sharkbitParser::NULL:
      case sharkbitParser::STRING_CONST:
      case sharkbitParser::DOUBNUMBER:
      case sharkbitParser::INTNUMBER:
      case sharkbitParser::CHAR_CONST: {
        enterOuterAlt(_localctx, 3);
        setState(338);
        constant();
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

//----------------- CallContext ------------------------------------------------------------------

sharkbitParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::CallContext::ID() {
  return getToken(sharkbitParser::ID, 0);
}

tree::TerminalNode* sharkbitParser::CallContext::LR() {
  return getToken(sharkbitParser::LR, 0);
}

sharkbitParser::ArgsContext* sharkbitParser::CallContext::args() {
  return getRuleContext<sharkbitParser::ArgsContext>(0);
}

tree::TerminalNode* sharkbitParser::CallContext::RR() {
  return getToken(sharkbitParser::RR, 0);
}


size_t sharkbitParser::CallContext::getRuleIndex() const {
  return sharkbitParser::RuleCall;
}

void sharkbitParser::CallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall(this);
}

void sharkbitParser::CallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall(this);
}


antlrcpp::Any sharkbitParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::CallContext* sharkbitParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 74, sharkbitParser::RuleCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    match(sharkbitParser::ID);
    setState(342);
    match(sharkbitParser::LR);
    setState(343);
    args();
    setState(344);
    match(sharkbitParser::RR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

sharkbitParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::ArgListContext* sharkbitParser::ArgsContext::argList() {
  return getRuleContext<sharkbitParser::ArgListContext>(0);
}


size_t sharkbitParser::ArgsContext::getRuleIndex() const {
  return sharkbitParser::RuleArgs;
}

void sharkbitParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void sharkbitParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}


antlrcpp::Any sharkbitParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::ArgsContext* sharkbitParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 76, sharkbitParser::RuleArgs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(348);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sharkbitParser::TRUE:
      case sharkbitParser::FALSE:
      case sharkbitParser::LR:
      case sharkbitParser::POINTER_ADDRESS:
      case sharkbitParser::NULL:
      case sharkbitParser::NOT:
      case sharkbitParser::ID:
      case sharkbitParser::STRING_CONST:
      case sharkbitParser::DOUBNUMBER:
      case sharkbitParser::INTNUMBER:
      case sharkbitParser::CHAR_CONST: {
        enterOuterAlt(_localctx, 1);
        setState(346);
        argList(0);
        break;
      }

      case sharkbitParser::RR: {
        enterOuterAlt(_localctx, 2);

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

//----------------- ArgListContext ------------------------------------------------------------------

sharkbitParser::ArgListContext::ArgListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sharkbitParser::SimpleExpContext* sharkbitParser::ArgListContext::simpleExp() {
  return getRuleContext<sharkbitParser::SimpleExpContext>(0);
}

sharkbitParser::ArgListContext* sharkbitParser::ArgListContext::argList() {
  return getRuleContext<sharkbitParser::ArgListContext>(0);
}

tree::TerminalNode* sharkbitParser::ArgListContext::COMMA() {
  return getToken(sharkbitParser::COMMA, 0);
}


size_t sharkbitParser::ArgListContext::getRuleIndex() const {
  return sharkbitParser::RuleArgList;
}

void sharkbitParser::ArgListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgList(this);
}

void sharkbitParser::ArgListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgList(this);
}


antlrcpp::Any sharkbitParser::ArgListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitArgList(this);
  else
    return visitor->visitChildren(this);
}


sharkbitParser::ArgListContext* sharkbitParser::argList() {
   return argList(0);
}

sharkbitParser::ArgListContext* sharkbitParser::argList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  sharkbitParser::ArgListContext *_localctx = _tracker.createInstance<ArgListContext>(_ctx, parentState);
  sharkbitParser::ArgListContext *previousContext = _localctx;
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, sharkbitParser::RuleArgList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(351);
    simpleExp();
    _ctx->stop = _input->LT(-1);
    setState(358);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ArgListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleArgList);
        setState(353);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(354);
        match(sharkbitParser::COMMA);
        setState(355);
        simpleExp(); 
      }
      setState(360);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

sharkbitParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sharkbitParser::ConstantContext::NULL() {
  return getToken(sharkbitParser::NULL, 0);
}

tree::TerminalNode* sharkbitParser::ConstantContext::INTNUMBER() {
  return getToken(sharkbitParser::INTNUMBER, 0);
}

tree::TerminalNode* sharkbitParser::ConstantContext::CHAR_CONST() {
  return getToken(sharkbitParser::CHAR_CONST, 0);
}

tree::TerminalNode* sharkbitParser::ConstantContext::STRING_CONST() {
  return getToken(sharkbitParser::STRING_CONST, 0);
}

tree::TerminalNode* sharkbitParser::ConstantContext::TRUE() {
  return getToken(sharkbitParser::TRUE, 0);
}

tree::TerminalNode* sharkbitParser::ConstantContext::FALSE() {
  return getToken(sharkbitParser::FALSE, 0);
}

tree::TerminalNode* sharkbitParser::ConstantContext::DOUBNUMBER() {
  return getToken(sharkbitParser::DOUBNUMBER, 0);
}


size_t sharkbitParser::ConstantContext::getRuleIndex() const {
  return sharkbitParser::RuleConstant;
}

void sharkbitParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void sharkbitParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sharkbitListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


antlrcpp::Any sharkbitParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sharkbitVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

sharkbitParser::ConstantContext* sharkbitParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 80, sharkbitParser::RuleConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
    _la = _input->LA(1);
    if (!(((((_la - 22) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 22)) & ((1ULL << (sharkbitParser::TRUE - 22))
      | (1ULL << (sharkbitParser::FALSE - 22))
      | (1ULL << (sharkbitParser::NULL - 22))
      | (1ULL << (sharkbitParser::STRING_CONST - 22))
      | (1ULL << (sharkbitParser::DOUBNUMBER - 22))
      | (1ULL << (sharkbitParser::INTNUMBER - 22))
      | (1ULL << (sharkbitParser::CHAR_CONST - 22)))) != 0))) {
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

bool sharkbitParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return declListSempred(dynamic_cast<DeclListContext *>(context), predicateIndex);
    case 14: return parmListSempred(dynamic_cast<ParmListContext *>(context), predicateIndex);
    case 16: return parmIdListSempred(dynamic_cast<ParmIdListContext *>(context), predicateIndex);
    case 21: return stmtListSempred(dynamic_cast<StmtListContext *>(context), predicateIndex);
    case 28: return logicalExpSempred(dynamic_cast<LogicalExpContext *>(context), predicateIndex);
    case 39: return argListSempred(dynamic_cast<ArgListContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool sharkbitParser::declListSempred(DeclListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool sharkbitParser::parmListSempred(ParmListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool sharkbitParser::parmIdListSempred(ParmIdListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool sharkbitParser::stmtListSempred(StmtListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool sharkbitParser::logicalExpSempred(LogicalExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool sharkbitParser::argListSempred(ArgListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> sharkbitParser::_decisionToDFA;
atn::PredictionContextCache sharkbitParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN sharkbitParser::_atn;
std::vector<uint16_t> sharkbitParser::_serializedATN;

std::vector<std::string> sharkbitParser::_ruleNames = {
  "program", "declList", "decl", "varDecl", "varDeclInit", "varDeclId", 
  "coutDecl", "constSpec", "typeSpec", "list", "typeDec", "pointerDec", 
  "funDecl", "parms", "parmList", "parmTypeList", "parmIdList", "parmId", 
  "stmt", "expStmt", "compoundStmt", "stmtList", "selectStmt", "iterStmt", 
  "iterRange", "returnStmt", "breakStmt", "simpleExp", "logicalExp", "unaryRelExp", 
  "relExp", "compop", "mathExp", "mathOp", "factor", "mutable", "immutable", 
  "call", "args", "argList", "constant"
};

std::vector<std::string> sharkbitParser::_literalNames = {
  "", "'double'", "'int'", "'string'", "'break'", "'if'", "'else'", "'return'", 
  "'char'", "'const'", "'for'", "'void'", "'while'", "'list'", "'bool'", 
  "'ip'", "'address'", "'function'", "'file'", "'protocol'", "'pointer'", 
  "'and'", "'true'", "'false'", "'+'", "'-'", "'*'", "'/'", "'%'", "'='", 
  "'#'", "'?'", "'''", "'\"'", "'['", "']'", "'{'", "'}'", "'('", "')'", 
  "'^'", "'&'", "';'", "'decypher'", "'findAddresses'", "'getProcess'", 
  "'sendPacket'", "'null'", "'<'", "'>'", "'<='", "'>='", "'=='", "'!='", 
  "','", "'.'", "'not'", "'to'", "'by'", "'in'", "", "", "", "", "", "'port'"
};

std::vector<std::string> sharkbitParser::_symbolicNames = {
  "", "DOUBLE", "INT", "STRING", "BREAK", "IF", "ELSE", "RETURN", "CHAR", 
  "CONST", "FOR", "VOID", "WHILE", "LIST", "BOOL", "IP", "ADDRESS", "FUNCTION", 
  "FILE", "PROTOCOL", "POINTER", "AND", "TRUE", "FALSE", "ADD", "SUBSTRACTION", 
  "MULTIPLY", "DIVIDE", "MOD", "ASSIGN", "COMMENT", "COUT", "QUOTE", "DOUBLEQUOTE", 
  "LS", "RS", "LC", "RC", "LR", "RR", "POINTED_VALUE", "POINTER_ADDRESS", 
  "SEMICOLON", "DECYPHER", "FIND_ADD", "GET_PROC", "SEND_PACKET", "NULL", 
  "LESS", "GREATER", "LEQ", "GEQ", "EQ", "DIFF", "COMMA", "DOT", "NOT", 
  "TO", "BY", "IN", "ID", "STRING_CONST", "DOUBNUMBER", "INTNUMBER", "CHAR_CONST", 
  "PORT", "WS"
};

dfa::Vocabulary sharkbitParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> sharkbitParser::_tokenNames;

sharkbitParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x44, 0x16e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x5c, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x5f, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x64, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x70, 0xa, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x76, 0xa, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x7f, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x83, 0xa, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x91, 0xa, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x9d, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xa9, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xb1, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0xb4, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 
    0x12, 0xbf, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xc2, 0xb, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xc8, 0xa, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x5, 0x14, 0xd2, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x5, 0x15, 0xd8, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0xe1, 0xa, 0x17, 0xc, 
    0x17, 0xe, 0x17, 0xe4, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0xf4, 0xa, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x5, 0x19, 0x104, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x5, 0x1a, 0x110, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x118, 0xa, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x11f, 0xa, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 
    0x1e, 0x127, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x12a, 0xb, 0x1e, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x12f, 0xa, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x136, 0xa, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x5, 0x22, 0x13f, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x5, 0x24, 0x145, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x14e, 0xa, 0x25, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 
    0x26, 0x156, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x15f, 0xa, 0x28, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x167, 
    0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x16a, 0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x2, 0x8, 0x4, 0x1e, 0x22, 0x2c, 0x3a, 0x50, 0x2b, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
    0x50, 0x52, 0x2, 0x5, 0x4, 0x2, 0x32, 0x35, 0x37, 0x37, 0x3, 0x2, 0x1a, 
    0x1e, 0x5, 0x2, 0x18, 0x19, 0x31, 0x31, 0x3f, 0x42, 0x2, 0x174, 0x2, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x4, 0x56, 0x3, 0x2, 0x2, 0x2, 0x6, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x65, 0x3, 0x2, 0x2, 0x2, 0xa, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x75, 0x3, 0x2, 0x2, 0x2, 0xe, 0x7e, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x82, 0x3, 0x2, 0x2, 0x2, 0x12, 0x90, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x16, 0x97, 0x3, 0x2, 0x2, 0x2, 0x18, 0x9c, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x20, 0xb5, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x24, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0xf3, 0x3, 0x2, 0x2, 0x2, 0x30, 0x103, 0x3, 0x2, 0x2, 0x2, 0x32, 0x10f, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x117, 0x3, 0x2, 0x2, 0x2, 0x36, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x120, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x135, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x137, 0x3, 0x2, 0x2, 0x2, 0x42, 0x13e, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x140, 0x3, 0x2, 0x2, 0x2, 0x46, 0x144, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x14d, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x155, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x157, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x160, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x5, 0x4, 
    0x3, 0x2, 0x55, 0x3, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x8, 0x3, 0x1, 
    0x2, 0x57, 0x58, 0x5, 0x6, 0x4, 0x2, 0x58, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x59, 0x5a, 0xc, 0x4, 0x2, 0x2, 0x5a, 0x5c, 0x5, 0x6, 0x4, 0x2, 0x5b, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x64, 0x5, 0xe, 
    0x8, 0x2, 0x61, 0x64, 0x5, 0x8, 0x5, 0x2, 0x62, 0x64, 0x5, 0x1a, 0xe, 
    0x2, 0x63, 0x60, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x7, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x66, 0x5, 0x10, 0x9, 0x2, 0x66, 0x67, 0x5, 0x16, 0xc, 0x2, 0x67, 0x68, 
    0x5, 0xa, 0x6, 0x2, 0x68, 0x69, 0x7, 0x2c, 0x2, 0x2, 0x69, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x70, 0x5, 0xc, 0x7, 0x2, 0x6b, 0x6c, 0x5, 0xc, 
    0x7, 0x2, 0x6c, 0x6d, 0x7, 0x1f, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0x42, 0x22, 
    0x2, 0x6e, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x6f, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x70, 0xb, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0x76, 0x7, 0x3e, 0x2, 0x2, 0x72, 0x73, 0x7, 0x3e, 0x2, 0x2, 0x73, 0x74, 
    0x7, 0x24, 0x2, 0x2, 0x74, 0x76, 0x7, 0x25, 0x2, 0x2, 0x75, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x72, 0x3, 0x2, 0x2, 0x2, 0x76, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x78, 0x7, 0x21, 0x2, 0x2, 0x78, 0x79, 0x7, 0x3e, 0x2, 
    0x2, 0x79, 0x7f, 0x7, 0x2c, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x21, 0x2, 0x2, 
    0x7b, 0x7c, 0x5, 0x42, 0x22, 0x2, 0x7c, 0x7d, 0x7, 0x2c, 0x2, 0x2, 0x7d, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x77, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7a, 
    0x3, 0x2, 0x2, 0x2, 0x7f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x80, 0x83, 0x7, 
    0xb, 0x2, 0x2, 0x81, 0x83, 0x3, 0x2, 0x2, 0x2, 0x82, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x91, 0x7, 0x4, 0x2, 0x2, 0x85, 0x91, 0x7, 0x10, 0x2, 0x2, 
    0x86, 0x91, 0x7, 0x3, 0x2, 0x2, 0x87, 0x91, 0x7, 0x5, 0x2, 0x2, 0x88, 
    0x91, 0x7, 0x11, 0x2, 0x2, 0x89, 0x91, 0x7, 0x15, 0x2, 0x2, 0x8a, 0x91, 
    0x7, 0x12, 0x2, 0x2, 0x8b, 0x91, 0x7, 0x14, 0x2, 0x2, 0x8c, 0x91, 0x7, 
    0x43, 0x2, 0x2, 0x8d, 0x91, 0x7, 0xa, 0x2, 0x2, 0x8e, 0x91, 0x5, 0x14, 
    0xb, 0x2, 0x8f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x90, 0x84, 0x3, 0x2, 0x2, 
    0x2, 0x90, 0x85, 0x3, 0x2, 0x2, 0x2, 0x90, 0x86, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x87, 0x3, 0x2, 0x2, 0x2, 0x90, 0x88, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8b, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x13, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x7, 0xf, 0x2, 
    0x2, 0x93, 0x94, 0x7, 0x32, 0x2, 0x2, 0x94, 0x95, 0x5, 0x12, 0xa, 0x2, 
    0x95, 0x96, 0x7, 0x33, 0x2, 0x2, 0x96, 0x15, 0x3, 0x2, 0x2, 0x2, 0x97, 
    0x98, 0x5, 0x12, 0xa, 0x2, 0x98, 0x99, 0x5, 0x18, 0xd, 0x2, 0x99, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x9d, 0x7, 0x16, 0x2, 0x2, 0x9b, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9b, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0x19, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x13, 0x2, 
    0x2, 0x9f, 0xa0, 0x7, 0x3e, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x16, 0xc, 0x2, 
    0xa1, 0xa2, 0x7, 0x28, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x1c, 0xf, 0x2, 0xa3, 
    0xa4, 0x7, 0x29, 0x2, 0x2, 0xa4, 0xa5, 0x5, 0x26, 0x14, 0x2, 0xa5, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0xa9, 0x5, 0x1e, 0x10, 0x2, 0xa7, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x8, 0x10, 0x1, 
    0x2, 0xab, 0xac, 0x5, 0x20, 0x11, 0x2, 0xac, 0xb2, 0x3, 0x2, 0x2, 0x2, 
    0xad, 0xae, 0xc, 0x4, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x38, 0x2, 0x2, 0xaf, 
    0xb1, 0x5, 0x20, 0x11, 0x2, 0xb0, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb4, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb6, 0x5, 0x16, 0xc, 0x2, 0xb6, 0xb7, 0x5, 0x22, 0x12, 
    0x2, 0xb7, 0x21, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x8, 0x12, 0x1, 0x2, 
    0xb9, 0xba, 0x5, 0x24, 0x13, 0x2, 0xba, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xbc, 0xc, 0x4, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x38, 0x2, 0x2, 0xbd, 0xbf, 
    0x5, 0x24, 0x13, 0x2, 0xbe, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc2, 0x3, 
    0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0x23, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 
    0x2, 0xc3, 0xc8, 0x7, 0x3e, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x3e, 0x2, 0x2, 
    0xc5, 0xc6, 0x7, 0x24, 0x2, 0x2, 0xc6, 0xc8, 0x7, 0x25, 0x2, 0x2, 0xc7, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xc9, 0xd2, 0x5, 0x28, 0x15, 0x2, 0xca, 0xd2, 0x5, 
    0x2a, 0x16, 0x2, 0xcb, 0xd2, 0x5, 0x2e, 0x18, 0x2, 0xcc, 0xd2, 0x5, 
    0x30, 0x19, 0x2, 0xcd, 0xd2, 0x5, 0x34, 0x1b, 0x2, 0xce, 0xd2, 0x5, 
    0x36, 0x1c, 0x2, 0xcf, 0xd2, 0x5, 0x8, 0x5, 0x2, 0xd0, 0xd2, 0x5, 0xe, 
    0x8, 0x2, 0xd1, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xca, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcc, 0x3, 0x2, 0x2, 0x2, 
    0xd1, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x38, 0x1d, 0x2, 0xd4, 0xd5, 0x7, 
    0x2c, 0x2, 0x2, 0xd5, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 0x7, 0x2c, 
    0x2, 0x2, 0xd7, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0x29, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x26, 0x2, 0x2, 
    0xda, 0xdb, 0x5, 0x2c, 0x17, 0x2, 0xdb, 0xdc, 0x7, 0x27, 0x2, 0x2, 0xdc, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe2, 0x8, 0x17, 0x1, 0x2, 0xde, 0xdf, 
    0xc, 0x4, 0x2, 0x2, 0xdf, 0xe1, 0x5, 0x26, 0x14, 0x2, 0xe0, 0xde, 0x3, 
    0x2, 0x2, 0x2, 0xe1, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x7, 0x2, 0x2, 
    0xe6, 0xe7, 0x7, 0x28, 0x2, 0x2, 0xe7, 0xe8, 0x5, 0x38, 0x1d, 0x2, 0xe8, 
    0xe9, 0x7, 0x29, 0x2, 0x2, 0xe9, 0xea, 0x5, 0x26, 0x14, 0x2, 0xea, 0xf4, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x7, 0x2, 0x2, 0xec, 0xed, 0x7, 
    0x28, 0x2, 0x2, 0xed, 0xee, 0x5, 0x38, 0x1d, 0x2, 0xee, 0xef, 0x7, 0x29, 
    0x2, 0x2, 0xef, 0xf0, 0x5, 0x26, 0x14, 0x2, 0xf0, 0xf1, 0x7, 0x8, 0x2, 
    0x2, 0xf1, 0xf2, 0x5, 0x26, 0x14, 0x2, 0xf2, 0xf4, 0x3, 0x2, 0x2, 0x2, 
    0xf3, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xf4, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0xe, 0x2, 0x2, 0xf6, 0xf7, 
    0x7, 0x28, 0x2, 0x2, 0xf7, 0xf8, 0x5, 0x38, 0x1d, 0x2, 0xf8, 0xf9, 0x7, 
    0x29, 0x2, 0x2, 0xf9, 0xfa, 0x5, 0x26, 0x14, 0x2, 0xfa, 0x104, 0x3, 
    0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0xc, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x28, 
    0x2, 0x2, 0xfd, 0xfe, 0x7, 0x3e, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x3d, 0x2, 
    0x2, 0xff, 0x100, 0x5, 0x32, 0x1a, 0x2, 0x100, 0x101, 0x7, 0x29, 0x2, 
    0x2, 0x101, 0x102, 0x5, 0x26, 0x14, 0x2, 0x102, 0x104, 0x3, 0x2, 0x2, 
    0x2, 0x103, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x103, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0x31, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x5, 0x38, 0x1d, 0x2, 
    0x106, 0x107, 0x7, 0x3b, 0x2, 0x2, 0x107, 0x108, 0x5, 0x38, 0x1d, 0x2, 
    0x108, 0x110, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x38, 0x1d, 0x2, 
    0x10a, 0x10b, 0x7, 0x3b, 0x2, 0x2, 0x10b, 0x10c, 0x5, 0x38, 0x1d, 0x2, 
    0x10c, 0x10d, 0x7, 0x3c, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0x38, 0x1d, 0x2, 
    0x10e, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x10f, 0x109, 0x3, 0x2, 0x2, 0x2, 0x110, 0x33, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0x112, 0x7, 0x9, 0x2, 0x2, 0x112, 0x118, 0x7, 0x2c, 0x2, 0x2, 0x113, 
    0x114, 0x7, 0x9, 0x2, 0x2, 0x114, 0x115, 0x5, 0x38, 0x1d, 0x2, 0x115, 
    0x116, 0x7, 0x2c, 0x2, 0x2, 0x116, 0x118, 0x3, 0x2, 0x2, 0x2, 0x117, 
    0x111, 0x3, 0x2, 0x2, 0x2, 0x117, 0x113, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x6, 0x2, 0x2, 0x11a, 0x11b, 
    0x7, 0x2c, 0x2, 0x2, 0x11b, 0x37, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11f, 
    0x5, 0x42, 0x22, 0x2, 0x11d, 0x11f, 0x5, 0x3a, 0x1e, 0x2, 0x11e, 0x11c, 
    0x3, 0x2, 0x2, 0x2, 0x11e, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x120, 0x121, 0x8, 0x1e, 0x1, 0x2, 0x121, 0x122, 0x5, 
    0x3c, 0x1f, 0x2, 0x122, 0x128, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0xc, 
    0x4, 0x2, 0x2, 0x124, 0x125, 0x7, 0x17, 0x2, 0x2, 0x125, 0x127, 0x5, 
    0x3c, 0x1f, 0x2, 0x126, 0x123, 0x3, 0x2, 0x2, 0x2, 0x127, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 
    0x2, 0x2, 0x2, 0x129, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x128, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x12c, 0x7, 0x3a, 0x2, 0x2, 0x12c, 0x12f, 0x5, 0x3c, 
    0x1f, 0x2, 0x12d, 0x12f, 0x5, 0x3e, 0x20, 0x2, 0x12e, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x12e, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x130, 0x131, 0x5, 0x42, 0x22, 0x2, 0x131, 0x132, 0x5, 0x40, 0x21, 
    0x2, 0x132, 0x133, 0x5, 0x42, 0x22, 0x2, 0x133, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x134, 0x136, 0x5, 0x42, 0x22, 0x2, 0x135, 0x130, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x134, 0x3, 0x2, 0x2, 0x2, 0x136, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x137, 0x138, 0x9, 0x2, 0x2, 0x2, 0x138, 0x41, 0x3, 0x2, 0x2, 0x2, 0x139, 
    0x13a, 0x5, 0x46, 0x24, 0x2, 0x13a, 0x13b, 0x5, 0x44, 0x23, 0x2, 0x13b, 
    0x13c, 0x5, 0x42, 0x22, 0x2, 0x13c, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13d, 
    0x13f, 0x5, 0x46, 0x24, 0x2, 0x13e, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x13d, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x43, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 
    0x9, 0x3, 0x2, 0x2, 0x141, 0x45, 0x3, 0x2, 0x2, 0x2, 0x142, 0x145, 0x5, 
    0x4a, 0x26, 0x2, 0x143, 0x145, 0x5, 0x48, 0x25, 0x2, 0x144, 0x142, 0x3, 
    0x2, 0x2, 0x2, 0x144, 0x143, 0x3, 0x2, 0x2, 0x2, 0x145, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x146, 0x14e, 0x7, 0x3e, 0x2, 0x2, 0x147, 0x148, 0x7, 0x3e, 
    0x2, 0x2, 0x148, 0x149, 0x7, 0x24, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x41, 
    0x2, 0x2, 0x14a, 0x14e, 0x7, 0x25, 0x2, 0x2, 0x14b, 0x14c, 0x7, 0x2b, 
    0x2, 0x2, 0x14c, 0x14e, 0x7, 0x3e, 0x2, 0x2, 0x14d, 0x146, 0x3, 0x2, 
    0x2, 0x2, 0x14d, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14b, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x49, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x7, 0x28, 
    0x2, 0x2, 0x150, 0x151, 0x5, 0x42, 0x22, 0x2, 0x151, 0x152, 0x7, 0x29, 
    0x2, 0x2, 0x152, 0x156, 0x3, 0x2, 0x2, 0x2, 0x153, 0x156, 0x5, 0x4c, 
    0x27, 0x2, 0x154, 0x156, 0x5, 0x52, 0x2a, 0x2, 0x155, 0x14f, 0x3, 0x2, 
    0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x155, 0x154, 0x3, 0x2, 
    0x2, 0x2, 0x156, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x7, 0x3e, 
    0x2, 0x2, 0x158, 0x159, 0x7, 0x28, 0x2, 0x2, 0x159, 0x15a, 0x5, 0x4e, 
    0x28, 0x2, 0x15a, 0x15b, 0x7, 0x29, 0x2, 0x2, 0x15b, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x15f, 0x5, 0x50, 0x29, 0x2, 0x15d, 0x15f, 0x3, 0x2, 
    0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15d, 0x3, 0x2, 
    0x2, 0x2, 0x15f, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x8, 0x29, 
    0x1, 0x2, 0x161, 0x162, 0x5, 0x38, 0x1d, 0x2, 0x162, 0x168, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x164, 0xc, 0x4, 0x2, 0x2, 0x164, 0x165, 0x7, 0x38, 
    0x2, 0x2, 0x165, 0x167, 0x5, 0x38, 0x1d, 0x2, 0x166, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x167, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 
    0x2, 0x2, 0x168, 0x169, 0x3, 0x2, 0x2, 0x2, 0x169, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x16a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x9, 0x4, 0x2, 
    0x2, 0x16c, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x5d, 0x63, 0x6f, 0x75, 
    0x7e, 0x82, 0x90, 0x9c, 0xa8, 0xb2, 0xc0, 0xc7, 0xd1, 0xd7, 0xe2, 0xf3, 
    0x103, 0x10f, 0x117, 0x11e, 0x128, 0x12e, 0x135, 0x13e, 0x144, 0x14d, 
    0x155, 0x15e, 0x168, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

sharkbitParser::Initializer sharkbitParser::_init;
