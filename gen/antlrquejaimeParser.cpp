
// Generated from C:/Users/heyhey/Desktop/4IF/Compilateur01/Compilateur01\antlrquejaime.g4 by ANTLR 4.7


#include "antlrquejaimeVisitor.h"

#include "antlrquejaimeParser.h"


using namespace antlrcpp;
using namespace antlr4;

antlrquejaimeParser::antlrquejaimeParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

antlrquejaimeParser::~antlrquejaimeParser() {
  delete _interpreter;
}

std::string antlrquejaimeParser::getGrammarFileName() const {
  return "antlrquejaime.g4";
}

const std::vector<std::string>& antlrquejaimeParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& antlrquejaimeParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- BigContext ------------------------------------------------------------------

antlrquejaimeParser::BigContext::BigContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::BigContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleBig;
}

void antlrquejaimeParser::BigContext::copyFrom(BigContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AxiomeContext ------------------------------------------------------------------

antlrquejaimeParser::ProgrammeContext* antlrquejaimeParser::AxiomeContext::programme() {
  return getRuleContext<antlrquejaimeParser::ProgrammeContext>(0);
}

antlrquejaimeParser::AxiomeContext::AxiomeContext(BigContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::AxiomeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAxiome(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::BigContext* antlrquejaimeParser::big() {
  BigContext *_localctx = _tracker.createInstance<BigContext>(_ctx, getState());
  enterRule(_localctx, 0, antlrquejaimeParser::RuleBig);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<BigContext *>(_tracker.createInstance<antlrquejaimeParser::AxiomeContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(38);
    programme();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgrammeContext ------------------------------------------------------------------

antlrquejaimeParser::ProgrammeContext::ProgrammeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::ProgrammeContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleProgramme;
}

void antlrquejaimeParser::ProgrammeContext::copyFrom(ProgrammeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Programme_normalContext ------------------------------------------------------------------

antlrquejaimeParser::MainContext* antlrquejaimeParser::Programme_normalContext::main() {
  return getRuleContext<antlrquejaimeParser::MainContext>(0);
}

std::vector<antlrquejaimeParser::DeclarationContext *> antlrquejaimeParser::Programme_normalContext::declaration() {
  return getRuleContexts<antlrquejaimeParser::DeclarationContext>();
}

antlrquejaimeParser::DeclarationContext* antlrquejaimeParser::Programme_normalContext::declaration(size_t i) {
  return getRuleContext<antlrquejaimeParser::DeclarationContext>(i);
}

std::vector<antlrquejaimeParser::FonctionContext *> antlrquejaimeParser::Programme_normalContext::fonction() {
  return getRuleContexts<antlrquejaimeParser::FonctionContext>();
}

antlrquejaimeParser::FonctionContext* antlrquejaimeParser::Programme_normalContext::fonction(size_t i) {
  return getRuleContext<antlrquejaimeParser::FonctionContext>(i);
}

antlrquejaimeParser::Programme_normalContext::Programme_normalContext(ProgrammeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Programme_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitProgramme_normal(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::ProgrammeContext* antlrquejaimeParser::programme() {
  ProgrammeContext *_localctx = _tracker.createInstance<ProgrammeContext>(_ctx, getState());
  enterRule(_localctx, 2, antlrquejaimeParser::RuleProgramme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    _localctx = dynamic_cast<ProgrammeContext *>(_tracker.createInstance<antlrquejaimeParser::Programme_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(43);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == antlrquejaimeParser::Type_var) {
      setState(40);
      declaration();
      setState(45);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(49);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(46);
        fonction(); 
      }
      setState(51);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(52);
    main();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

antlrquejaimeParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::VariableContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleVariable;
}

void antlrquejaimeParser::VariableContext::copyFrom(VariableContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Variable_simpleContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Variable_simpleContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::Variable_simpleContext::Variable_simpleContext(VariableContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Variable_simpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitVariable_simple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Variable_tableauContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Variable_tableauContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Variable_tableauContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Variable_tableauContext::Variable_tableauContext(VariableContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Variable_tableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitVariable_tableau(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::VariableContext* antlrquejaimeParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 4, antlrquejaimeParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VariableContext *>(_tracker.createInstance<antlrquejaimeParser::Variable_simpleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(54);
      match(antlrquejaimeParser::Nom_var);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VariableContext *>(_tracker.createInstance<antlrquejaimeParser::Variable_tableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(55);
      match(antlrquejaimeParser::Nom_var);
      setState(56);
      match(antlrquejaimeParser::T__0);
      setState(57);
      expr(0);
      setState(58);
      match(antlrquejaimeParser::T__1);
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

//----------------- AffContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext::AffContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::AffContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleAff;
}

void antlrquejaimeParser::AffContext::copyFrom(AffContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Aff_variableContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Aff_variableContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::Aff_variableContext::Aff_variableContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Aff_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAff_variable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Aff_tableauContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Aff_tableauContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Aff_tableauContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Aff_tableauContext::Aff_tableauContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Aff_tableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAff_tableau(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::AffContext* antlrquejaimeParser::aff() {
  AffContext *_localctx = _tracker.createInstance<AffContext>(_ctx, getState());
  enterRule(_localctx, 6, antlrquejaimeParser::RuleAff);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<antlrquejaimeParser::Aff_variableContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(62);
      match(antlrquejaimeParser::Nom_var);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<antlrquejaimeParser::Aff_tableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(63);
      match(antlrquejaimeParser::Nom_var);
      setState(64);
      match(antlrquejaimeParser::T__0);
      setState(65);
      expr(0);
      setState(66);
      match(antlrquejaimeParser::T__1);
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

//----------------- AffectationContext ------------------------------------------------------------------

antlrquejaimeParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::AffectationContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleAffectation;
}

void antlrquejaimeParser::AffectationContext::copyFrom(AffectationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Affectation_plusegalContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext* antlrquejaimeParser::Affectation_plusegalContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Affectation_plusegalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Affectation_plusegalContext::Affectation_plusegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_plusegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_plusegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_plusplusavantContext ------------------------------------------------------------------

antlrquejaimeParser::VariableContext* antlrquejaimeParser::Affectation_plusplusavantContext::variable() {
  return getRuleContext<antlrquejaimeParser::VariableContext>(0);
}

antlrquejaimeParser::Affectation_plusplusavantContext::Affectation_plusplusavantContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_plusplusavantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_plusplusavant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_ouegalContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext* antlrquejaimeParser::Affectation_ouegalContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Affectation_ouegalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Affectation_ouegalContext::Affectation_ouegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_ouegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_ouegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_supegalContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext* antlrquejaimeParser::Affectation_supegalContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Affectation_supegalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Affectation_supegalContext::Affectation_supegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_supegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_supegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_plusplusapresContext ------------------------------------------------------------------

antlrquejaimeParser::VariableContext* antlrquejaimeParser::Affectation_plusplusapresContext::variable() {
  return getRuleContext<antlrquejaimeParser::VariableContext>(0);
}

antlrquejaimeParser::Affectation_plusplusapresContext::Affectation_plusplusapresContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_plusplusapresContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_plusplusapres(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_divegalContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext* antlrquejaimeParser::Affectation_divegalContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Affectation_divegalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Affectation_divegalContext::Affectation_divegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_divegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_divegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_foisegalContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext* antlrquejaimeParser::Affectation_foisegalContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Affectation_foisegalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Affectation_foisegalContext::Affectation_foisegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_foisegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_foisegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_moinsmoinsapresContext ------------------------------------------------------------------

antlrquejaimeParser::VariableContext* antlrquejaimeParser::Affectation_moinsmoinsapresContext::variable() {
  return getRuleContext<antlrquejaimeParser::VariableContext>(0);
}

antlrquejaimeParser::Affectation_moinsmoinsapresContext::Affectation_moinsmoinsapresContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_moinsmoinsapresContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_moinsmoinsapres(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_pourcentegalContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext* antlrquejaimeParser::Affectation_pourcentegalContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Affectation_pourcentegalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Affectation_pourcentegalContext::Affectation_pourcentegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_pourcentegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_pourcentegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_egalContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext* antlrquejaimeParser::Affectation_egalContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Affectation_egalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Affectation_egalContext::Affectation_egalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_egalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_egal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_etegalContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext* antlrquejaimeParser::Affectation_etegalContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Affectation_etegalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Affectation_etegalContext::Affectation_etegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_etegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_etegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_moinsmoinsavantContext ------------------------------------------------------------------

antlrquejaimeParser::VariableContext* antlrquejaimeParser::Affectation_moinsmoinsavantContext::variable() {
  return getRuleContext<antlrquejaimeParser::VariableContext>(0);
}

antlrquejaimeParser::Affectation_moinsmoinsavantContext::Affectation_moinsmoinsavantContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_moinsmoinsavantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_moinsmoinsavant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_infegalContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext* antlrquejaimeParser::Affectation_infegalContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Affectation_infegalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Affectation_infegalContext::Affectation_infegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_infegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_infegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_moinsegalContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext* antlrquejaimeParser::Affectation_moinsegalContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Affectation_moinsegalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Affectation_moinsegalContext::Affectation_moinsegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Affectation_moinsegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitAffectation_moinsegal(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::AffectationContext* antlrquejaimeParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 8, antlrquejaimeParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(120);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_plusplusapresContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(70);
      variable();
      setState(71);
      match(antlrquejaimeParser::T__2);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_plusplusavantContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(73);
      match(antlrquejaimeParser::T__2);
      setState(74);
      variable();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_moinsmoinsapresContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(75);
      variable();
      setState(76);
      match(antlrquejaimeParser::T__3);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_moinsmoinsavantContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(78);
      match(antlrquejaimeParser::T__3);
      setState(79);
      variable();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_egalContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(80);
      aff();
      setState(81);
      match(antlrquejaimeParser::T__4);
      setState(82);
      expr(0);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_etegalContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(84);
      aff();
      setState(85);
      match(antlrquejaimeParser::T__5);
      setState(86);
      expr(0);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_ouegalContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(88);
      aff();
      setState(89);
      match(antlrquejaimeParser::T__6);
      setState(90);
      expr(0);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_plusegalContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(92);
      aff();
      setState(93);
      match(antlrquejaimeParser::T__7);
      setState(94);
      expr(0);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_moinsegalContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(96);
      aff();
      setState(97);
      match(antlrquejaimeParser::T__8);
      setState(98);
      expr(0);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_foisegalContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(100);
      aff();
      setState(101);
      match(antlrquejaimeParser::T__9);
      setState(102);
      expr(0);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_divegalContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(104);
      aff();
      setState(105);
      match(antlrquejaimeParser::T__10);
      setState(106);
      expr(0);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_pourcentegalContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(108);
      aff();
      setState(109);
      match(antlrquejaimeParser::T__11);
      setState(110);
      expr(0);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_infegalContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(112);
      aff();
      setState(113);
      match(antlrquejaimeParser::T__12);
      setState(114);
      expr(0);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<antlrquejaimeParser::Affectation_supegalContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(116);
      aff();
      setState(117);
      match(antlrquejaimeParser::T__13);
      setState(118);
      expr(0);
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

//----------------- ExprContext ------------------------------------------------------------------

antlrquejaimeParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::ExprContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleExpr;
}

void antlrquejaimeParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_infegalContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_infegalContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_infegalContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_infegalContext::Expr_infegalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_infegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_infegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_nombreContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Expr_nombreContext::NOMBRE() {
  return getToken(antlrquejaimeParser::NOMBRE, 0);
}

antlrquejaimeParser::Expr_nombreContext::Expr_nombreContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_nombreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_nombre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_diffegalContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_diffegalContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_diffegalContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_diffegalContext::Expr_diffegalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_diffegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_diffegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_vagueContext ------------------------------------------------------------------

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_vagueContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Expr_vagueContext::Expr_vagueContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_vagueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_vague(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_affContext ------------------------------------------------------------------

antlrquejaimeParser::AffContext* antlrquejaimeParser::Expr_affContext::aff() {
  return getRuleContext<antlrquejaimeParser::AffContext>(0);
}

antlrquejaimeParser::Expr_affContext::Expr_affContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_affContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_aff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_etContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_etContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_etContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_etContext::Expr_etContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_etContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_et(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_infContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_infContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_infContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_infContext::Expr_infContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_infContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_inf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_parentheseContext ------------------------------------------------------------------

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_parentheseContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Expr_parentheseContext::Expr_parentheseContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_parentheseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_parenthese(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_variabkeContext ------------------------------------------------------------------

antlrquejaimeParser::VariableContext* antlrquejaimeParser::Expr_variabkeContext::variable() {
  return getRuleContext<antlrquejaimeParser::VariableContext>(0);
}

antlrquejaimeParser::Expr_variabkeContext::Expr_variabkeContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_variabkeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_variabke(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_additionContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_additionContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_additionContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_additionContext::Expr_additionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_additionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_addition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_ouContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_ouContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_ouContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_ouContext::Expr_ouContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_ouContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_ou(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_supContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_supContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_supContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_supContext::Expr_supContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_supContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_sup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_etetContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_etetContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_etetContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_etetContext::Expr_etetContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_etetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_etet(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_infinfContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_infinfContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_infinfContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_infinfContext::Expr_infinfContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_infinfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_infinf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_charContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Expr_charContext::CHAR() {
  return getToken(antlrquejaimeParser::CHAR, 0);
}

antlrquejaimeParser::Expr_charContext::Expr_charContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_charContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_char(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_egalegalContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_egalegalContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_egalegalContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_egalegalContext::Expr_egalegalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_egalegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_egalegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_ououContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_ououContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_ououContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_ououContext::Expr_ououContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_ououContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_ouou(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_divisionContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_divisionContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_divisionContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_divisionContext::Expr_divisionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_divisionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_division(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_modContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_modContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_modContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_modContext::Expr_modContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_modContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_mod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_supegalContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_supegalContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_supegalContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_supegalContext::Expr_supegalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_supegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_supegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_soustractionContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_soustractionContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_soustractionContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_soustractionContext::Expr_soustractionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_soustractionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_soustraction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_exclamationContext ------------------------------------------------------------------

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_exclamationContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Expr_exclamationContext::Expr_exclamationContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_exclamationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_exclamation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_multiplicationContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_multiplicationContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_multiplicationContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_multiplicationContext::Expr_multiplicationContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_multiplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_multiplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_supsupContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_supsupContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_supsupContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_supsupContext::Expr_supsupContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_supsupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_supsup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_chapeauContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::ExprContext *> antlrquejaimeParser::Expr_chapeauContext::expr() {
  return getRuleContexts<antlrquejaimeParser::ExprContext>();
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Expr_chapeauContext::expr(size_t i) {
  return getRuleContext<antlrquejaimeParser::ExprContext>(i);
}

antlrquejaimeParser::Expr_chapeauContext::Expr_chapeauContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Expr_chapeauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitExpr_chapeau(this);
  else
    return visitor->visitChildren(this);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::expr() {
   return expr(0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  antlrquejaimeParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  antlrquejaimeParser::ExprContext *previousContext = _localctx;
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, antlrquejaimeParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(135);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Expr_nombreContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(123);
      match(antlrquejaimeParser::NOMBRE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Expr_charContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(124);
      match(antlrquejaimeParser::CHAR);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Expr_parentheseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(125);
      match(antlrquejaimeParser::T__14);
      setState(126);
      expr(0);
      setState(127);
      match(antlrquejaimeParser::T__15);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Expr_vagueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(129);
      match(antlrquejaimeParser::T__16);
      setState(130);
      expr(22);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Expr_exclamationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(131);
      match(antlrquejaimeParser::T__17);
      setState(132);
      expr(21);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Expr_variabkeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(133);
      variable();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<Expr_affContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(134);
      aff();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(193);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(191);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Expr_multiplicationContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(137);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(138);
          match(antlrquejaimeParser::T__18);
          setState(139);
          expr(21);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Expr_divisionContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(140);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(141);
          match(antlrquejaimeParser::T__19);
          setState(142);
          expr(20);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Expr_modContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(143);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(144);
          match(antlrquejaimeParser::T__20);
          setState(145);
          expr(19);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Expr_additionContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(146);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(147);
          match(antlrquejaimeParser::T__21);
          setState(148);
          expr(18);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<Expr_soustractionContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(149);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(150);
          match(antlrquejaimeParser::T__22);
          setState(151);
          expr(17);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<Expr_infinfContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(152);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(153);
          match(antlrquejaimeParser::T__23);
          setState(154);
          expr(16);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<Expr_supsupContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(155);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(156);
          match(antlrquejaimeParser::T__24);
          setState(157);
          expr(15);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<Expr_etContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(158);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(159);
          match(antlrquejaimeParser::T__25);
          setState(160);
          expr(14);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<Expr_ouContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(161);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(162);
          match(antlrquejaimeParser::T__26);
          setState(163);
          expr(13);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<Expr_chapeauContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(164);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(165);
          match(antlrquejaimeParser::T__27);
          setState(166);
          expr(12);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<Expr_etetContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(167);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(168);
          match(antlrquejaimeParser::T__28);
          setState(169);
          expr(11);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<Expr_ououContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(170);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(171);
          match(antlrquejaimeParser::T__29);
          setState(172);
          expr(10);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<Expr_infContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(173);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(174);
          match(antlrquejaimeParser::T__30);
          setState(175);
          expr(9);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<Expr_infegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(176);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(177);
          match(antlrquejaimeParser::T__12);
          setState(178);
          expr(8);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<Expr_supContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(179);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(180);
          match(antlrquejaimeParser::T__31);
          setState(181);
          expr(7);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<Expr_supegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(182);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(183);
          match(antlrquejaimeParser::T__13);
          setState(184);
          expr(6);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<Expr_egalegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(185);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(186);
          match(antlrquejaimeParser::T__32);
          setState(187);
          expr(5);
          break;
        }

        case 18: {
          auto newContext = _tracker.createInstance<Expr_diffegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(188);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(189);
          match(antlrquejaimeParser::T__33);
          setState(190);
          expr(4);
          break;
        }

        } 
      }
      setState(195);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Return_Context ------------------------------------------------------------------

antlrquejaimeParser::Return_Context::Return_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::Return_Context::getRuleIndex() const {
  return antlrquejaimeParser::RuleReturn_;
}

void antlrquejaimeParser::Return_Context::copyFrom(Return_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Return_normalContext ------------------------------------------------------------------

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Return_normalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Return_normalContext::Return_normalContext(Return_Context *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Return_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitReturn_normal(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::Return_Context* antlrquejaimeParser::return_() {
  Return_Context *_localctx = _tracker.createInstance<Return_Context>(_ctx, getState());
  enterRule(_localctx, 12, antlrquejaimeParser::RuleReturn_);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Return_Context *>(_tracker.createInstance<antlrquejaimeParser::Return_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(196);
    match(antlrquejaimeParser::T__34);
    setState(198);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << antlrquejaimeParser::T__14)
      | (1ULL << antlrquejaimeParser::T__16)
      | (1ULL << antlrquejaimeParser::T__17)
      | (1ULL << antlrquejaimeParser::Nom_var)
      | (1ULL << antlrquejaimeParser::NOMBRE)
      | (1ULL << antlrquejaimeParser::CHAR))) != 0)) {
      setState(197);
      expr(0);
    }
    setState(200);
    match(antlrquejaimeParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Break_Context ------------------------------------------------------------------

antlrquejaimeParser::Break_Context::Break_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::Break_Context::getRuleIndex() const {
  return antlrquejaimeParser::RuleBreak_;
}

void antlrquejaimeParser::Break_Context::copyFrom(Break_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Break_normalContext ------------------------------------------------------------------

antlrquejaimeParser::Break_normalContext::Break_normalContext(Break_Context *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Break_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitBreak_normal(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::Break_Context* antlrquejaimeParser::break_() {
  Break_Context *_localctx = _tracker.createInstance<Break_Context>(_ctx, getState());
  enterRule(_localctx, 14, antlrquejaimeParser::RuleBreak_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Break_Context *>(_tracker.createInstance<antlrquejaimeParser::Break_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(202);
    match(antlrquejaimeParser::T__36);
    setState(203);
    match(antlrquejaimeParser::T__35);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

antlrquejaimeParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::InstructionContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleInstruction;
}

void antlrquejaimeParser::InstructionContext::copyFrom(InstructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Instruction_exprContext ------------------------------------------------------------------

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Instruction_exprContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Instruction_exprContext::Instruction_exprContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Instruction_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitInstruction_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Instruction_whileContext ------------------------------------------------------------------

antlrquejaimeParser::Structure_whileContext* antlrquejaimeParser::Instruction_whileContext::structure_while() {
  return getRuleContext<antlrquejaimeParser::Structure_whileContext>(0);
}

antlrquejaimeParser::Instruction_whileContext::Instruction_whileContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Instruction_whileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitInstruction_while(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Instruction_returnContext ------------------------------------------------------------------

antlrquejaimeParser::Return_Context* antlrquejaimeParser::Instruction_returnContext::return_() {
  return getRuleContext<antlrquejaimeParser::Return_Context>(0);
}

antlrquejaimeParser::Instruction_returnContext::Instruction_returnContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Instruction_returnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitInstruction_return(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Instruction_breakContext ------------------------------------------------------------------

antlrquejaimeParser::Break_Context* antlrquejaimeParser::Instruction_breakContext::break_() {
  return getRuleContext<antlrquejaimeParser::Break_Context>(0);
}

antlrquejaimeParser::Instruction_breakContext::Instruction_breakContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Instruction_breakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitInstruction_break(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Instruction_ifContext ------------------------------------------------------------------

antlrquejaimeParser::Structure_ifContext* antlrquejaimeParser::Instruction_ifContext::structure_if() {
  return getRuleContext<antlrquejaimeParser::Structure_ifContext>(0);
}

antlrquejaimeParser::Instruction_ifContext::Instruction_ifContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Instruction_ifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitInstruction_if(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::InstructionContext* antlrquejaimeParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 16, antlrquejaimeParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(212);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case antlrquejaimeParser::T__41: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<antlrquejaimeParser::Instruction_ifContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(205);
        structure_if();
        break;
      }

      case antlrquejaimeParser::T__43: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<antlrquejaimeParser::Instruction_whileContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(206);
        structure_while();
        break;
      }

      case antlrquejaimeParser::T__14:
      case antlrquejaimeParser::T__16:
      case antlrquejaimeParser::T__17:
      case antlrquejaimeParser::Nom_var:
      case antlrquejaimeParser::NOMBRE:
      case antlrquejaimeParser::CHAR: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<antlrquejaimeParser::Instruction_exprContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(207);
        expr(0);
        setState(208);
        match(antlrquejaimeParser::T__35);
        break;
      }

      case antlrquejaimeParser::T__34: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<antlrquejaimeParser::Instruction_returnContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(210);
        return_();
        break;
      }

      case antlrquejaimeParser::T__36: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<antlrquejaimeParser::Instruction_breakContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(211);
        break_();
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

//----------------- BlocContext ------------------------------------------------------------------

antlrquejaimeParser::BlocContext::BlocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::BlocContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleBloc;
}

void antlrquejaimeParser::BlocContext::copyFrom(BlocContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Bloc_normalContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::InstructionContext *> antlrquejaimeParser::Bloc_normalContext::instruction() {
  return getRuleContexts<antlrquejaimeParser::InstructionContext>();
}

antlrquejaimeParser::InstructionContext* antlrquejaimeParser::Bloc_normalContext::instruction(size_t i) {
  return getRuleContext<antlrquejaimeParser::InstructionContext>(i);
}

antlrquejaimeParser::Bloc_normalContext::Bloc_normalContext(BlocContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Bloc_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitBloc_normal(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::BlocContext* antlrquejaimeParser::bloc() {
  BlocContext *_localctx = _tracker.createInstance<BlocContext>(_ctx, getState());
  enterRule(_localctx, 18, antlrquejaimeParser::RuleBloc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<BlocContext *>(_tracker.createInstance<antlrquejaimeParser::Bloc_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(217);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << antlrquejaimeParser::T__14)
      | (1ULL << antlrquejaimeParser::T__16)
      | (1ULL << antlrquejaimeParser::T__17)
      | (1ULL << antlrquejaimeParser::T__34)
      | (1ULL << antlrquejaimeParser::T__36)
      | (1ULL << antlrquejaimeParser::T__41)
      | (1ULL << antlrquejaimeParser::T__43)
      | (1ULL << antlrquejaimeParser::Nom_var)
      | (1ULL << antlrquejaimeParser::NOMBRE)
      | (1ULL << antlrquejaimeParser::CHAR))) != 0)) {
      setState(214);
      instruction();
      setState(219);
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

//----------------- DeclarationContext ------------------------------------------------------------------

antlrquejaimeParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::DeclarationContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleDeclaration;
}

void antlrquejaimeParser::DeclarationContext::copyFrom(DeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Declaration_tableauContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Declaration_tableauContext::Type_var() {
  return getToken(antlrquejaimeParser::Type_var, 0);
}

tree::TerminalNode* antlrquejaimeParser::Declaration_tableauContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Declaration_tableauContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Declaration_tableauContext::Declaration_tableauContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Declaration_tableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitDeclaration_tableau(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Declaration_definitionContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Declaration_definitionContext::Type_var() {
  return getToken(antlrquejaimeParser::Type_var, 0);
}

tree::TerminalNode* antlrquejaimeParser::Declaration_definitionContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Declaration_definitionContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Declaration_definitionContext::Declaration_definitionContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Declaration_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitDeclaration_definition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Declaration_normaleContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Declaration_normaleContext::Type_var() {
  return getToken(antlrquejaimeParser::Type_var, 0);
}

std::vector<tree::TerminalNode *> antlrquejaimeParser::Declaration_normaleContext::Nom_var() {
  return getTokens(antlrquejaimeParser::Nom_var);
}

tree::TerminalNode* antlrquejaimeParser::Declaration_normaleContext::Nom_var(size_t i) {
  return getToken(antlrquejaimeParser::Nom_var, i);
}

antlrquejaimeParser::Declaration_normaleContext::Declaration_normaleContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Declaration_normaleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitDeclaration_normale(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::DeclarationContext* antlrquejaimeParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, antlrquejaimeParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(243);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<antlrquejaimeParser::Declaration_normaleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(220);
      match(antlrquejaimeParser::Type_var);
      setState(221);
      match(antlrquejaimeParser::Nom_var);
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::T__37) {
        setState(222);
        match(antlrquejaimeParser::T__37);
        setState(223);
        match(antlrquejaimeParser::Nom_var);
        setState(228);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(229);
      match(antlrquejaimeParser::T__35);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<antlrquejaimeParser::Declaration_definitionContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(230);
      match(antlrquejaimeParser::Type_var);
      setState(231);
      match(antlrquejaimeParser::Nom_var);
      setState(232);
      match(antlrquejaimeParser::T__4);
      setState(233);
      expr(0);
      setState(234);
      match(antlrquejaimeParser::T__35);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<antlrquejaimeParser::Declaration_tableauContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(236);
      match(antlrquejaimeParser::Type_var);
      setState(237);
      match(antlrquejaimeParser::Nom_var);
      setState(238);
      match(antlrquejaimeParser::T__0);
      setState(239);
      expr(0);
      setState(240);
      match(antlrquejaimeParser::T__1);
      setState(241);
      match(antlrquejaimeParser::T__35);
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

//----------------- FonctionContext ------------------------------------------------------------------

antlrquejaimeParser::FonctionContext::FonctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::FonctionContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleFonction;
}

void antlrquejaimeParser::FonctionContext::copyFrom(FonctionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Fonction_avecparametreContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Fonction_avecparametreContext::Type_fonction() {
  return getToken(antlrquejaimeParser::Type_fonction, 0);
}

tree::TerminalNode* antlrquejaimeParser::Fonction_avecparametreContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::ParametreContext* antlrquejaimeParser::Fonction_avecparametreContext::parametre() {
  return getRuleContext<antlrquejaimeParser::ParametreContext>(0);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::Fonction_avecparametreContext::bloc() {
  return getRuleContext<antlrquejaimeParser::BlocContext>(0);
}

std::vector<antlrquejaimeParser::DeclarationContext *> antlrquejaimeParser::Fonction_avecparametreContext::declaration() {
  return getRuleContexts<antlrquejaimeParser::DeclarationContext>();
}

antlrquejaimeParser::DeclarationContext* antlrquejaimeParser::Fonction_avecparametreContext::declaration(size_t i) {
  return getRuleContext<antlrquejaimeParser::DeclarationContext>(i);
}

antlrquejaimeParser::Fonction_avecparametreContext::Fonction_avecparametreContext(FonctionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Fonction_avecparametreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitFonction_avecparametre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Fonction_parametrevoidContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Fonction_parametrevoidContext::Type_fonction() {
  return getToken(antlrquejaimeParser::Type_fonction, 0);
}

tree::TerminalNode* antlrquejaimeParser::Fonction_parametrevoidContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::Fonction_parametrevoidContext::bloc() {
  return getRuleContext<antlrquejaimeParser::BlocContext>(0);
}

std::vector<antlrquejaimeParser::DeclarationContext *> antlrquejaimeParser::Fonction_parametrevoidContext::declaration() {
  return getRuleContexts<antlrquejaimeParser::DeclarationContext>();
}

antlrquejaimeParser::DeclarationContext* antlrquejaimeParser::Fonction_parametrevoidContext::declaration(size_t i) {
  return getRuleContext<antlrquejaimeParser::DeclarationContext>(i);
}

antlrquejaimeParser::Fonction_parametrevoidContext::Fonction_parametrevoidContext(FonctionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Fonction_parametrevoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitFonction_parametrevoid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Fonction_sansparametreContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Fonction_sansparametreContext::Type_fonction() {
  return getToken(antlrquejaimeParser::Type_fonction, 0);
}

tree::TerminalNode* antlrquejaimeParser::Fonction_sansparametreContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::Fonction_sansparametreContext::bloc() {
  return getRuleContext<antlrquejaimeParser::BlocContext>(0);
}

std::vector<antlrquejaimeParser::DeclarationContext *> antlrquejaimeParser::Fonction_sansparametreContext::declaration() {
  return getRuleContexts<antlrquejaimeParser::DeclarationContext>();
}

antlrquejaimeParser::DeclarationContext* antlrquejaimeParser::Fonction_sansparametreContext::declaration(size_t i) {
  return getRuleContext<antlrquejaimeParser::DeclarationContext>(i);
}

antlrquejaimeParser::Fonction_sansparametreContext::Fonction_sansparametreContext(FonctionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Fonction_sansparametreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitFonction_sansparametre(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::FonctionContext* antlrquejaimeParser::fonction() {
  FonctionContext *_localctx = _tracker.createInstance<FonctionContext>(_ctx, getState());
  enterRule(_localctx, 22, antlrquejaimeParser::RuleFonction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(289);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<antlrquejaimeParser::Fonction_avecparametreContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(245);
      match(antlrquejaimeParser::Type_fonction);
      setState(246);
      match(antlrquejaimeParser::Nom_var);
      setState(247);
      match(antlrquejaimeParser::T__14);
      setState(248);
      parametre();
      setState(249);
      match(antlrquejaimeParser::T__15);
      setState(250);
      match(antlrquejaimeParser::T__38);
      setState(254);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::Type_var) {
        setState(251);
        declaration();
        setState(256);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(257);
      bloc();
      setState(258);
      match(antlrquejaimeParser::T__39);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<antlrquejaimeParser::Fonction_sansparametreContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(260);
      match(antlrquejaimeParser::Type_fonction);
      setState(261);
      match(antlrquejaimeParser::Nom_var);
      setState(262);
      match(antlrquejaimeParser::T__14);
      setState(263);
      match(antlrquejaimeParser::T__15);
      setState(264);
      match(antlrquejaimeParser::T__38);
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::Type_var) {
        setState(265);
        declaration();
        setState(270);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(271);
      bloc();
      setState(272);
      match(antlrquejaimeParser::T__39);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<antlrquejaimeParser::Fonction_parametrevoidContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(274);
      match(antlrquejaimeParser::Type_fonction);
      setState(275);
      match(antlrquejaimeParser::Nom_var);
      setState(276);
      match(antlrquejaimeParser::T__14);
      setState(277);
      match(antlrquejaimeParser::T__40);
      setState(278);
      match(antlrquejaimeParser::T__15);
      setState(279);
      match(antlrquejaimeParser::T__38);
      setState(283);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::Type_var) {
        setState(280);
        declaration();
        setState(285);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(286);
      bloc();
      setState(287);
      match(antlrquejaimeParser::T__39);
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

//----------------- ParametreContext ------------------------------------------------------------------

antlrquejaimeParser::ParametreContext::ParametreContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::ParametreContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleParametre;
}

void antlrquejaimeParser::ParametreContext::copyFrom(ParametreContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Parametre_tableauContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Parametre_tableauContext::Type_var() {
  return getToken(antlrquejaimeParser::Type_var, 0);
}

tree::TerminalNode* antlrquejaimeParser::Parametre_tableauContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Parametre_tableauContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::Parametre_tableauContext::Parametre_tableauContext(ParametreContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Parametre_tableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitParametre_tableau(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Parametre_normalContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Parametre_normalContext::Type_var() {
  return getToken(antlrquejaimeParser::Type_var, 0);
}

tree::TerminalNode* antlrquejaimeParser::Parametre_normalContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::Parametre1Context* antlrquejaimeParser::Parametre_normalContext::parametre1() {
  return getRuleContext<antlrquejaimeParser::Parametre1Context>(0);
}

antlrquejaimeParser::Parametre_normalContext::Parametre_normalContext(ParametreContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Parametre_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitParametre_normal(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::ParametreContext* antlrquejaimeParser::parametre() {
  ParametreContext *_localctx = _tracker.createInstance<ParametreContext>(_ctx, getState());
  enterRule(_localctx, 24, antlrquejaimeParser::RuleParametre);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(300);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ParametreContext *>(_tracker.createInstance<antlrquejaimeParser::Parametre_normalContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(291);
      match(antlrquejaimeParser::Type_var);
      setState(292);
      match(antlrquejaimeParser::Nom_var);
      setState(293);
      parametre1();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ParametreContext *>(_tracker.createInstance<antlrquejaimeParser::Parametre_tableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(294);
      match(antlrquejaimeParser::Type_var);
      setState(295);
      match(antlrquejaimeParser::Nom_var);
      setState(296);
      match(antlrquejaimeParser::T__0);
      setState(297);
      expr(0);
      setState(298);
      match(antlrquejaimeParser::T__1);
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

//----------------- Parametre1Context ------------------------------------------------------------------

antlrquejaimeParser::Parametre1Context::Parametre1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::Parametre1Context::getRuleIndex() const {
  return antlrquejaimeParser::RuleParametre1;
}

void antlrquejaimeParser::Parametre1Context::copyFrom(Parametre1Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Parametre1_normalContext ------------------------------------------------------------------

antlrquejaimeParser::ParametreContext* antlrquejaimeParser::Parametre1_normalContext::parametre() {
  return getRuleContext<antlrquejaimeParser::ParametreContext>(0);
}

antlrquejaimeParser::Parametre1_normalContext::Parametre1_normalContext(Parametre1Context *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Parametre1_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitParametre1_normal(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::Parametre1Context* antlrquejaimeParser::parametre1() {
  Parametre1Context *_localctx = _tracker.createInstance<Parametre1Context>(_ctx, getState());
  enterRule(_localctx, 26, antlrquejaimeParser::RuleParametre1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Parametre1Context *>(_tracker.createInstance<antlrquejaimeParser::Parametre1_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(304);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == antlrquejaimeParser::T__37) {
      setState(302);
      match(antlrquejaimeParser::T__37);
      setState(303);
      parametre();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainContext ------------------------------------------------------------------

antlrquejaimeParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::MainContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleMain;
}

void antlrquejaimeParser::MainContext::copyFrom(MainContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Main_parametrevoidContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Main_parametrevoidContext::Type_fonction() {
  return getToken(antlrquejaimeParser::Type_fonction, 0);
}

tree::TerminalNode* antlrquejaimeParser::Main_parametrevoidContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::Main_parametrevoidContext::bloc() {
  return getRuleContext<antlrquejaimeParser::BlocContext>(0);
}

antlrquejaimeParser::ParametreContext* antlrquejaimeParser::Main_parametrevoidContext::parametre() {
  return getRuleContext<antlrquejaimeParser::ParametreContext>(0);
}

std::vector<antlrquejaimeParser::DeclarationContext *> antlrquejaimeParser::Main_parametrevoidContext::declaration() {
  return getRuleContexts<antlrquejaimeParser::DeclarationContext>();
}

antlrquejaimeParser::DeclarationContext* antlrquejaimeParser::Main_parametrevoidContext::declaration(size_t i) {
  return getRuleContext<antlrquejaimeParser::DeclarationContext>(i);
}

antlrquejaimeParser::Main_parametrevoidContext::Main_parametrevoidContext(MainContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Main_parametrevoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitMain_parametrevoid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Main_sansparametreContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Main_sansparametreContext::Type_fonction() {
  return getToken(antlrquejaimeParser::Type_fonction, 0);
}

tree::TerminalNode* antlrquejaimeParser::Main_sansparametreContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::Main_sansparametreContext::bloc() {
  return getRuleContext<antlrquejaimeParser::BlocContext>(0);
}

std::vector<antlrquejaimeParser::DeclarationContext *> antlrquejaimeParser::Main_sansparametreContext::declaration() {
  return getRuleContexts<antlrquejaimeParser::DeclarationContext>();
}

antlrquejaimeParser::DeclarationContext* antlrquejaimeParser::Main_sansparametreContext::declaration(size_t i) {
  return getRuleContext<antlrquejaimeParser::DeclarationContext>(i);
}

antlrquejaimeParser::Main_sansparametreContext::Main_sansparametreContext(MainContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Main_sansparametreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitMain_sansparametre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Main_avecparametreContext ------------------------------------------------------------------

tree::TerminalNode* antlrquejaimeParser::Main_avecparametreContext::Type_fonction() {
  return getToken(antlrquejaimeParser::Type_fonction, 0);
}

tree::TerminalNode* antlrquejaimeParser::Main_avecparametreContext::Nom_var() {
  return getToken(antlrquejaimeParser::Nom_var, 0);
}

antlrquejaimeParser::ParametreContext* antlrquejaimeParser::Main_avecparametreContext::parametre() {
  return getRuleContext<antlrquejaimeParser::ParametreContext>(0);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::Main_avecparametreContext::bloc() {
  return getRuleContext<antlrquejaimeParser::BlocContext>(0);
}

std::vector<antlrquejaimeParser::DeclarationContext *> antlrquejaimeParser::Main_avecparametreContext::declaration() {
  return getRuleContexts<antlrquejaimeParser::DeclarationContext>();
}

antlrquejaimeParser::DeclarationContext* antlrquejaimeParser::Main_avecparametreContext::declaration(size_t i) {
  return getRuleContext<antlrquejaimeParser::DeclarationContext>(i);
}

antlrquejaimeParser::Main_avecparametreContext::Main_avecparametreContext(MainContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Main_avecparametreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitMain_avecparametre(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::MainContext* antlrquejaimeParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 28, antlrquejaimeParser::RuleMain);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(351);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<MainContext *>(_tracker.createInstance<antlrquejaimeParser::Main_avecparametreContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(306);
      match(antlrquejaimeParser::Type_fonction);
      setState(307);
      match(antlrquejaimeParser::Nom_var);
      setState(308);
      match(antlrquejaimeParser::T__14);
      setState(309);
      parametre();
      setState(310);
      match(antlrquejaimeParser::T__15);
      setState(311);
      match(antlrquejaimeParser::T__38);
      setState(315);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::Type_var) {
        setState(312);
        declaration();
        setState(317);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(318);
      bloc();
      setState(319);
      match(antlrquejaimeParser::T__39);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<MainContext *>(_tracker.createInstance<antlrquejaimeParser::Main_sansparametreContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(321);
      match(antlrquejaimeParser::Type_fonction);
      setState(322);
      match(antlrquejaimeParser::Nom_var);
      setState(323);
      match(antlrquejaimeParser::T__14);
      setState(324);
      match(antlrquejaimeParser::T__15);
      setState(325);
      match(antlrquejaimeParser::T__38);
      setState(329);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::Type_var) {
        setState(326);
        declaration();
        setState(331);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(332);
      bloc();
      setState(333);
      match(antlrquejaimeParser::T__39);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<MainContext *>(_tracker.createInstance<antlrquejaimeParser::Main_parametrevoidContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(335);
      match(antlrquejaimeParser::Type_fonction);
      setState(336);
      match(antlrquejaimeParser::Nom_var);
      setState(337);
      match(antlrquejaimeParser::T__14);
      setState(338);
      match(antlrquejaimeParser::T__40);
      setState(339);
      match(antlrquejaimeParser::T__15);
      setState(340);
      match(antlrquejaimeParser::T__38);
      setState(344);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == antlrquejaimeParser::Type_var) {
        setState(341);
        declaration();
        setState(346);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(347);
      bloc();
      setState(348);
      match(antlrquejaimeParser::T__39);
      setState(349);
      parametre();
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

//----------------- Structure_ifContext ------------------------------------------------------------------

antlrquejaimeParser::Structure_ifContext::Structure_ifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::Structure_ifContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleStructure_if;
}

void antlrquejaimeParser::Structure_ifContext::copyFrom(Structure_ifContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Structureif_normalContext ------------------------------------------------------------------

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Structureif_normalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::ClauseContext* antlrquejaimeParser::Structureif_normalContext::clause() {
  return getRuleContext<antlrquejaimeParser::ClauseContext>(0);
}

antlrquejaimeParser::Structureif_normalContext::Structureif_normalContext(Structure_ifContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Structureif_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitStructureif_normal(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::Structure_ifContext* antlrquejaimeParser::structure_if() {
  Structure_ifContext *_localctx = _tracker.createInstance<Structure_ifContext>(_ctx, getState());
  enterRule(_localctx, 30, antlrquejaimeParser::RuleStructure_if);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Structure_ifContext *>(_tracker.createInstance<antlrquejaimeParser::Structureif_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(353);
    match(antlrquejaimeParser::T__41);
    setState(354);
    match(antlrquejaimeParser::T__14);
    setState(355);
    expr(0);
    setState(356);
    match(antlrquejaimeParser::T__15);
    setState(357);
    clause();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClauseContext ------------------------------------------------------------------

antlrquejaimeParser::ClauseContext::ClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::ClauseContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleClause;
}

void antlrquejaimeParser::ClauseContext::copyFrom(ClauseContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Clause_normalContext ------------------------------------------------------------------

antlrquejaimeParser::Else_Context* antlrquejaimeParser::Clause_normalContext::else_() {
  return getRuleContext<antlrquejaimeParser::Else_Context>(0);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::Clause_normalContext::bloc() {
  return getRuleContext<antlrquejaimeParser::BlocContext>(0);
}

antlrquejaimeParser::InstructionContext* antlrquejaimeParser::Clause_normalContext::instruction() {
  return getRuleContext<antlrquejaimeParser::InstructionContext>(0);
}

antlrquejaimeParser::Clause_normalContext::Clause_normalContext(ClauseContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Clause_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitClause_normal(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::ClauseContext* antlrquejaimeParser::clause() {
  ClauseContext *_localctx = _tracker.createInstance<ClauseContext>(_ctx, getState());
  enterRule(_localctx, 32, antlrquejaimeParser::RuleClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<ClauseContext *>(_tracker.createInstance<antlrquejaimeParser::Clause_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(364);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case antlrquejaimeParser::T__38: {
        setState(359);
        match(antlrquejaimeParser::T__38);
        setState(360);
        bloc();
        setState(361);
        match(antlrquejaimeParser::T__39);
        break;
      }

      case antlrquejaimeParser::T__14:
      case antlrquejaimeParser::T__16:
      case antlrquejaimeParser::T__17:
      case antlrquejaimeParser::T__34:
      case antlrquejaimeParser::T__36:
      case antlrquejaimeParser::T__41:
      case antlrquejaimeParser::T__43:
      case antlrquejaimeParser::Nom_var:
      case antlrquejaimeParser::NOMBRE:
      case antlrquejaimeParser::CHAR: {
        setState(363);
        instruction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(366);
    else_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_Context ------------------------------------------------------------------

antlrquejaimeParser::Else_Context::Else_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::Else_Context::getRuleIndex() const {
  return antlrquejaimeParser::RuleElse_;
}

void antlrquejaimeParser::Else_Context::copyFrom(Else_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Else_normalContext ------------------------------------------------------------------

std::vector<antlrquejaimeParser::BlocContext *> antlrquejaimeParser::Else_normalContext::bloc() {
  return getRuleContexts<antlrquejaimeParser::BlocContext>();
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::Else_normalContext::bloc(size_t i) {
  return getRuleContext<antlrquejaimeParser::BlocContext>(i);
}

std::vector<antlrquejaimeParser::InstructionContext *> antlrquejaimeParser::Else_normalContext::instruction() {
  return getRuleContexts<antlrquejaimeParser::InstructionContext>();
}

antlrquejaimeParser::InstructionContext* antlrquejaimeParser::Else_normalContext::instruction(size_t i) {
  return getRuleContext<antlrquejaimeParser::InstructionContext>(i);
}

antlrquejaimeParser::Else_normalContext::Else_normalContext(Else_Context *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Else_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitElse_normal(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::Else_Context* antlrquejaimeParser::else_() {
  Else_Context *_localctx = _tracker.createInstance<Else_Context>(_ctx, getState());
  enterRule(_localctx, 34, antlrquejaimeParser::RuleElse_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    _localctx = dynamic_cast<Else_Context *>(_tracker.createInstance<antlrquejaimeParser::Else_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(378);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(368);
        match(antlrquejaimeParser::T__42);
        setState(374);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case antlrquejaimeParser::T__38: {
            setState(369);
            match(antlrquejaimeParser::T__38);
            setState(370);
            bloc();
            setState(371);
            match(antlrquejaimeParser::T__39);
            break;
          }

          case antlrquejaimeParser::T__14:
          case antlrquejaimeParser::T__16:
          case antlrquejaimeParser::T__17:
          case antlrquejaimeParser::T__34:
          case antlrquejaimeParser::T__36:
          case antlrquejaimeParser::T__41:
          case antlrquejaimeParser::T__43:
          case antlrquejaimeParser::Nom_var:
          case antlrquejaimeParser::NOMBRE:
          case antlrquejaimeParser::CHAR: {
            setState(373);
            instruction();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(380);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Structure_whileContext ------------------------------------------------------------------

antlrquejaimeParser::Structure_whileContext::Structure_whileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t antlrquejaimeParser::Structure_whileContext::getRuleIndex() const {
  return antlrquejaimeParser::RuleStructure_while;
}

void antlrquejaimeParser::Structure_whileContext::copyFrom(Structure_whileContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Structurewhile_normalContext ------------------------------------------------------------------

antlrquejaimeParser::ExprContext* antlrquejaimeParser::Structurewhile_normalContext::expr() {
  return getRuleContext<antlrquejaimeParser::ExprContext>(0);
}

antlrquejaimeParser::BlocContext* antlrquejaimeParser::Structurewhile_normalContext::bloc() {
  return getRuleContext<antlrquejaimeParser::BlocContext>(0);
}

antlrquejaimeParser::InstructionContext* antlrquejaimeParser::Structurewhile_normalContext::instruction() {
  return getRuleContext<antlrquejaimeParser::InstructionContext>(0);
}

antlrquejaimeParser::Structurewhile_normalContext::Structurewhile_normalContext(Structure_whileContext *ctx) { copyFrom(ctx); }

antlrcpp::Any antlrquejaimeParser::Structurewhile_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<antlrquejaimeVisitor*>(visitor))
    return parserVisitor->visitStructurewhile_normal(this);
  else
    return visitor->visitChildren(this);
}
antlrquejaimeParser::Structure_whileContext* antlrquejaimeParser::structure_while() {
  Structure_whileContext *_localctx = _tracker.createInstance<Structure_whileContext>(_ctx, getState());
  enterRule(_localctx, 36, antlrquejaimeParser::RuleStructure_while);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Structure_whileContext *>(_tracker.createInstance<antlrquejaimeParser::Structurewhile_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(381);
    match(antlrquejaimeParser::T__43);
    setState(382);
    match(antlrquejaimeParser::T__14);
    setState(383);
    expr(0);
    setState(384);
    match(antlrquejaimeParser::T__15);
    setState(390);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case antlrquejaimeParser::T__38: {
        setState(385);
        match(antlrquejaimeParser::T__38);
        setState(386);
        bloc();
        setState(387);
        match(antlrquejaimeParser::T__39);
        break;
      }

      case antlrquejaimeParser::T__14:
      case antlrquejaimeParser::T__16:
      case antlrquejaimeParser::T__17:
      case antlrquejaimeParser::T__34:
      case antlrquejaimeParser::T__36:
      case antlrquejaimeParser::T__41:
      case antlrquejaimeParser::T__43:
      case antlrquejaimeParser::Nom_var:
      case antlrquejaimeParser::NOMBRE:
      case antlrquejaimeParser::CHAR: {
        setState(389);
        instruction();
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

bool antlrquejaimeParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool antlrquejaimeParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 20);
    case 1: return precpred(_ctx, 19);
    case 2: return precpred(_ctx, 18);
    case 3: return precpred(_ctx, 17);
    case 4: return precpred(_ctx, 16);
    case 5: return precpred(_ctx, 15);
    case 6: return precpred(_ctx, 14);
    case 7: return precpred(_ctx, 13);
    case 8: return precpred(_ctx, 12);
    case 9: return precpred(_ctx, 11);
    case 10: return precpred(_ctx, 10);
    case 11: return precpred(_ctx, 9);
    case 12: return precpred(_ctx, 8);
    case 13: return precpred(_ctx, 7);
    case 14: return precpred(_ctx, 6);
    case 15: return precpred(_ctx, 5);
    case 16: return precpred(_ctx, 4);
    case 17: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> antlrquejaimeParser::_decisionToDFA;
atn::PredictionContextCache antlrquejaimeParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN antlrquejaimeParser::_atn;
std::vector<uint16_t> antlrquejaimeParser::_serializedATN;

std::vector<std::string> antlrquejaimeParser::_ruleNames = {
  "big", "programme", "variable", "aff", "affectation", "expr", "return_", 
  "break_", "instruction", "bloc", "declaration", "fonction", "parametre", 
  "parametre1", "main", "structure_if", "clause", "else_", "structure_while"
};

std::vector<std::string> antlrquejaimeParser::_literalNames = {
  "", "'['", "']'", "'++'", "'--'", "'='", "'&='", "'|='", "'+='", "'-='", 
  "'*='", "'/='", "'%='", "'<='", "'>='", "'('", "')'", "'~'", "'!'", "'*'", 
  "'/'", "'%'", "'+'", "'-'", "'<<'", "'>>'", "'&'", "'|'", "'^'", "'&&'", 
  "'||'", "'<'", "'>'", "'=='", "'!='", "'return'", "';'", "'break'", "','", 
  "'{'", "'}'", "'void'", "'if'", "'else_'", "'while'"
};

std::vector<std::string> antlrquejaimeParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "Nom_var", "Type_var", "Type_fonction", 
  "Include", "EspaceBlanc", "CommentaireBlock", "CommentaireLigne", "LETTRE", 
  "CHIFFRE", "SYMBOLE", "NOMBRE", "CHAR"
};

dfa::Vocabulary antlrquejaimeParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> antlrquejaimeParser::_tokenNames;

antlrquejaimeParser::Initializer::Initializer() {
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
    0x3, 0x3a, 0x18b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x2c, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x2f, 
    0xb, 0x3, 0x3, 0x3, 0x7, 0x3, 0x32, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x35, 
    0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3f, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x47, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x7b, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x8a, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0xc2, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0xc5, 
    0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xc9, 0xa, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xd7, 0xa, 0xa, 0x3, 0xb, 
    0x7, 0xb, 0xda, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xdd, 0xb, 0xb, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xe3, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0xe6, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xf6, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xff, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x102, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x10d, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x110, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0x11c, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x11f, 0xb, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x124, 0xa, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0x12f, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x133, 
    0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x7, 0x10, 0x13c, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 
    0x13f, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x14a, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0x14d, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x7, 0x10, 0x159, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x15c, 0xb, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x162, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x16f, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x179, 0xa, 0x13, 0x7, 0x13, 
    0x17b, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x17e, 0xb, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x5, 0x14, 0x189, 0xa, 0x14, 0x3, 0x14, 0x2, 0x3, 0xc, 
    0x15, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x2, 0x2, 0x2, 0x1b9, 0x2, 
    0x28, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x46, 0x3, 0x2, 0x2, 0x2, 0xa, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x89, 0x3, 0x2, 0x2, 0x2, 0xe, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x12, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xdb, 0x3, 0x2, 0x2, 0x2, 0x16, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x18, 0x123, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x132, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x161, 0x3, 0x2, 0x2, 0x2, 0x20, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x24, 0x17c, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x5, 0x4, 0x3, 0x2, 
    0x29, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2c, 0x5, 0x16, 0xc, 0x2, 0x2b, 
    0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x32, 0x5, 0x18, 
    0xd, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 
    0x34, 0x36, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x37, 0x5, 0x1e, 0x10, 0x2, 0x37, 0x5, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3f, 
    0x7, 0x2f, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x2f, 0x2, 0x2, 0x3a, 0x3b, 0x7, 
    0x3, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0xc, 0x7, 0x2, 0x3c, 0x3d, 0x7, 0x4, 
    0x2, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x47, 0x7, 0x2f, 0x2, 0x2, 0x41, 0x42, 0x7, 0x2f, 0x2, 0x2, 0x42, 
    0x43, 0x7, 0x3, 0x2, 0x2, 0x43, 0x44, 0x5, 0xc, 0x7, 0x2, 0x44, 0x45, 
    0x7, 0x4, 0x2, 0x2, 0x45, 0x47, 0x3, 0x2, 0x2, 0x2, 0x46, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x41, 0x3, 0x2, 0x2, 0x2, 0x47, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x49, 0x5, 0x6, 0x4, 0x2, 0x49, 0x4a, 0x7, 0x5, 0x2, 
    0x2, 0x4a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x5, 0x2, 0x2, 
    0x4c, 0x7b, 0x5, 0x6, 0x4, 0x2, 0x4d, 0x4e, 0x5, 0x6, 0x4, 0x2, 0x4e, 
    0x4f, 0x7, 0x6, 0x2, 0x2, 0x4f, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 
    0x7, 0x6, 0x2, 0x2, 0x51, 0x7b, 0x5, 0x6, 0x4, 0x2, 0x52, 0x53, 0x5, 
    0x8, 0x5, 0x2, 0x53, 0x54, 0x7, 0x7, 0x2, 0x2, 0x54, 0x55, 0x5, 0xc, 
    0x7, 0x2, 0x55, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 0x8, 0x5, 
    0x2, 0x57, 0x58, 0x7, 0x8, 0x2, 0x2, 0x58, 0x59, 0x5, 0xc, 0x7, 0x2, 
    0x59, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x5, 0x8, 0x5, 0x2, 0x5b, 
    0x5c, 0x7, 0x9, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0xc, 0x7, 0x2, 0x5d, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x8, 0x5, 0x2, 0x5f, 0x60, 0x7, 
    0xa, 0x2, 0x2, 0x60, 0x61, 0x5, 0xc, 0x7, 0x2, 0x61, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x63, 0x5, 0x8, 0x5, 0x2, 0x63, 0x64, 0x7, 0xb, 0x2, 
    0x2, 0x64, 0x65, 0x5, 0xc, 0x7, 0x2, 0x65, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x67, 0x5, 0x8, 0x5, 0x2, 0x67, 0x68, 0x7, 0xc, 0x2, 0x2, 0x68, 
    0x69, 0x5, 0xc, 0x7, 0x2, 0x69, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 
    0x5, 0x8, 0x5, 0x2, 0x6b, 0x6c, 0x7, 0xd, 0x2, 0x2, 0x6c, 0x6d, 0x5, 
    0xc, 0x7, 0x2, 0x6d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x8, 
    0x5, 0x2, 0x6f, 0x70, 0x7, 0xe, 0x2, 0x2, 0x70, 0x71, 0x5, 0xc, 0x7, 
    0x2, 0x71, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 0x8, 0x5, 0x2, 
    0x73, 0x74, 0x7, 0xf, 0x2, 0x2, 0x74, 0x75, 0x5, 0xc, 0x7, 0x2, 0x75, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x5, 0x8, 0x5, 0x2, 0x77, 0x78, 
    0x7, 0x10, 0x2, 0x2, 0x78, 0x79, 0x5, 0xc, 0x7, 0x2, 0x79, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x52, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x7a, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x66, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x72, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7b, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x7d, 0x8, 0x7, 0x1, 0x2, 0x7d, 0x8a, 0x7, 0x39, 0x2, 
    0x2, 0x7e, 0x8a, 0x7, 0x3a, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x11, 0x2, 0x2, 
    0x80, 0x81, 0x5, 0xc, 0x7, 0x2, 0x81, 0x82, 0x7, 0x12, 0x2, 0x2, 0x82, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x13, 0x2, 0x2, 0x84, 0x8a, 
    0x5, 0xc, 0x7, 0x18, 0x85, 0x86, 0x7, 0x14, 0x2, 0x2, 0x86, 0x8a, 0x5, 
    0xc, 0x7, 0x17, 0x87, 0x8a, 0x5, 0x6, 0x4, 0x2, 0x88, 0x8a, 0x5, 0x8, 
    0x5, 0x2, 0x89, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x89, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x89, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x89, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x85, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 
    0xc, 0x16, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x15, 0x2, 0x2, 0x8d, 0xc2, 0x5, 
    0xc, 0x7, 0x17, 0x8e, 0x8f, 0xc, 0x15, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x16, 
    0x2, 0x2, 0x90, 0xc2, 0x5, 0xc, 0x7, 0x16, 0x91, 0x92, 0xc, 0x14, 0x2, 
    0x2, 0x92, 0x93, 0x7, 0x17, 0x2, 0x2, 0x93, 0xc2, 0x5, 0xc, 0x7, 0x15, 
    0x94, 0x95, 0xc, 0x13, 0x2, 0x2, 0x95, 0x96, 0x7, 0x18, 0x2, 0x2, 0x96, 
    0xc2, 0x5, 0xc, 0x7, 0x14, 0x97, 0x98, 0xc, 0x12, 0x2, 0x2, 0x98, 0x99, 
    0x7, 0x19, 0x2, 0x2, 0x99, 0xc2, 0x5, 0xc, 0x7, 0x13, 0x9a, 0x9b, 0xc, 
    0x11, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x1a, 0x2, 0x2, 0x9c, 0xc2, 0x5, 0xc, 
    0x7, 0x12, 0x9d, 0x9e, 0xc, 0x10, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x1b, 0x2, 
    0x2, 0x9f, 0xc2, 0x5, 0xc, 0x7, 0x11, 0xa0, 0xa1, 0xc, 0xf, 0x2, 0x2, 
    0xa1, 0xa2, 0x7, 0x1c, 0x2, 0x2, 0xa2, 0xc2, 0x5, 0xc, 0x7, 0x10, 0xa3, 
    0xa4, 0xc, 0xe, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x1d, 0x2, 0x2, 0xa5, 0xc2, 
    0x5, 0xc, 0x7, 0xf, 0xa6, 0xa7, 0xc, 0xd, 0x2, 0x2, 0xa7, 0xa8, 0x7, 
    0x1e, 0x2, 0x2, 0xa8, 0xc2, 0x5, 0xc, 0x7, 0xe, 0xa9, 0xaa, 0xc, 0xc, 
    0x2, 0x2, 0xaa, 0xab, 0x7, 0x1f, 0x2, 0x2, 0xab, 0xc2, 0x5, 0xc, 0x7, 
    0xd, 0xac, 0xad, 0xc, 0xb, 0x2, 0x2, 0xad, 0xae, 0x7, 0x20, 0x2, 0x2, 
    0xae, 0xc2, 0x5, 0xc, 0x7, 0xc, 0xaf, 0xb0, 0xc, 0xa, 0x2, 0x2, 0xb0, 
    0xb1, 0x7, 0x21, 0x2, 0x2, 0xb1, 0xc2, 0x5, 0xc, 0x7, 0xb, 0xb2, 0xb3, 
    0xc, 0x9, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0xf, 0x2, 0x2, 0xb4, 0xc2, 0x5, 
    0xc, 0x7, 0xa, 0xb5, 0xb6, 0xc, 0x8, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x22, 
    0x2, 0x2, 0xb7, 0xc2, 0x5, 0xc, 0x7, 0x9, 0xb8, 0xb9, 0xc, 0x7, 0x2, 
    0x2, 0xb9, 0xba, 0x7, 0x10, 0x2, 0x2, 0xba, 0xc2, 0x5, 0xc, 0x7, 0x8, 
    0xbb, 0xbc, 0xc, 0x6, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x23, 0x2, 0x2, 0xbd, 
    0xc2, 0x5, 0xc, 0x7, 0x7, 0xbe, 0xbf, 0xc, 0x5, 0x2, 0x2, 0xbf, 0xc0, 
    0x7, 0x24, 0x2, 0x2, 0xc0, 0xc2, 0x5, 0xc, 0x7, 0x6, 0xc1, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0xc1, 0x8e, 0x3, 0x2, 0x2, 0x2, 0xc1, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0x94, 0x3, 0x2, 0x2, 0x2, 0xc1, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xc1, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0xc1, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xc1, 
    0xa6, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xac, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xb2, 0x3, 
    0x2, 0x2, 0x2, 0xc1, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xd, 0x3, 0x2, 0x2, 0x2, 0xc5, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc8, 0x7, 0x25, 0x2, 0x2, 0xc7, 0xc9, 
    0x5, 0xc, 0x7, 0x2, 0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x26, 
    0x2, 0x2, 0xcb, 0xf, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x27, 0x2, 
    0x2, 0xcd, 0xce, 0x7, 0x26, 0x2, 0x2, 0xce, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0xcf, 0xd7, 0x5, 0x20, 0x11, 0x2, 0xd0, 0xd7, 0x5, 0x26, 0x14, 0x2, 
    0xd1, 0xd2, 0x5, 0xc, 0x7, 0x2, 0xd2, 0xd3, 0x7, 0x26, 0x2, 0x2, 0xd3, 
    0xd7, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd7, 0x5, 0xe, 0x8, 0x2, 0xd5, 0xd7, 
    0x5, 0x10, 0x9, 0x2, 0xd6, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd0, 0x3, 
    0x2, 0x2, 0x2, 0xd6, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xda, 0x5, 0x12, 0xa, 0x2, 0xd9, 0xd8, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x15, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x7, 0x30, 0x2, 0x2, 0xdf, 0xe4, 0x7, 
    0x2f, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x28, 0x2, 0x2, 0xe1, 0xe3, 0x7, 0x2f, 
    0x2, 0x2, 0xe2, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe6, 0x3, 0x2, 0x2, 
    0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe5, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xf6, 0x7, 0x26, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x30, 0x2, 0x2, 0xe9, 0xea, 
    0x7, 0x2f, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x7, 0x2, 0x2, 0xeb, 0xec, 0x5, 
    0xc, 0x7, 0x2, 0xec, 0xed, 0x7, 0x26, 0x2, 0x2, 0xed, 0xf6, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0xef, 0x7, 0x30, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x2f, 0x2, 
    0x2, 0xf0, 0xf1, 0x7, 0x3, 0x2, 0x2, 0xf1, 0xf2, 0x5, 0xc, 0x7, 0x2, 
    0xf2, 0xf3, 0x7, 0x4, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x26, 0x2, 0x2, 0xf4, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xde, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xe8, 
    0x3, 0x2, 0x2, 0x2, 0xf5, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0x31, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x2f, 
    0x2, 0x2, 0xf9, 0xfa, 0x7, 0x11, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x1a, 0xe, 
    0x2, 0xfb, 0xfc, 0x7, 0x12, 0x2, 0x2, 0xfc, 0x100, 0x7, 0x29, 0x2, 0x2, 
    0xfd, 0xff, 0x5, 0x16, 0xc, 0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x101, 0x103, 0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 
    0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x5, 0x14, 0xb, 0x2, 0x104, 0x105, 
    0x7, 0x2a, 0x2, 0x2, 0x105, 0x124, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 
    0x7, 0x31, 0x2, 0x2, 0x107, 0x108, 0x7, 0x2f, 0x2, 0x2, 0x108, 0x109, 
    0x7, 0x11, 0x2, 0x2, 0x109, 0x10a, 0x7, 0x12, 0x2, 0x2, 0x10a, 0x10e, 
    0x7, 0x29, 0x2, 0x2, 0x10b, 0x10d, 0x5, 0x16, 0xc, 0x2, 0x10c, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 
    0x5, 0x14, 0xb, 0x2, 0x112, 0x113, 0x7, 0x2a, 0x2, 0x2, 0x113, 0x124, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x7, 0x31, 0x2, 0x2, 0x115, 0x116, 
    0x7, 0x2f, 0x2, 0x2, 0x116, 0x117, 0x7, 0x11, 0x2, 0x2, 0x117, 0x118, 
    0x7, 0x2b, 0x2, 0x2, 0x118, 0x119, 0x7, 0x12, 0x2, 0x2, 0x119, 0x11d, 
    0x7, 0x29, 0x2, 0x2, 0x11a, 0x11c, 0x5, 0x16, 0xc, 0x2, 0x11b, 0x11a, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11b, 
    0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x120, 
    0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 
    0x5, 0x14, 0xb, 0x2, 0x121, 0x122, 0x7, 0x2a, 0x2, 0x2, 0x122, 0x124, 
    0x3, 0x2, 0x2, 0x2, 0x123, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x123, 0x106, 0x3, 
    0x2, 0x2, 0x2, 0x123, 0x114, 0x3, 0x2, 0x2, 0x2, 0x124, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x126, 0x7, 0x30, 0x2, 0x2, 0x126, 0x127, 0x7, 0x2f, 
    0x2, 0x2, 0x127, 0x12f, 0x5, 0x1c, 0xf, 0x2, 0x128, 0x129, 0x7, 0x30, 
    0x2, 0x2, 0x129, 0x12a, 0x7, 0x2f, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x3, 
    0x2, 0x2, 0x12b, 0x12c, 0x5, 0xc, 0x7, 0x2, 0x12c, 0x12d, 0x7, 0x4, 
    0x2, 0x2, 0x12d, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x12e, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x130, 0x131, 0x7, 0x28, 0x2, 0x2, 0x131, 0x133, 0x5, 0x1a, 0xe, 
    0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 0x2, 
    0x2, 0x133, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x7, 0x31, 0x2, 
    0x2, 0x135, 0x136, 0x7, 0x2f, 0x2, 0x2, 0x136, 0x137, 0x7, 0x11, 0x2, 
    0x2, 0x137, 0x138, 0x5, 0x1a, 0xe, 0x2, 0x138, 0x139, 0x7, 0x12, 0x2, 
    0x2, 0x139, 0x13d, 0x7, 0x29, 0x2, 0x2, 0x13a, 0x13c, 0x5, 0x16, 0xc, 
    0x2, 0x13b, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13f, 0x3, 0x2, 0x2, 
    0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x140, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 
    0x2, 0x140, 0x141, 0x5, 0x14, 0xb, 0x2, 0x141, 0x142, 0x7, 0x2a, 0x2, 
    0x2, 0x142, 0x162, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x7, 0x31, 0x2, 
    0x2, 0x144, 0x145, 0x7, 0x2f, 0x2, 0x2, 0x145, 0x146, 0x7, 0x11, 0x2, 
    0x2, 0x146, 0x147, 0x7, 0x12, 0x2, 0x2, 0x147, 0x14b, 0x7, 0x29, 0x2, 
    0x2, 0x148, 0x14a, 0x5, 0x16, 0xc, 0x2, 0x149, 0x148, 0x3, 0x2, 0x2, 
    0x2, 0x14a, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 
    0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14e, 0x3, 0x2, 0x2, 
    0x2, 0x14d, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x5, 0x14, 0xb, 
    0x2, 0x14f, 0x150, 0x7, 0x2a, 0x2, 0x2, 0x150, 0x162, 0x3, 0x2, 0x2, 
    0x2, 0x151, 0x152, 0x7, 0x31, 0x2, 0x2, 0x152, 0x153, 0x7, 0x2f, 0x2, 
    0x2, 0x153, 0x154, 0x7, 0x11, 0x2, 0x2, 0x154, 0x155, 0x7, 0x2b, 0x2, 
    0x2, 0x155, 0x156, 0x7, 0x12, 0x2, 0x2, 0x156, 0x15a, 0x7, 0x29, 0x2, 
    0x2, 0x157, 0x159, 0x5, 0x16, 0xc, 0x2, 0x158, 0x157, 0x3, 0x2, 0x2, 
    0x2, 0x159, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x158, 0x3, 0x2, 0x2, 
    0x2, 0x15a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15d, 0x3, 0x2, 0x2, 
    0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x5, 0x14, 0xb, 
    0x2, 0x15e, 0x15f, 0x7, 0x2a, 0x2, 0x2, 0x15f, 0x160, 0x5, 0x1a, 0xe, 
    0x2, 0x160, 0x162, 0x3, 0x2, 0x2, 0x2, 0x161, 0x134, 0x3, 0x2, 0x2, 
    0x2, 0x161, 0x143, 0x3, 0x2, 0x2, 0x2, 0x161, 0x151, 0x3, 0x2, 0x2, 
    0x2, 0x162, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x7, 0x2c, 0x2, 
    0x2, 0x164, 0x165, 0x7, 0x11, 0x2, 0x2, 0x165, 0x166, 0x5, 0xc, 0x7, 
    0x2, 0x166, 0x167, 0x7, 0x12, 0x2, 0x2, 0x167, 0x168, 0x5, 0x22, 0x12, 
    0x2, 0x168, 0x21, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x7, 0x29, 0x2, 
    0x2, 0x16a, 0x16b, 0x5, 0x14, 0xb, 0x2, 0x16b, 0x16c, 0x7, 0x2a, 0x2, 
    0x2, 0x16c, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16f, 0x5, 0x12, 0xa, 
    0x2, 0x16e, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16d, 0x3, 0x2, 0x2, 
    0x2, 0x16f, 0x170, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x5, 0x24, 0x13, 
    0x2, 0x171, 0x23, 0x3, 0x2, 0x2, 0x2, 0x172, 0x178, 0x7, 0x2d, 0x2, 
    0x2, 0x173, 0x174, 0x7, 0x29, 0x2, 0x2, 0x174, 0x175, 0x5, 0x14, 0xb, 
    0x2, 0x175, 0x176, 0x7, 0x2a, 0x2, 0x2, 0x176, 0x179, 0x3, 0x2, 0x2, 
    0x2, 0x177, 0x179, 0x5, 0x12, 0xa, 0x2, 0x178, 0x173, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x177, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17b, 0x3, 0x2, 0x2, 
    0x2, 0x17a, 0x172, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17e, 0x3, 0x2, 0x2, 
    0x2, 0x17c, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x3, 0x2, 0x2, 
    0x2, 0x17d, 0x25, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17c, 0x3, 0x2, 0x2, 0x2, 
    0x17f, 0x180, 0x7, 0x2e, 0x2, 0x2, 0x180, 0x181, 0x7, 0x11, 0x2, 0x2, 
    0x181, 0x182, 0x5, 0xc, 0x7, 0x2, 0x182, 0x188, 0x7, 0x12, 0x2, 0x2, 
    0x183, 0x184, 0x7, 0x29, 0x2, 0x2, 0x184, 0x185, 0x5, 0x14, 0xb, 0x2, 
    0x185, 0x186, 0x7, 0x2a, 0x2, 0x2, 0x186, 0x189, 0x3, 0x2, 0x2, 0x2, 
    0x187, 0x189, 0x5, 0x12, 0xa, 0x2, 0x188, 0x183, 0x3, 0x2, 0x2, 0x2, 
    0x188, 0x187, 0x3, 0x2, 0x2, 0x2, 0x189, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1d, 
    0x2d, 0x33, 0x3e, 0x46, 0x7a, 0x89, 0xc1, 0xc3, 0xc8, 0xd6, 0xdb, 0xe4, 
    0xf5, 0x100, 0x10e, 0x11d, 0x123, 0x12e, 0x132, 0x13d, 0x14b, 0x15a, 
    0x161, 0x16e, 0x178, 0x17c, 0x188, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

antlrquejaimeParser::Initializer antlrquejaimeParser::_init;
