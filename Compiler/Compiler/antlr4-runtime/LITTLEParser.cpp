
// Generated from LITTLE.g4 by ANTLR 4.8


#include "LITTLEVisitor.h"

#include "LITTLEParser.h"


using namespace antlrcpp;
using namespace antlr4;

LITTLEParser::LITTLEParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

LITTLEParser::~LITTLEParser() {
  delete _interpreter;
}

std::string LITTLEParser::getGrammarFileName() const {
  return "LITTLE.g4";
}

const std::vector<std::string>& LITTLEParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& LITTLEParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

LITTLEParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::IdContext* LITTLEParser::ProgramContext::id() {
  return getRuleContext<LITTLEParser::IdContext>(0);
}

LITTLEParser::Pgm_bodyContext* LITTLEParser::ProgramContext::pgm_body() {
  return getRuleContext<LITTLEParser::Pgm_bodyContext>(0);
}


size_t LITTLEParser::ProgramContext::getRuleIndex() const {
  return LITTLEParser::RuleProgram;
}


antlrcpp::Any LITTLEParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::ProgramContext* LITTLEParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, LITTLEParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(LITTLEParser::T__0);
    setState(83);
    id();
    setState(84);
    match(LITTLEParser::T__1);
    setState(85);
    pgm_body();
    setState(86);
    match(LITTLEParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdContext ------------------------------------------------------------------

LITTLEParser::IdContext::IdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LITTLEParser::IdContext::IDENTIFIER() {
  return getToken(LITTLEParser::IDENTIFIER, 0);
}


size_t LITTLEParser::IdContext::getRuleIndex() const {
  return LITTLEParser::RuleId;
}


antlrcpp::Any LITTLEParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::IdContext* LITTLEParser::id() {
  IdContext *_localctx = _tracker.createInstance<IdContext>(_ctx, getState());
  enterRule(_localctx, 2, LITTLEParser::RuleId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(LITTLEParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pgm_bodyContext ------------------------------------------------------------------

LITTLEParser::Pgm_bodyContext::Pgm_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::DeclContext* LITTLEParser::Pgm_bodyContext::decl() {
  return getRuleContext<LITTLEParser::DeclContext>(0);
}

LITTLEParser::Func_declarationsContext* LITTLEParser::Pgm_bodyContext::func_declarations() {
  return getRuleContext<LITTLEParser::Func_declarationsContext>(0);
}


size_t LITTLEParser::Pgm_bodyContext::getRuleIndex() const {
  return LITTLEParser::RulePgm_body;
}


antlrcpp::Any LITTLEParser::Pgm_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitPgm_body(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Pgm_bodyContext* LITTLEParser::pgm_body() {
  Pgm_bodyContext *_localctx = _tracker.createInstance<Pgm_bodyContext>(_ctx, getState());
  enterRule(_localctx, 4, LITTLEParser::RulePgm_body);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    decl();
    setState(91);
    func_declarations();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

LITTLEParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::String_declContext* LITTLEParser::DeclContext::string_decl() {
  return getRuleContext<LITTLEParser::String_declContext>(0);
}

LITTLEParser::DeclContext* LITTLEParser::DeclContext::decl() {
  return getRuleContext<LITTLEParser::DeclContext>(0);
}

LITTLEParser::Var_declContext* LITTLEParser::DeclContext::var_decl() {
  return getRuleContext<LITTLEParser::Var_declContext>(0);
}


size_t LITTLEParser::DeclContext::getRuleIndex() const {
  return LITTLEParser::RuleDecl;
}


antlrcpp::Any LITTLEParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::DeclContext* LITTLEParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 6, LITTLEParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LITTLEParser::T__3: {
        enterOuterAlt(_localctx, 1);
        setState(93);
        string_decl();
        setState(94);
        decl();
        break;
      }

      case LITTLEParser::T__5:
      case LITTLEParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(96);
        var_decl();
        setState(97);
        decl();
        break;
      }

      case LITTLEParser::T__2:
      case LITTLEParser::T__9:
      case LITTLEParser::T__10:
      case LITTLEParser::T__13:
      case LITTLEParser::T__14:
      case LITTLEParser::T__19:
      case LITTLEParser::T__20:
      case LITTLEParser::T__21:
      case LITTLEParser::T__28:
      case LITTLEParser::T__29:
      case LITTLEParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 3);

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

//----------------- String_declContext ------------------------------------------------------------------

LITTLEParser::String_declContext::String_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::IdContext* LITTLEParser::String_declContext::id() {
  return getRuleContext<LITTLEParser::IdContext>(0);
}

LITTLEParser::StrContext* LITTLEParser::String_declContext::str() {
  return getRuleContext<LITTLEParser::StrContext>(0);
}


size_t LITTLEParser::String_declContext::getRuleIndex() const {
  return LITTLEParser::RuleString_decl;
}


antlrcpp::Any LITTLEParser::String_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitString_decl(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::String_declContext* LITTLEParser::string_decl() {
  String_declContext *_localctx = _tracker.createInstance<String_declContext>(_ctx, getState());
  enterRule(_localctx, 8, LITTLEParser::RuleString_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(LITTLEParser::T__3);
    setState(103);
    id();
    setState(104);
    match(LITTLEParser::T__4);
    setState(105);
    str();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StrContext ------------------------------------------------------------------

LITTLEParser::StrContext::StrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LITTLEParser::StrContext::STRINGLITERAL() {
  return getToken(LITTLEParser::STRINGLITERAL, 0);
}


size_t LITTLEParser::StrContext::getRuleIndex() const {
  return LITTLEParser::RuleStr;
}


antlrcpp::Any LITTLEParser::StrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitStr(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::StrContext* LITTLEParser::str() {
  StrContext *_localctx = _tracker.createInstance<StrContext>(_ctx, getState());
  enterRule(_localctx, 10, LITTLEParser::RuleStr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(LITTLEParser::STRINGLITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declContext ------------------------------------------------------------------

LITTLEParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Var_typeContext* LITTLEParser::Var_declContext::var_type() {
  return getRuleContext<LITTLEParser::Var_typeContext>(0);
}

LITTLEParser::Id_listContext* LITTLEParser::Var_declContext::id_list() {
  return getRuleContext<LITTLEParser::Id_listContext>(0);
}


size_t LITTLEParser::Var_declContext::getRuleIndex() const {
  return LITTLEParser::RuleVar_decl;
}


antlrcpp::Any LITTLEParser::Var_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitVar_decl(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Var_declContext* LITTLEParser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 12, LITTLEParser::RuleVar_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    var_type();
    setState(110);
    id_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_typeContext ------------------------------------------------------------------

LITTLEParser::Var_typeContext::Var_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LITTLEParser::Var_typeContext::getRuleIndex() const {
  return LITTLEParser::RuleVar_type;
}


antlrcpp::Any LITTLEParser::Var_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitVar_type(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Var_typeContext* LITTLEParser::var_type() {
  Var_typeContext *_localctx = _tracker.createInstance<Var_typeContext>(_ctx, getState());
  enterRule(_localctx, 14, LITTLEParser::RuleVar_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    _la = _input->LA(1);
    if (!(_la == LITTLEParser::T__5

    || _la == LITTLEParser::T__6)) {
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

//----------------- Any_typeContext ------------------------------------------------------------------

LITTLEParser::Any_typeContext::Any_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Var_typeContext* LITTLEParser::Any_typeContext::var_type() {
  return getRuleContext<LITTLEParser::Var_typeContext>(0);
}


size_t LITTLEParser::Any_typeContext::getRuleIndex() const {
  return LITTLEParser::RuleAny_type;
}


antlrcpp::Any LITTLEParser::Any_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitAny_type(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Any_typeContext* LITTLEParser::any_type() {
  Any_typeContext *_localctx = _tracker.createInstance<Any_typeContext>(_ctx, getState());
  enterRule(_localctx, 16, LITTLEParser::RuleAny_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(116);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LITTLEParser::T__5:
      case LITTLEParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(114);
        var_type();
        break;
      }

      case LITTLEParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(115);
        match(LITTLEParser::T__7);
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

//----------------- Id_listContext ------------------------------------------------------------------

LITTLEParser::Id_listContext::Id_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::IdContext* LITTLEParser::Id_listContext::id() {
  return getRuleContext<LITTLEParser::IdContext>(0);
}

LITTLEParser::Id_tailContext* LITTLEParser::Id_listContext::id_tail() {
  return getRuleContext<LITTLEParser::Id_tailContext>(0);
}


size_t LITTLEParser::Id_listContext::getRuleIndex() const {
  return LITTLEParser::RuleId_list;
}


antlrcpp::Any LITTLEParser::Id_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitId_list(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Id_listContext* LITTLEParser::id_list() {
  Id_listContext *_localctx = _tracker.createInstance<Id_listContext>(_ctx, getState());
  enterRule(_localctx, 18, LITTLEParser::RuleId_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    id();
    setState(119);
    id_tail();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Id_tailContext ------------------------------------------------------------------

LITTLEParser::Id_tailContext::Id_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::IdContext* LITTLEParser::Id_tailContext::id() {
  return getRuleContext<LITTLEParser::IdContext>(0);
}

LITTLEParser::Id_tailContext* LITTLEParser::Id_tailContext::id_tail() {
  return getRuleContext<LITTLEParser::Id_tailContext>(0);
}


size_t LITTLEParser::Id_tailContext::getRuleIndex() const {
  return LITTLEParser::RuleId_tail;
}


antlrcpp::Any LITTLEParser::Id_tailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitId_tail(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Id_tailContext* LITTLEParser::id_tail() {
  Id_tailContext *_localctx = _tracker.createInstance<Id_tailContext>(_ctx, getState());
  enterRule(_localctx, 20, LITTLEParser::RuleId_tail);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LITTLEParser::T__8: {
        enterOuterAlt(_localctx, 1);
        setState(121);
        match(LITTLEParser::T__8);
        setState(122);
        id();
        setState(123);
        id_tail();
        break;
      }

      case LITTLEParser::T__2:
      case LITTLEParser::T__3:
      case LITTLEParser::T__5:
      case LITTLEParser::T__6:
      case LITTLEParser::T__9:
      case LITTLEParser::T__10:
      case LITTLEParser::T__12:
      case LITTLEParser::T__13:
      case LITTLEParser::T__14:
      case LITTLEParser::T__19:
      case LITTLEParser::T__20:
      case LITTLEParser::T__21:
      case LITTLEParser::T__28:
      case LITTLEParser::T__29:
      case LITTLEParser::IDENTIFIER: {
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

//----------------- Param_decl_listContext ------------------------------------------------------------------

LITTLEParser::Param_decl_listContext::Param_decl_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Param_declContext* LITTLEParser::Param_decl_listContext::param_decl() {
  return getRuleContext<LITTLEParser::Param_declContext>(0);
}

LITTLEParser::Param_decl_tailContext* LITTLEParser::Param_decl_listContext::param_decl_tail() {
  return getRuleContext<LITTLEParser::Param_decl_tailContext>(0);
}


size_t LITTLEParser::Param_decl_listContext::getRuleIndex() const {
  return LITTLEParser::RuleParam_decl_list;
}


antlrcpp::Any LITTLEParser::Param_decl_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitParam_decl_list(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Param_decl_listContext* LITTLEParser::param_decl_list() {
  Param_decl_listContext *_localctx = _tracker.createInstance<Param_decl_listContext>(_ctx, getState());
  enterRule(_localctx, 22, LITTLEParser::RuleParam_decl_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(132);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LITTLEParser::T__5:
      case LITTLEParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(128);
        param_decl();
        setState(129);
        param_decl_tail();
        break;
      }

      case LITTLEParser::T__1: {
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

//----------------- Param_declContext ------------------------------------------------------------------

LITTLEParser::Param_declContext::Param_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Var_typeContext* LITTLEParser::Param_declContext::var_type() {
  return getRuleContext<LITTLEParser::Var_typeContext>(0);
}

LITTLEParser::IdContext* LITTLEParser::Param_declContext::id() {
  return getRuleContext<LITTLEParser::IdContext>(0);
}


size_t LITTLEParser::Param_declContext::getRuleIndex() const {
  return LITTLEParser::RuleParam_decl;
}


antlrcpp::Any LITTLEParser::Param_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitParam_decl(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Param_declContext* LITTLEParser::param_decl() {
  Param_declContext *_localctx = _tracker.createInstance<Param_declContext>(_ctx, getState());
  enterRule(_localctx, 24, LITTLEParser::RuleParam_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    var_type();
    setState(135);
    id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_decl_tailContext ------------------------------------------------------------------

LITTLEParser::Param_decl_tailContext::Param_decl_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Param_declContext* LITTLEParser::Param_decl_tailContext::param_decl() {
  return getRuleContext<LITTLEParser::Param_declContext>(0);
}

LITTLEParser::Param_decl_tailContext* LITTLEParser::Param_decl_tailContext::param_decl_tail() {
  return getRuleContext<LITTLEParser::Param_decl_tailContext>(0);
}


size_t LITTLEParser::Param_decl_tailContext::getRuleIndex() const {
  return LITTLEParser::RuleParam_decl_tail;
}


antlrcpp::Any LITTLEParser::Param_decl_tailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitParam_decl_tail(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Param_decl_tailContext* LITTLEParser::param_decl_tail() {
  Param_decl_tailContext *_localctx = _tracker.createInstance<Param_decl_tailContext>(_ctx, getState());
  enterRule(_localctx, 26, LITTLEParser::RuleParam_decl_tail);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(142);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LITTLEParser::T__8: {
        enterOuterAlt(_localctx, 1);
        setState(137);
        match(LITTLEParser::T__8);
        setState(138);
        param_decl();
        setState(139);
        param_decl_tail();
        break;
      }

      case LITTLEParser::T__1: {
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

//----------------- Func_declarationsContext ------------------------------------------------------------------

LITTLEParser::Func_declarationsContext::Func_declarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Func_declContext* LITTLEParser::Func_declarationsContext::func_decl() {
  return getRuleContext<LITTLEParser::Func_declContext>(0);
}

LITTLEParser::Func_declarationsContext* LITTLEParser::Func_declarationsContext::func_declarations() {
  return getRuleContext<LITTLEParser::Func_declarationsContext>(0);
}


size_t LITTLEParser::Func_declarationsContext::getRuleIndex() const {
  return LITTLEParser::RuleFunc_declarations;
}


antlrcpp::Any LITTLEParser::Func_declarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitFunc_declarations(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Func_declarationsContext* LITTLEParser::func_declarations() {
  Func_declarationsContext *_localctx = _tracker.createInstance<Func_declarationsContext>(_ctx, getState());
  enterRule(_localctx, 28, LITTLEParser::RuleFunc_declarations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(148);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LITTLEParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(144);
        func_decl();
        setState(145);
        func_declarations();
        break;
      }

      case LITTLEParser::T__2: {
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

//----------------- Func_declContext ------------------------------------------------------------------

LITTLEParser::Func_declContext::Func_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Any_typeContext* LITTLEParser::Func_declContext::any_type() {
  return getRuleContext<LITTLEParser::Any_typeContext>(0);
}

LITTLEParser::IdContext* LITTLEParser::Func_declContext::id() {
  return getRuleContext<LITTLEParser::IdContext>(0);
}

LITTLEParser::Func_bodyContext* LITTLEParser::Func_declContext::func_body() {
  return getRuleContext<LITTLEParser::Func_bodyContext>(0);
}

LITTLEParser::Param_decl_listContext* LITTLEParser::Func_declContext::param_decl_list() {
  return getRuleContext<LITTLEParser::Param_decl_listContext>(0);
}


size_t LITTLEParser::Func_declContext::getRuleIndex() const {
  return LITTLEParser::RuleFunc_decl;
}


antlrcpp::Any LITTLEParser::Func_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitFunc_decl(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Func_declContext* LITTLEParser::func_decl() {
  Func_declContext *_localctx = _tracker.createInstance<Func_declContext>(_ctx, getState());
  enterRule(_localctx, 30, LITTLEParser::RuleFunc_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(LITTLEParser::T__9);
    setState(151);
    any_type();
    setState(152);
    id();

    setState(153);
    param_decl_list();
    setState(154);
    match(LITTLEParser::T__1);
    setState(155);
    func_body();
    setState(156);
    match(LITTLEParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_bodyContext ------------------------------------------------------------------

LITTLEParser::Func_bodyContext::Func_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::DeclContext* LITTLEParser::Func_bodyContext::decl() {
  return getRuleContext<LITTLEParser::DeclContext>(0);
}

LITTLEParser::Stmt_listContext* LITTLEParser::Func_bodyContext::stmt_list() {
  return getRuleContext<LITTLEParser::Stmt_listContext>(0);
}


size_t LITTLEParser::Func_bodyContext::getRuleIndex() const {
  return LITTLEParser::RuleFunc_body;
}


antlrcpp::Any LITTLEParser::Func_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitFunc_body(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Func_bodyContext* LITTLEParser::func_body() {
  Func_bodyContext *_localctx = _tracker.createInstance<Func_bodyContext>(_ctx, getState());
  enterRule(_localctx, 32, LITTLEParser::RuleFunc_body);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    decl();
    setState(159);
    stmt_list();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stmt_listContext ------------------------------------------------------------------

LITTLEParser::Stmt_listContext::Stmt_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::StmtContext* LITTLEParser::Stmt_listContext::stmt() {
  return getRuleContext<LITTLEParser::StmtContext>(0);
}

LITTLEParser::Stmt_listContext* LITTLEParser::Stmt_listContext::stmt_list() {
  return getRuleContext<LITTLEParser::Stmt_listContext>(0);
}


size_t LITTLEParser::Stmt_listContext::getRuleIndex() const {
  return LITTLEParser::RuleStmt_list;
}


antlrcpp::Any LITTLEParser::Stmt_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitStmt_list(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Stmt_listContext* LITTLEParser::stmt_list() {
  Stmt_listContext *_localctx = _tracker.createInstance<Stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 34, LITTLEParser::RuleStmt_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(165);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LITTLEParser::T__10:
      case LITTLEParser::T__13:
      case LITTLEParser::T__14:
      case LITTLEParser::T__19:
      case LITTLEParser::T__28:
      case LITTLEParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(161);
        stmt();
        setState(162);
        stmt_list();
        break;
      }

      case LITTLEParser::T__2:
      case LITTLEParser::T__20:
      case LITTLEParser::T__21:
      case LITTLEParser::T__29: {
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

//----------------- StmtContext ------------------------------------------------------------------

LITTLEParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Base_stmtContext* LITTLEParser::StmtContext::base_stmt() {
  return getRuleContext<LITTLEParser::Base_stmtContext>(0);
}

LITTLEParser::If_stmtContext* LITTLEParser::StmtContext::if_stmt() {
  return getRuleContext<LITTLEParser::If_stmtContext>(0);
}

LITTLEParser::While_stmtContext* LITTLEParser::StmtContext::while_stmt() {
  return getRuleContext<LITTLEParser::While_stmtContext>(0);
}


size_t LITTLEParser::StmtContext::getRuleIndex() const {
  return LITTLEParser::RuleStmt;
}


antlrcpp::Any LITTLEParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::StmtContext* LITTLEParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 36, LITTLEParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(170);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LITTLEParser::T__10:
      case LITTLEParser::T__13:
      case LITTLEParser::T__14:
      case LITTLEParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(167);
        base_stmt();
        break;
      }

      case LITTLEParser::T__19: {
        enterOuterAlt(_localctx, 2);
        setState(168);
        if_stmt();
        break;
      }

      case LITTLEParser::T__28: {
        enterOuterAlt(_localctx, 3);
        setState(169);
        while_stmt();
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

//----------------- Base_stmtContext ------------------------------------------------------------------

LITTLEParser::Base_stmtContext::Base_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Assign_stmtContext* LITTLEParser::Base_stmtContext::assign_stmt() {
  return getRuleContext<LITTLEParser::Assign_stmtContext>(0);
}

LITTLEParser::Read_stmtContext* LITTLEParser::Base_stmtContext::read_stmt() {
  return getRuleContext<LITTLEParser::Read_stmtContext>(0);
}

LITTLEParser::Write_stmtContext* LITTLEParser::Base_stmtContext::write_stmt() {
  return getRuleContext<LITTLEParser::Write_stmtContext>(0);
}

LITTLEParser::Return_stmtContext* LITTLEParser::Base_stmtContext::return_stmt() {
  return getRuleContext<LITTLEParser::Return_stmtContext>(0);
}


size_t LITTLEParser::Base_stmtContext::getRuleIndex() const {
  return LITTLEParser::RuleBase_stmt;
}


antlrcpp::Any LITTLEParser::Base_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitBase_stmt(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Base_stmtContext* LITTLEParser::base_stmt() {
  Base_stmtContext *_localctx = _tracker.createInstance<Base_stmtContext>(_ctx, getState());
  enterRule(_localctx, 38, LITTLEParser::RuleBase_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LITTLEParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(172);
        assign_stmt();
        break;
      }

      case LITTLEParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(173);
        read_stmt();
        break;
      }

      case LITTLEParser::T__13: {
        enterOuterAlt(_localctx, 3);
        setState(174);
        write_stmt();
        break;
      }

      case LITTLEParser::T__14: {
        enterOuterAlt(_localctx, 4);
        setState(175);
        return_stmt();
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

//----------------- Assign_stmtContext ------------------------------------------------------------------

LITTLEParser::Assign_stmtContext::Assign_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Assign_exprContext* LITTLEParser::Assign_stmtContext::assign_expr() {
  return getRuleContext<LITTLEParser::Assign_exprContext>(0);
}


size_t LITTLEParser::Assign_stmtContext::getRuleIndex() const {
  return LITTLEParser::RuleAssign_stmt;
}


antlrcpp::Any LITTLEParser::Assign_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitAssign_stmt(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Assign_stmtContext* LITTLEParser::assign_stmt() {
  Assign_stmtContext *_localctx = _tracker.createInstance<Assign_stmtContext>(_ctx, getState());
  enterRule(_localctx, 40, LITTLEParser::RuleAssign_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    assign_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_exprContext ------------------------------------------------------------------

LITTLEParser::Assign_exprContext::Assign_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::IdContext* LITTLEParser::Assign_exprContext::id() {
  return getRuleContext<LITTLEParser::IdContext>(0);
}

LITTLEParser::ExprContext* LITTLEParser::Assign_exprContext::expr() {
  return getRuleContext<LITTLEParser::ExprContext>(0);
}


size_t LITTLEParser::Assign_exprContext::getRuleIndex() const {
  return LITTLEParser::RuleAssign_expr;
}


antlrcpp::Any LITTLEParser::Assign_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitAssign_expr(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Assign_exprContext* LITTLEParser::assign_expr() {
  Assign_exprContext *_localctx = _tracker.createInstance<Assign_exprContext>(_ctx, getState());
  enterRule(_localctx, 42, LITTLEParser::RuleAssign_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    id();
    setState(181);
    match(LITTLEParser::T__4);
    setState(182);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Read_stmtContext ------------------------------------------------------------------

LITTLEParser::Read_stmtContext::Read_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Id_listContext* LITTLEParser::Read_stmtContext::id_list() {
  return getRuleContext<LITTLEParser::Id_listContext>(0);
}


size_t LITTLEParser::Read_stmtContext::getRuleIndex() const {
  return LITTLEParser::RuleRead_stmt;
}


antlrcpp::Any LITTLEParser::Read_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitRead_stmt(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Read_stmtContext* LITTLEParser::read_stmt() {
  Read_stmtContext *_localctx = _tracker.createInstance<Read_stmtContext>(_ctx, getState());
  enterRule(_localctx, 44, LITTLEParser::RuleRead_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(LITTLEParser::T__10);
    setState(185);
    match(LITTLEParser::T__11);
    setState(186);
    id_list();
    setState(187);
    match(LITTLEParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Write_stmtContext ------------------------------------------------------------------

LITTLEParser::Write_stmtContext::Write_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Id_listContext* LITTLEParser::Write_stmtContext::id_list() {
  return getRuleContext<LITTLEParser::Id_listContext>(0);
}


size_t LITTLEParser::Write_stmtContext::getRuleIndex() const {
  return LITTLEParser::RuleWrite_stmt;
}


antlrcpp::Any LITTLEParser::Write_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitWrite_stmt(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Write_stmtContext* LITTLEParser::write_stmt() {
  Write_stmtContext *_localctx = _tracker.createInstance<Write_stmtContext>(_ctx, getState());
  enterRule(_localctx, 46, LITTLEParser::RuleWrite_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(LITTLEParser::T__13);
    setState(190);
    match(LITTLEParser::T__11);
    setState(191);
    id_list();
    setState(192);
    match(LITTLEParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

LITTLEParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::ExprContext* LITTLEParser::Return_stmtContext::expr() {
  return getRuleContext<LITTLEParser::ExprContext>(0);
}


size_t LITTLEParser::Return_stmtContext::getRuleIndex() const {
  return LITTLEParser::RuleReturn_stmt;
}


antlrcpp::Any LITTLEParser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Return_stmtContext* LITTLEParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 48, LITTLEParser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(LITTLEParser::T__14);
    setState(195);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

LITTLEParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Expr_prefixContext* LITTLEParser::ExprContext::expr_prefix() {
  return getRuleContext<LITTLEParser::Expr_prefixContext>(0);
}

LITTLEParser::FactorContext* LITTLEParser::ExprContext::factor() {
  return getRuleContext<LITTLEParser::FactorContext>(0);
}


size_t LITTLEParser::ExprContext::getRuleIndex() const {
  return LITTLEParser::RuleExpr;
}


antlrcpp::Any LITTLEParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::ExprContext* LITTLEParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 50, LITTLEParser::RuleExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    expr_prefix(0);
    setState(198);
    factor();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_prefixContext ------------------------------------------------------------------

LITTLEParser::Expr_prefixContext::Expr_prefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Expr_prefixContext* LITTLEParser::Expr_prefixContext::expr_prefix() {
  return getRuleContext<LITTLEParser::Expr_prefixContext>(0);
}

LITTLEParser::FactorContext* LITTLEParser::Expr_prefixContext::factor() {
  return getRuleContext<LITTLEParser::FactorContext>(0);
}

LITTLEParser::AddopContext* LITTLEParser::Expr_prefixContext::addop() {
  return getRuleContext<LITTLEParser::AddopContext>(0);
}


size_t LITTLEParser::Expr_prefixContext::getRuleIndex() const {
  return LITTLEParser::RuleExpr_prefix;
}


antlrcpp::Any LITTLEParser::Expr_prefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitExpr_prefix(this);
  else
    return visitor->visitChildren(this);
}


LITTLEParser::Expr_prefixContext* LITTLEParser::expr_prefix() {
   return expr_prefix(0);
}

LITTLEParser::Expr_prefixContext* LITTLEParser::expr_prefix(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LITTLEParser::Expr_prefixContext *_localctx = _tracker.createInstance<Expr_prefixContext>(_ctx, parentState);
  LITTLEParser::Expr_prefixContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, LITTLEParser::RuleExpr_prefix, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _ctx->stop = _input->LT(-1);
    setState(207);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Expr_prefixContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpr_prefix);
        setState(201);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(202);
        factor();
        setState(203);
        addop(); 
      }
      setState(209);
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

//----------------- FactorContext ------------------------------------------------------------------

LITTLEParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Factor_prefixContext* LITTLEParser::FactorContext::factor_prefix() {
  return getRuleContext<LITTLEParser::Factor_prefixContext>(0);
}

LITTLEParser::Postfix_exprContext* LITTLEParser::FactorContext::postfix_expr() {
  return getRuleContext<LITTLEParser::Postfix_exprContext>(0);
}


size_t LITTLEParser::FactorContext::getRuleIndex() const {
  return LITTLEParser::RuleFactor;
}


antlrcpp::Any LITTLEParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::FactorContext* LITTLEParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 54, LITTLEParser::RuleFactor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    factor_prefix(0);
    setState(211);
    postfix_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Factor_prefixContext ------------------------------------------------------------------

LITTLEParser::Factor_prefixContext::Factor_prefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::Factor_prefixContext* LITTLEParser::Factor_prefixContext::factor_prefix() {
  return getRuleContext<LITTLEParser::Factor_prefixContext>(0);
}

LITTLEParser::Postfix_exprContext* LITTLEParser::Factor_prefixContext::postfix_expr() {
  return getRuleContext<LITTLEParser::Postfix_exprContext>(0);
}

LITTLEParser::MulopContext* LITTLEParser::Factor_prefixContext::mulop() {
  return getRuleContext<LITTLEParser::MulopContext>(0);
}


size_t LITTLEParser::Factor_prefixContext::getRuleIndex() const {
  return LITTLEParser::RuleFactor_prefix;
}


antlrcpp::Any LITTLEParser::Factor_prefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitFactor_prefix(this);
  else
    return visitor->visitChildren(this);
}


LITTLEParser::Factor_prefixContext* LITTLEParser::factor_prefix() {
   return factor_prefix(0);
}

LITTLEParser::Factor_prefixContext* LITTLEParser::factor_prefix(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LITTLEParser::Factor_prefixContext *_localctx = _tracker.createInstance<Factor_prefixContext>(_ctx, parentState);
  LITTLEParser::Factor_prefixContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, LITTLEParser::RuleFactor_prefix, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _ctx->stop = _input->LT(-1);
    setState(220);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Factor_prefixContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleFactor_prefix);
        setState(214);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(215);
        postfix_expr();
        setState(216);
        mulop(); 
      }
      setState(222);
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

//----------------- Postfix_exprContext ------------------------------------------------------------------

LITTLEParser::Postfix_exprContext::Postfix_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::PrimaryContext* LITTLEParser::Postfix_exprContext::primary() {
  return getRuleContext<LITTLEParser::PrimaryContext>(0);
}

LITTLEParser::Call_exprContext* LITTLEParser::Postfix_exprContext::call_expr() {
  return getRuleContext<LITTLEParser::Call_exprContext>(0);
}


size_t LITTLEParser::Postfix_exprContext::getRuleIndex() const {
  return LITTLEParser::RulePostfix_expr;
}


antlrcpp::Any LITTLEParser::Postfix_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitPostfix_expr(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Postfix_exprContext* LITTLEParser::postfix_expr() {
  Postfix_exprContext *_localctx = _tracker.createInstance<Postfix_exprContext>(_ctx, getState());
  enterRule(_localctx, 58, LITTLEParser::RulePostfix_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(225);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(223);
      primary();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(224);
      call_expr();
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

//----------------- Call_exprContext ------------------------------------------------------------------

LITTLEParser::Call_exprContext::Call_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::IdContext* LITTLEParser::Call_exprContext::id() {
  return getRuleContext<LITTLEParser::IdContext>(0);
}

LITTLEParser::Expr_listContext* LITTLEParser::Call_exprContext::expr_list() {
  return getRuleContext<LITTLEParser::Expr_listContext>(0);
}


size_t LITTLEParser::Call_exprContext::getRuleIndex() const {
  return LITTLEParser::RuleCall_expr;
}


antlrcpp::Any LITTLEParser::Call_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitCall_expr(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Call_exprContext* LITTLEParser::call_expr() {
  Call_exprContext *_localctx = _tracker.createInstance<Call_exprContext>(_ctx, getState());
  enterRule(_localctx, 60, LITTLEParser::RuleCall_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    id();
    setState(228);
    match(LITTLEParser::T__11);
    setState(229);
    expr_list();
    setState(230);
    match(LITTLEParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_listContext ------------------------------------------------------------------

LITTLEParser::Expr_listContext::Expr_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::ExprContext* LITTLEParser::Expr_listContext::expr() {
  return getRuleContext<LITTLEParser::ExprContext>(0);
}

LITTLEParser::Expr_list_tailContext* LITTLEParser::Expr_listContext::expr_list_tail() {
  return getRuleContext<LITTLEParser::Expr_list_tailContext>(0);
}


size_t LITTLEParser::Expr_listContext::getRuleIndex() const {
  return LITTLEParser::RuleExpr_list;
}


antlrcpp::Any LITTLEParser::Expr_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitExpr_list(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Expr_listContext* LITTLEParser::expr_list() {
  Expr_listContext *_localctx = _tracker.createInstance<Expr_listContext>(_ctx, getState());
  enterRule(_localctx, 62, LITTLEParser::RuleExpr_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(236);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(232);
      expr();
      setState(233);
      expr_list_tail();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);

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

//----------------- Expr_list_tailContext ------------------------------------------------------------------

LITTLEParser::Expr_list_tailContext::Expr_list_tailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::ExprContext* LITTLEParser::Expr_list_tailContext::expr() {
  return getRuleContext<LITTLEParser::ExprContext>(0);
}

LITTLEParser::Expr_list_tailContext* LITTLEParser::Expr_list_tailContext::expr_list_tail() {
  return getRuleContext<LITTLEParser::Expr_list_tailContext>(0);
}


size_t LITTLEParser::Expr_list_tailContext::getRuleIndex() const {
  return LITTLEParser::RuleExpr_list_tail;
}


antlrcpp::Any LITTLEParser::Expr_list_tailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitExpr_list_tail(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Expr_list_tailContext* LITTLEParser::expr_list_tail() {
  Expr_list_tailContext *_localctx = _tracker.createInstance<Expr_list_tailContext>(_ctx, getState());
  enterRule(_localctx, 64, LITTLEParser::RuleExpr_list_tail);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(243);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LITTLEParser::T__8: {
        enterOuterAlt(_localctx, 1);
        setState(238);
        match(LITTLEParser::T__8);
        setState(239);
        expr();
        setState(240);
        expr_list_tail();
        break;
      }

      case LITTLEParser::T__12: {
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

//----------------- PrimaryContext ------------------------------------------------------------------

LITTLEParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::ExprContext* LITTLEParser::PrimaryContext::expr() {
  return getRuleContext<LITTLEParser::ExprContext>(0);
}

LITTLEParser::IdContext* LITTLEParser::PrimaryContext::id() {
  return getRuleContext<LITTLEParser::IdContext>(0);
}

tree::TerminalNode* LITTLEParser::PrimaryContext::INTLITERAL() {
  return getToken(LITTLEParser::INTLITERAL, 0);
}

tree::TerminalNode* LITTLEParser::PrimaryContext::FLOATLITERAL() {
  return getToken(LITTLEParser::FLOATLITERAL, 0);
}


size_t LITTLEParser::PrimaryContext::getRuleIndex() const {
  return LITTLEParser::RulePrimary;
}


antlrcpp::Any LITTLEParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::PrimaryContext* LITTLEParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 66, LITTLEParser::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LITTLEParser::T__11: {
        enterOuterAlt(_localctx, 1);
        setState(245);
        match(LITTLEParser::T__11);
        setState(246);
        expr();
        setState(247);
        match(LITTLEParser::T__12);
        break;
      }

      case LITTLEParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(249);
        id();
        break;
      }

      case LITTLEParser::INTLITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(250);
        match(LITTLEParser::INTLITERAL);
        break;
      }

      case LITTLEParser::FLOATLITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(251);
        match(LITTLEParser::FLOATLITERAL);
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

//----------------- AddopContext ------------------------------------------------------------------

LITTLEParser::AddopContext::AddopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LITTLEParser::AddopContext::getRuleIndex() const {
  return LITTLEParser::RuleAddop;
}


antlrcpp::Any LITTLEParser::AddopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitAddop(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::AddopContext* LITTLEParser::addop() {
  AddopContext *_localctx = _tracker.createInstance<AddopContext>(_ctx, getState());
  enterRule(_localctx, 68, LITTLEParser::RuleAddop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    _la = _input->LA(1);
    if (!(_la == LITTLEParser::T__15

    || _la == LITTLEParser::T__16)) {
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

//----------------- MulopContext ------------------------------------------------------------------

LITTLEParser::MulopContext::MulopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LITTLEParser::MulopContext::getRuleIndex() const {
  return LITTLEParser::RuleMulop;
}


antlrcpp::Any LITTLEParser::MulopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitMulop(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::MulopContext* LITTLEParser::mulop() {
  MulopContext *_localctx = _tracker.createInstance<MulopContext>(_ctx, getState());
  enterRule(_localctx, 70, LITTLEParser::RuleMulop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    _la = _input->LA(1);
    if (!(_la == LITTLEParser::T__17

    || _la == LITTLEParser::T__18)) {
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

//----------------- If_stmtContext ------------------------------------------------------------------

LITTLEParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::CondContext* LITTLEParser::If_stmtContext::cond() {
  return getRuleContext<LITTLEParser::CondContext>(0);
}

LITTLEParser::DeclContext* LITTLEParser::If_stmtContext::decl() {
  return getRuleContext<LITTLEParser::DeclContext>(0);
}

LITTLEParser::Stmt_listContext* LITTLEParser::If_stmtContext::stmt_list() {
  return getRuleContext<LITTLEParser::Stmt_listContext>(0);
}

LITTLEParser::Else_partContext* LITTLEParser::If_stmtContext::else_part() {
  return getRuleContext<LITTLEParser::Else_partContext>(0);
}


size_t LITTLEParser::If_stmtContext::getRuleIndex() const {
  return LITTLEParser::RuleIf_stmt;
}


antlrcpp::Any LITTLEParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::If_stmtContext* LITTLEParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 72, LITTLEParser::RuleIf_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    match(LITTLEParser::T__19);
    setState(259);
    match(LITTLEParser::T__11);
    setState(260);
    cond();
    setState(261);
    match(LITTLEParser::T__12);
    setState(262);
    decl();
    setState(263);
    stmt_list();
    setState(264);
    else_part();
    setState(265);
    match(LITTLEParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_partContext ------------------------------------------------------------------

LITTLEParser::Else_partContext::Else_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::DeclContext* LITTLEParser::Else_partContext::decl() {
  return getRuleContext<LITTLEParser::DeclContext>(0);
}

LITTLEParser::Stmt_listContext* LITTLEParser::Else_partContext::stmt_list() {
  return getRuleContext<LITTLEParser::Stmt_listContext>(0);
}


size_t LITTLEParser::Else_partContext::getRuleIndex() const {
  return LITTLEParser::RuleElse_part;
}


antlrcpp::Any LITTLEParser::Else_partContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitElse_part(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::Else_partContext* LITTLEParser::else_part() {
  Else_partContext *_localctx = _tracker.createInstance<Else_partContext>(_ctx, getState());
  enterRule(_localctx, 74, LITTLEParser::RuleElse_part);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(272);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LITTLEParser::T__21: {
        enterOuterAlt(_localctx, 1);
        setState(267);
        match(LITTLEParser::T__21);
        setState(268);
        decl();
        setState(269);
        stmt_list();
        break;
      }

      case LITTLEParser::T__20: {
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

//----------------- CondContext ------------------------------------------------------------------

LITTLEParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LITTLEParser::ExprContext *> LITTLEParser::CondContext::expr() {
  return getRuleContexts<LITTLEParser::ExprContext>();
}

LITTLEParser::ExprContext* LITTLEParser::CondContext::expr(size_t i) {
  return getRuleContext<LITTLEParser::ExprContext>(i);
}

LITTLEParser::CompopContext* LITTLEParser::CondContext::compop() {
  return getRuleContext<LITTLEParser::CompopContext>(0);
}


size_t LITTLEParser::CondContext::getRuleIndex() const {
  return LITTLEParser::RuleCond;
}


antlrcpp::Any LITTLEParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::CondContext* LITTLEParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 76, LITTLEParser::RuleCond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    expr();
    setState(275);
    compop();
    setState(276);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompopContext ------------------------------------------------------------------

LITTLEParser::CompopContext::CompopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LITTLEParser::CompopContext::getRuleIndex() const {
  return LITTLEParser::RuleCompop;
}


antlrcpp::Any LITTLEParser::CompopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitCompop(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::CompopContext* LITTLEParser::compop() {
  CompopContext *_localctx = _tracker.createInstance<CompopContext>(_ctx, getState());
  enterRule(_localctx, 78, LITTLEParser::RuleCompop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LITTLEParser::T__22)
      | (1ULL << LITTLEParser::T__23)
      | (1ULL << LITTLEParser::T__24)
      | (1ULL << LITTLEParser::T__25)
      | (1ULL << LITTLEParser::T__26)
      | (1ULL << LITTLEParser::T__27))) != 0))) {
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

//----------------- While_stmtContext ------------------------------------------------------------------

LITTLEParser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LITTLEParser::CondContext* LITTLEParser::While_stmtContext::cond() {
  return getRuleContext<LITTLEParser::CondContext>(0);
}

LITTLEParser::DeclContext* LITTLEParser::While_stmtContext::decl() {
  return getRuleContext<LITTLEParser::DeclContext>(0);
}

LITTLEParser::Stmt_listContext* LITTLEParser::While_stmtContext::stmt_list() {
  return getRuleContext<LITTLEParser::Stmt_listContext>(0);
}


size_t LITTLEParser::While_stmtContext::getRuleIndex() const {
  return LITTLEParser::RuleWhile_stmt;
}


antlrcpp::Any LITTLEParser::While_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LITTLEVisitor*>(visitor))
    return parserVisitor->visitWhile_stmt(this);
  else
    return visitor->visitChildren(this);
}

LITTLEParser::While_stmtContext* LITTLEParser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 80, LITTLEParser::RuleWhile_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(LITTLEParser::T__28);
    setState(281);
    match(LITTLEParser::T__11);
    setState(282);
    cond();
    setState(283);
    match(LITTLEParser::T__12);
    setState(284);
    decl();
    setState(285);
    stmt_list();
    setState(286);
    match(LITTLEParser::T__29);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool LITTLEParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 26: return expr_prefixSempred(dynamic_cast<Expr_prefixContext *>(context), predicateIndex);
    case 28: return factor_prefixSempred(dynamic_cast<Factor_prefixContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LITTLEParser::expr_prefixSempred(Expr_prefixContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool LITTLEParser::factor_prefixSempred(Factor_prefixContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> LITTLEParser::_decisionToDFA;
atn::PredictionContextCache LITTLEParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN LITTLEParser::_atn;
std::vector<uint16_t> LITTLEParser::_serializedATN;

std::vector<std::string> LITTLEParser::_ruleNames = {
  "program", "id", "pgm_body", "decl", "string_decl", "str", "var_decl", 
  "var_type", "any_type", "id_list", "id_tail", "param_decl_list", "param_decl", 
  "param_decl_tail", "func_declarations", "func_decl", "func_body", "stmt_list", 
  "stmt", "base_stmt", "assign_stmt", "assign_expr", "read_stmt", "write_stmt", 
  "return_stmt", "expr", "expr_prefix", "factor", "factor_prefix", "postfix_expr", 
  "call_expr", "expr_list", "expr_list_tail", "primary", "addop", "mulop", 
  "if_stmt", "else_part", "cond", "compop", "while_stmt"
};

std::vector<std::string> LITTLEParser::_literalNames = {
  "", "'PROGRAM'", "'BEGIN'", "'END'", "'STRING'", "':='", "'FLOAT'", "'INT'", 
  "'VOID'", "','", "'FUNCTION'", "'READ'", "'('", "')'", "'WRITE'", "'RETURN'", 
  "'+'", "'-'", "'*'", "'/'", "'IF'", "'ENDIF'", "'ELSE'", "'<'", "'>'", 
  "'='", "'!='", "'<='", "'>='", "'WHILE'", "'ENDWHILE'"
};

std::vector<std::string> LITTLEParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "IDENTIFIER", "INTLITERAL", 
  "FLOATLITERAL", "STRINGLITERAL", "COMMENT"
};

dfa::Vocabulary LITTLEParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> LITTLEParser::_tokenNames;

LITTLEParser::Initializer::Initializer() {
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
    0x3, 0x25, 0x123, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x67, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x77, 0xa, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x5, 0xc, 0x81, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0x87, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x91, 0xa, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x97, 0xa, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0xa8, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x5, 0x14, 0xad, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0xb3, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0xd0, 0xa, 0x1c, 0xc, 
    0x1c, 0xe, 0x1c, 0xd3, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0xdd, 0xa, 
    0x1e, 0xc, 0x1e, 0xe, 0x1e, 0xe0, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x5, 
    0x1f, 0xe4, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0xef, 0xa, 
    0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 
    0xf6, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0xff, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x113, 0xa, 0x27, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x2, 0x4, 0x36, 0x3a, 0x2b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
    0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x2, 
    0x6, 0x3, 0x2, 0x8, 0x9, 0x3, 0x2, 0x12, 0x13, 0x3, 0x2, 0x14, 0x15, 
    0x3, 0x2, 0x19, 0x1e, 0x2, 0x10f, 0x2, 0x54, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x6, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x66, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x68, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x10, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x76, 0x3, 0x2, 0x2, 0x2, 0x14, 0x78, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x80, 0x3, 0x2, 0x2, 0x2, 0x18, 0x86, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x88, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x90, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x98, 0x3, 0x2, 0x2, 0x2, 0x22, 0xa0, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x26, 0xac, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xb4, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xba, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x32, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0x36, 0xca, 0x3, 0x2, 0x2, 0x2, 0x38, 0xd4, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x3c, 0xe3, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x40, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x44, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x100, 0x3, 0x2, 0x2, 0x2, 0x48, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x104, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x112, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x50, 0x118, 0x3, 0x2, 0x2, 0x2, 0x52, 0x11a, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 0x3, 0x2, 0x2, 0x55, 0x56, 0x5, 
    0x4, 0x3, 0x2, 0x56, 0x57, 0x7, 0x4, 0x2, 0x2, 0x57, 0x58, 0x5, 0x6, 
    0x4, 0x2, 0x58, 0x59, 0x7, 0x5, 0x2, 0x2, 0x59, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x5b, 0x7, 0x21, 0x2, 0x2, 0x5b, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x5d, 0x5, 0x8, 0x5, 0x2, 0x5d, 0x5e, 0x5, 0x1e, 0x10, 0x2, 0x5e, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x5, 0xa, 0x6, 0x2, 0x60, 0x61, 
    0x5, 0x8, 0x5, 0x2, 0x61, 0x67, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x5, 
    0xe, 0x8, 0x2, 0x63, 0x64, 0x5, 0x8, 0x5, 0x2, 0x64, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x67, 0x3, 0x2, 0x2, 0x2, 0x66, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x62, 0x3, 0x2, 0x2, 0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x9, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 0x6, 0x2, 0x2, 0x69, 
    0x6a, 0x5, 0x4, 0x3, 0x2, 0x6a, 0x6b, 0x7, 0x7, 0x2, 0x2, 0x6b, 0x6c, 
    0x5, 0xc, 0x7, 0x2, 0x6c, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x7, 
    0x24, 0x2, 0x2, 0x6e, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x5, 0x10, 
    0x9, 0x2, 0x70, 0x71, 0x5, 0x14, 0xb, 0x2, 0x71, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x73, 0x9, 0x2, 0x2, 0x2, 0x73, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x77, 0x5, 0x10, 0x9, 0x2, 0x75, 0x77, 0x7, 0xa, 0x2, 0x2, 0x76, 
    0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x5, 0x4, 0x3, 0x2, 0x79, 0x7a, 0x5, 
    0x16, 0xc, 0x2, 0x7a, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0xb, 
    0x2, 0x2, 0x7c, 0x7d, 0x5, 0x4, 0x3, 0x2, 0x7d, 0x7e, 0x5, 0x16, 0xc, 
    0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x81, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x5, 0x1a, 0xe, 0x2, 0x83, 0x84, 
    0x5, 0x1c, 0xf, 0x2, 0x84, 0x87, 0x3, 0x2, 0x2, 0x2, 0x85, 0x87, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x82, 0x3, 0x2, 0x2, 0x2, 0x86, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x87, 0x19, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x5, 0x10, 0x9, 
    0x2, 0x89, 0x8a, 0x5, 0x4, 0x3, 0x2, 0x8a, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x8b, 0x8c, 0x7, 0xb, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x1a, 0xe, 0x2, 0x8d, 
    0x8e, 0x5, 0x1c, 0xf, 0x2, 0x8e, 0x91, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x91, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x91, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x5, 0x20, 
    0x11, 0x2, 0x93, 0x94, 0x5, 0x1e, 0x10, 0x2, 0x94, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x95, 0x97, 0x3, 0x2, 0x2, 0x2, 0x96, 0x92, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x99, 0x7, 0xc, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x12, 0xa, 0x2, 0x9a, 0x9b, 
    0x5, 0x4, 0x3, 0x2, 0x9b, 0x9c, 0x5, 0x18, 0xd, 0x2, 0x9c, 0x9d, 0x7, 
    0x4, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x22, 0x12, 0x2, 0x9e, 0x9f, 0x7, 0x5, 
    0x2, 0x2, 0x9f, 0x21, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x8, 0x5, 
    0x2, 0xa1, 0xa2, 0x5, 0x24, 0x13, 0x2, 0xa2, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0xa3, 0xa4, 0x5, 0x26, 0x14, 0x2, 0xa4, 0xa5, 0x5, 0x24, 0x13, 0x2, 
    0xa5, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa7, 
    0xa3, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xa9, 0xad, 0x5, 0x28, 0x15, 0x2, 0xaa, 0xad, 0x5, 
    0x4a, 0x26, 0x2, 0xab, 0xad, 0x5, 0x52, 0x2a, 0x2, 0xac, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xad, 0x27, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb3, 0x5, 0x2a, 0x16, 
    0x2, 0xaf, 0xb3, 0x5, 0x2e, 0x18, 0x2, 0xb0, 0xb3, 0x5, 0x30, 0x19, 
    0x2, 0xb1, 0xb3, 0x5, 0x32, 0x1a, 0x2, 0xb2, 0xae, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0x29, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 
    0x5, 0x2c, 0x17, 0x2, 0xb5, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x5, 
    0x4, 0x3, 0x2, 0xb7, 0xb8, 0x7, 0x7, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x34, 
    0x1b, 0x2, 0xb9, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0xd, 0x2, 
    0x2, 0xbb, 0xbc, 0x7, 0xe, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x14, 0xb, 0x2, 
    0xbd, 0xbe, 0x7, 0xf, 0x2, 0x2, 0xbe, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xbf, 
    0xc0, 0x7, 0x10, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0xe, 0x2, 0x2, 0xc1, 0xc2, 
    0x5, 0x14, 0xb, 0x2, 0xc2, 0xc3, 0x7, 0xf, 0x2, 0x2, 0xc3, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x11, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x34, 
    0x1b, 0x2, 0xc6, 0x33, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x5, 0x36, 0x1c, 
    0x2, 0xc8, 0xc9, 0x5, 0x38, 0x1d, 0x2, 0xc9, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0xd1, 0x8, 0x1c, 0x1, 0x2, 0xcb, 0xcc, 0xc, 0x4, 0x2, 0x2, 0xcc, 
    0xcd, 0x5, 0x38, 0x1d, 0x2, 0xcd, 0xce, 0x5, 0x46, 0x24, 0x2, 0xce, 
    0xd0, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd3, 
    0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0x37, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0xd4, 0xd5, 0x5, 0x3a, 0x1e, 0x2, 0xd5, 0xd6, 0x5, 0x3c, 0x1f, 
    0x2, 0xd6, 0x39, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xde, 0x8, 0x1e, 0x1, 0x2, 
    0xd8, 0xd9, 0xc, 0x4, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x3c, 0x1f, 0x2, 0xda, 
    0xdb, 0x5, 0x48, 0x25, 0x2, 0xdb, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xd8, 
    0x3, 0x2, 0x2, 0x2, 0xdd, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 
    0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe4, 0x5, 0x44, 0x23, 
    0x2, 0xe2, 0xe4, 0x5, 0x3e, 0x20, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xe5, 
    0xe6, 0x5, 0x4, 0x3, 0x2, 0xe6, 0xe7, 0x7, 0xe, 0x2, 0x2, 0xe7, 0xe8, 
    0x5, 0x40, 0x21, 0x2, 0xe8, 0xe9, 0x7, 0xf, 0x2, 0x2, 0xe9, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x34, 0x1b, 0x2, 0xeb, 0xec, 0x5, 0x42, 
    0x22, 0x2, 0xec, 0xef, 0x3, 0x2, 0x2, 0x2, 0xed, 0xef, 0x3, 0x2, 0x2, 
    0x2, 0xee, 0xea, 0x3, 0x2, 0x2, 0x2, 0xee, 0xed, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0x41, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0xb, 0x2, 0x2, 0xf1, 
    0xf2, 0x5, 0x34, 0x1b, 0x2, 0xf2, 0xf3, 0x5, 0x42, 0x22, 0x2, 0xf3, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf0, 
    0x3, 0x2, 0x2, 0x2, 0xf5, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0xe, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x34, 
    0x1b, 0x2, 0xf9, 0xfa, 0x7, 0xf, 0x2, 0x2, 0xfa, 0xff, 0x3, 0x2, 0x2, 
    0x2, 0xfb, 0xff, 0x5, 0x4, 0x3, 0x2, 0xfc, 0xff, 0x7, 0x22, 0x2, 0x2, 
    0xfd, 0xff, 0x7, 0x23, 0x2, 0x2, 0xfe, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xfe, 
    0xfb, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfd, 
    0x3, 0x2, 0x2, 0x2, 0xff, 0x45, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x9, 
    0x3, 0x2, 0x2, 0x101, 0x47, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x9, 0x4, 
    0x2, 0x2, 0x103, 0x49, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x7, 0x16, 
    0x2, 0x2, 0x105, 0x106, 0x7, 0xe, 0x2, 0x2, 0x106, 0x107, 0x5, 0x4e, 
    0x28, 0x2, 0x107, 0x108, 0x7, 0xf, 0x2, 0x2, 0x108, 0x109, 0x5, 0x8, 
    0x5, 0x2, 0x109, 0x10a, 0x5, 0x24, 0x13, 0x2, 0x10a, 0x10b, 0x5, 0x4c, 
    0x27, 0x2, 0x10b, 0x10c, 0x7, 0x17, 0x2, 0x2, 0x10c, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x10d, 0x10e, 0x7, 0x18, 0x2, 0x2, 0x10e, 0x10f, 0x5, 0x8, 
    0x5, 0x2, 0x10f, 0x110, 0x5, 0x24, 0x13, 0x2, 0x110, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x111, 0x113, 0x3, 0x2, 0x2, 0x2, 0x112, 0x10d, 0x3, 0x2, 
    0x2, 0x2, 0x112, 0x111, 0x3, 0x2, 0x2, 0x2, 0x113, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x114, 0x115, 0x5, 0x34, 0x1b, 0x2, 0x115, 0x116, 0x5, 0x50, 0x29, 
    0x2, 0x116, 0x117, 0x5, 0x34, 0x1b, 0x2, 0x117, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x118, 0x119, 0x9, 0x5, 0x2, 0x2, 0x119, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x11a, 0x11b, 0x7, 0x1f, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0xe, 0x2, 0x2, 
    0x11c, 0x11d, 0x5, 0x4e, 0x28, 0x2, 0x11d, 0x11e, 0x7, 0xf, 0x2, 0x2, 
    0x11e, 0x11f, 0x5, 0x8, 0x5, 0x2, 0x11f, 0x120, 0x5, 0x24, 0x13, 0x2, 
    0x120, 0x121, 0x7, 0x20, 0x2, 0x2, 0x121, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x12, 0x66, 0x76, 0x80, 0x86, 0x90, 0x96, 0xa7, 0xac, 0xb2, 0xd1, 0xde, 
    0xe3, 0xee, 0xf5, 0xfe, 0x112, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

LITTLEParser::Initializer LITTLEParser::_init;
