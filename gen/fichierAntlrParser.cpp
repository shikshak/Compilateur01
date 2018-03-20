
// Generated from C:/Users/heyhey/Desktop/4IF/Compilateur01/Compilateur01\fichierAntlr.g4 by ANTLR 4.7


#include "fichierAntlrVisitor.h"

#include "fichierAntlrParser.h"


using namespace antlrcpp;
using namespace antlr4;

fichierAntlrParser::fichierAntlrParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

fichierAntlrParser::~fichierAntlrParser() {
  delete _interpreter;
}

std::string fichierAntlrParser::getGrammarFileName() const {
  return "fichierAntlr.g4";
}

const std::vector<std::string>& fichierAntlrParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& fichierAntlrParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- BigContext ------------------------------------------------------------------

fichierAntlrParser::BigContext::BigContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fichierAntlrParser::ProgrammeContext* fichierAntlrParser::BigContext::programme() {
  return getRuleContext<fichierAntlrParser::ProgrammeContext>(0);
}


size_t fichierAntlrParser::BigContext::getRuleIndex() const {
  return fichierAntlrParser::RuleBig;
}

antlrcpp::Any fichierAntlrParser::BigContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitBig(this);
  else
    return visitor->visitChildren(this);
}

fichierAntlrParser::BigContext* fichierAntlrParser::big() {
  BigContext *_localctx = _tracker.createInstance<BigContext>(_ctx, getState());
  enterRule(_localctx, 0, fichierAntlrParser::RuleBig);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
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

fichierAntlrParser::ProgrammeContext::ProgrammeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::ProgrammeContext::getRuleIndex() const {
  return fichierAntlrParser::RuleProgramme;
}

void fichierAntlrParser::ProgrammeContext::copyFrom(ProgrammeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Programme_normalContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::DeclarationContext *> fichierAntlrParser::Programme_normalContext::declaration() {
  return getRuleContexts<fichierAntlrParser::DeclarationContext>();
}

fichierAntlrParser::DeclarationContext* fichierAntlrParser::Programme_normalContext::declaration(size_t i) {
  return getRuleContext<fichierAntlrParser::DeclarationContext>(i);
}

std::vector<fichierAntlrParser::FonctionContext *> fichierAntlrParser::Programme_normalContext::fonction() {
  return getRuleContexts<fichierAntlrParser::FonctionContext>();
}

fichierAntlrParser::FonctionContext* fichierAntlrParser::Programme_normalContext::fonction(size_t i) {
  return getRuleContext<fichierAntlrParser::FonctionContext>(i);
}

std::vector<fichierAntlrParser::MainContext *> fichierAntlrParser::Programme_normalContext::main() {
  return getRuleContexts<fichierAntlrParser::MainContext>();
}

fichierAntlrParser::MainContext* fichierAntlrParser::Programme_normalContext::main(size_t i) {
  return getRuleContext<fichierAntlrParser::MainContext>(i);
}

fichierAntlrParser::Programme_normalContext::Programme_normalContext(ProgrammeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Programme_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitProgramme_normal(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::ProgrammeContext* fichierAntlrParser::programme() {
  ProgrammeContext *_localctx = _tracker.createInstance<ProgrammeContext>(_ctx, getState());
  enterRule(_localctx, 2, fichierAntlrParser::RuleProgramme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    _localctx = dynamic_cast<ProgrammeContext *>(_tracker.createInstance<fichierAntlrParser::Programme_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(49);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(46);
        declaration(); 
      }
      setState(51);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(55);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(52);
        fonction(); 
      }
      setState(57);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__5)
      | (1ULL << fichierAntlrParser::T__46)
      | (1ULL << fichierAntlrParser::T__47)
      | (1ULL << fichierAntlrParser::T__48)
      | (1ULL << fichierAntlrParser::T__49))) != 0)) {
      setState(58);
      main();
      setState(63);
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

//----------------- MainContext ------------------------------------------------------------------

fichierAntlrParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::MainContext::getRuleIndex() const {
  return fichierAntlrParser::RuleMain;
}

void fichierAntlrParser::MainContext::copyFrom(MainContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Main_parametrevoidContext ------------------------------------------------------------------

fichierAntlrParser::Type_fonctionContext* fichierAntlrParser::Main_parametrevoidContext::type_fonction() {
  return getRuleContext<fichierAntlrParser::Type_fonctionContext>(0);
}

fichierAntlrParser::BlocContext* fichierAntlrParser::Main_parametrevoidContext::bloc() {
  return getRuleContext<fichierAntlrParser::BlocContext>(0);
}

std::vector<fichierAntlrParser::DeclarationContext *> fichierAntlrParser::Main_parametrevoidContext::declaration() {
  return getRuleContexts<fichierAntlrParser::DeclarationContext>();
}

fichierAntlrParser::DeclarationContext* fichierAntlrParser::Main_parametrevoidContext::declaration(size_t i) {
  return getRuleContext<fichierAntlrParser::DeclarationContext>(i);
}

fichierAntlrParser::Main_parametrevoidContext::Main_parametrevoidContext(MainContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Main_parametrevoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitMain_parametrevoid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Main_sansparametreContext ------------------------------------------------------------------

fichierAntlrParser::Type_fonctionContext* fichierAntlrParser::Main_sansparametreContext::type_fonction() {
  return getRuleContext<fichierAntlrParser::Type_fonctionContext>(0);
}

fichierAntlrParser::BlocContext* fichierAntlrParser::Main_sansparametreContext::bloc() {
  return getRuleContext<fichierAntlrParser::BlocContext>(0);
}

std::vector<fichierAntlrParser::DeclarationContext *> fichierAntlrParser::Main_sansparametreContext::declaration() {
  return getRuleContexts<fichierAntlrParser::DeclarationContext>();
}

fichierAntlrParser::DeclarationContext* fichierAntlrParser::Main_sansparametreContext::declaration(size_t i) {
  return getRuleContext<fichierAntlrParser::DeclarationContext>(i);
}

fichierAntlrParser::Main_sansparametreContext::Main_sansparametreContext(MainContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Main_sansparametreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitMain_sansparametre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Main_avecparametreContext ------------------------------------------------------------------

fichierAntlrParser::Type_fonctionContext* fichierAntlrParser::Main_avecparametreContext::type_fonction() {
  return getRuleContext<fichierAntlrParser::Type_fonctionContext>(0);
}

fichierAntlrParser::ParametreContext* fichierAntlrParser::Main_avecparametreContext::parametre() {
  return getRuleContext<fichierAntlrParser::ParametreContext>(0);
}

fichierAntlrParser::BlocContext* fichierAntlrParser::Main_avecparametreContext::bloc() {
  return getRuleContext<fichierAntlrParser::BlocContext>(0);
}

std::vector<fichierAntlrParser::DeclarationContext *> fichierAntlrParser::Main_avecparametreContext::declaration() {
  return getRuleContexts<fichierAntlrParser::DeclarationContext>();
}

fichierAntlrParser::DeclarationContext* fichierAntlrParser::Main_avecparametreContext::declaration(size_t i) {
  return getRuleContext<fichierAntlrParser::DeclarationContext>(i);
}

fichierAntlrParser::Main_avecparametreContext::Main_avecparametreContext(MainContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Main_avecparametreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitMain_avecparametre(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::MainContext* fichierAntlrParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 4, fichierAntlrParser::RuleMain);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(108);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<MainContext *>(_tracker.createInstance<fichierAntlrParser::Main_avecparametreContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(64);
      type_fonction();
      setState(65);
      match(fichierAntlrParser::T__0);
      setState(66);
      match(fichierAntlrParser::T__1);
      setState(67);
      parametre();
      setState(68);
      match(fichierAntlrParser::T__2);
      setState(69);
      match(fichierAntlrParser::T__3);
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
        | (1ULL << fichierAntlrParser::T__47)
        | (1ULL << fichierAntlrParser::T__48))) != 0)) {
        setState(70);
        declaration();
        setState(75);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(76);
      bloc();
      setState(77);
      match(fichierAntlrParser::T__4);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<MainContext *>(_tracker.createInstance<fichierAntlrParser::Main_sansparametreContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(79);
      type_fonction();
      setState(80);
      match(fichierAntlrParser::T__0);
      setState(81);
      match(fichierAntlrParser::T__1);
      setState(82);
      match(fichierAntlrParser::T__2);
      setState(83);
      match(fichierAntlrParser::T__3);
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
        | (1ULL << fichierAntlrParser::T__47)
        | (1ULL << fichierAntlrParser::T__48))) != 0)) {
        setState(84);
        declaration();
        setState(89);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(90);
      bloc();
      setState(91);
      match(fichierAntlrParser::T__4);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<MainContext *>(_tracker.createInstance<fichierAntlrParser::Main_parametrevoidContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(93);
      type_fonction();
      setState(94);
      match(fichierAntlrParser::T__0);
      setState(95);
      match(fichierAntlrParser::T__1);
      setState(96);
      match(fichierAntlrParser::T__5);
      setState(97);
      match(fichierAntlrParser::T__2);
      setState(98);
      match(fichierAntlrParser::T__3);
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
        | (1ULL << fichierAntlrParser::T__47)
        | (1ULL << fichierAntlrParser::T__48))) != 0)) {
        setState(99);
        declaration();
        setState(104);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(105);
      bloc();
      setState(106);
      match(fichierAntlrParser::T__4);
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

fichierAntlrParser::FonctionContext::FonctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::FonctionContext::getRuleIndex() const {
  return fichierAntlrParser::RuleFonction;
}

void fichierAntlrParser::FonctionContext::copyFrom(FonctionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Fonction_avecparametreContext ------------------------------------------------------------------

fichierAntlrParser::Type_fonctionContext* fichierAntlrParser::Fonction_avecparametreContext::type_fonction() {
  return getRuleContext<fichierAntlrParser::Type_fonctionContext>(0);
}

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Fonction_avecparametreContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

fichierAntlrParser::ParametreContext* fichierAntlrParser::Fonction_avecparametreContext::parametre() {
  return getRuleContext<fichierAntlrParser::ParametreContext>(0);
}

fichierAntlrParser::BlocContext* fichierAntlrParser::Fonction_avecparametreContext::bloc() {
  return getRuleContext<fichierAntlrParser::BlocContext>(0);
}

std::vector<fichierAntlrParser::DeclarationContext *> fichierAntlrParser::Fonction_avecparametreContext::declaration() {
  return getRuleContexts<fichierAntlrParser::DeclarationContext>();
}

fichierAntlrParser::DeclarationContext* fichierAntlrParser::Fonction_avecparametreContext::declaration(size_t i) {
  return getRuleContext<fichierAntlrParser::DeclarationContext>(i);
}

fichierAntlrParser::Fonction_avecparametreContext::Fonction_avecparametreContext(FonctionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Fonction_avecparametreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitFonction_avecparametre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Fonction_parametrevoidContext ------------------------------------------------------------------

fichierAntlrParser::Type_fonctionContext* fichierAntlrParser::Fonction_parametrevoidContext::type_fonction() {
  return getRuleContext<fichierAntlrParser::Type_fonctionContext>(0);
}

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Fonction_parametrevoidContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

fichierAntlrParser::BlocContext* fichierAntlrParser::Fonction_parametrevoidContext::bloc() {
  return getRuleContext<fichierAntlrParser::BlocContext>(0);
}

std::vector<fichierAntlrParser::DeclarationContext *> fichierAntlrParser::Fonction_parametrevoidContext::declaration() {
  return getRuleContexts<fichierAntlrParser::DeclarationContext>();
}

fichierAntlrParser::DeclarationContext* fichierAntlrParser::Fonction_parametrevoidContext::declaration(size_t i) {
  return getRuleContext<fichierAntlrParser::DeclarationContext>(i);
}

fichierAntlrParser::Fonction_parametrevoidContext::Fonction_parametrevoidContext(FonctionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Fonction_parametrevoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitFonction_parametrevoid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Fonction_sansparametreContext ------------------------------------------------------------------

fichierAntlrParser::Type_fonctionContext* fichierAntlrParser::Fonction_sansparametreContext::type_fonction() {
  return getRuleContext<fichierAntlrParser::Type_fonctionContext>(0);
}

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Fonction_sansparametreContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

fichierAntlrParser::BlocContext* fichierAntlrParser::Fonction_sansparametreContext::bloc() {
  return getRuleContext<fichierAntlrParser::BlocContext>(0);
}

std::vector<fichierAntlrParser::DeclarationContext *> fichierAntlrParser::Fonction_sansparametreContext::declaration() {
  return getRuleContexts<fichierAntlrParser::DeclarationContext>();
}

fichierAntlrParser::DeclarationContext* fichierAntlrParser::Fonction_sansparametreContext::declaration(size_t i) {
  return getRuleContext<fichierAntlrParser::DeclarationContext>(i);
}

fichierAntlrParser::Fonction_sansparametreContext::Fonction_sansparametreContext(FonctionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Fonction_sansparametreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitFonction_sansparametre(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::FonctionContext* fichierAntlrParser::fonction() {
  FonctionContext *_localctx = _tracker.createInstance<FonctionContext>(_ctx, getState());
  enterRule(_localctx, 6, fichierAntlrParser::RuleFonction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(154);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<fichierAntlrParser::Fonction_avecparametreContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(110);
      type_fonction();
      setState(111);
      nom_var();
      setState(112);
      match(fichierAntlrParser::T__1);
      setState(113);
      parametre();
      setState(114);
      match(fichierAntlrParser::T__2);
      setState(115);
      match(fichierAntlrParser::T__3);
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
        | (1ULL << fichierAntlrParser::T__47)
        | (1ULL << fichierAntlrParser::T__48))) != 0)) {
        setState(116);
        declaration();
        setState(121);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(122);
      bloc();
      setState(123);
      match(fichierAntlrParser::T__4);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<fichierAntlrParser::Fonction_sansparametreContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(125);
      type_fonction();
      setState(126);
      nom_var();
      setState(127);
      match(fichierAntlrParser::T__1);
      setState(128);
      match(fichierAntlrParser::T__2);
      setState(129);
      match(fichierAntlrParser::T__3);
      setState(133);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
        | (1ULL << fichierAntlrParser::T__47)
        | (1ULL << fichierAntlrParser::T__48))) != 0)) {
        setState(130);
        declaration();
        setState(135);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(136);
      bloc();
      setState(137);
      match(fichierAntlrParser::T__4);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<fichierAntlrParser::Fonction_parametrevoidContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(139);
      type_fonction();
      setState(140);
      nom_var();
      setState(141);
      match(fichierAntlrParser::T__1);
      setState(142);
      match(fichierAntlrParser::T__5);
      setState(143);
      match(fichierAntlrParser::T__2);
      setState(144);
      match(fichierAntlrParser::T__3);
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
        | (1ULL << fichierAntlrParser::T__47)
        | (1ULL << fichierAntlrParser::T__48))) != 0)) {
        setState(145);
        declaration();
        setState(150);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(151);
      bloc();
      setState(152);
      match(fichierAntlrParser::T__4);
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

fichierAntlrParser::ParametreContext::ParametreContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::ParametreContext::getRuleIndex() const {
  return fichierAntlrParser::RuleParametre;
}

void fichierAntlrParser::ParametreContext::copyFrom(ParametreContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Parametre_tableauContext ------------------------------------------------------------------

fichierAntlrParser::Type_varContext* fichierAntlrParser::Parametre_tableauContext::type_var() {
  return getRuleContext<fichierAntlrParser::Type_varContext>(0);
}

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Parametre_tableauContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Parametre_tableauContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Parametre_tableauContext::Parametre_tableauContext(ParametreContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Parametre_tableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitParametre_tableau(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Parametre_normalContext ------------------------------------------------------------------

fichierAntlrParser::Type_varContext* fichierAntlrParser::Parametre_normalContext::type_var() {
  return getRuleContext<fichierAntlrParser::Type_varContext>(0);
}

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Parametre_normalContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

fichierAntlrParser::Parametre1Context* fichierAntlrParser::Parametre_normalContext::parametre1() {
  return getRuleContext<fichierAntlrParser::Parametre1Context>(0);
}

fichierAntlrParser::Parametre_normalContext::Parametre_normalContext(ParametreContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Parametre_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitParametre_normal(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::ParametreContext* fichierAntlrParser::parametre() {
  ParametreContext *_localctx = _tracker.createInstance<ParametreContext>(_ctx, getState());
  enterRule(_localctx, 8, fichierAntlrParser::RuleParametre);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(166);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ParametreContext *>(_tracker.createInstance<fichierAntlrParser::Parametre_normalContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(156);
      type_var();
      setState(157);
      nom_var();
      setState(158);
      parametre1();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ParametreContext *>(_tracker.createInstance<fichierAntlrParser::Parametre_tableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(160);
      type_var();
      setState(161);
      nom_var();
      setState(162);
      match(fichierAntlrParser::T__6);
      setState(163);
      expr(0);
      setState(164);
      match(fichierAntlrParser::T__7);
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

fichierAntlrParser::Parametre1Context::Parametre1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::Parametre1Context::getRuleIndex() const {
  return fichierAntlrParser::RuleParametre1;
}

void fichierAntlrParser::Parametre1Context::copyFrom(Parametre1Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Parametre1_normalContext ------------------------------------------------------------------

fichierAntlrParser::ParametreContext* fichierAntlrParser::Parametre1_normalContext::parametre() {
  return getRuleContext<fichierAntlrParser::ParametreContext>(0);
}

fichierAntlrParser::Parametre1_normalContext::Parametre1_normalContext(Parametre1Context *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Parametre1_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitParametre1_normal(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::Parametre1Context* fichierAntlrParser::parametre1() {
  Parametre1Context *_localctx = _tracker.createInstance<Parametre1Context>(_ctx, getState());
  enterRule(_localctx, 10, fichierAntlrParser::RuleParametre1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Parametre1Context *>(_tracker.createInstance<fichierAntlrParser::Parametre1_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(170);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fichierAntlrParser::T__8) {
      setState(168);
      match(fichierAntlrParser::T__8);
      setState(169);
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

//----------------- VariableContext ------------------------------------------------------------------

fichierAntlrParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::VariableContext::getRuleIndex() const {
  return fichierAntlrParser::RuleVariable;
}

void fichierAntlrParser::VariableContext::copyFrom(VariableContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Variable_simpleContext ------------------------------------------------------------------

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Variable_simpleContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

fichierAntlrParser::Variable_simpleContext::Variable_simpleContext(VariableContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Variable_simpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitVariable_simple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Variable_tableauContext ------------------------------------------------------------------

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Variable_tableauContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Variable_tableauContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Variable_tableauContext::Variable_tableauContext(VariableContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Variable_tableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitVariable_tableau(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::VariableContext* fichierAntlrParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 12, fichierAntlrParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(178);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VariableContext *>(_tracker.createInstance<fichierAntlrParser::Variable_simpleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(172);
      nom_var();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VariableContext *>(_tracker.createInstance<fichierAntlrParser::Variable_tableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(173);
      nom_var();
      setState(174);
      match(fichierAntlrParser::T__6);
      setState(175);
      expr(0);
      setState(176);
      match(fichierAntlrParser::T__7);
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

fichierAntlrParser::AffContext::AffContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::AffContext::getRuleIndex() const {
  return fichierAntlrParser::RuleAff;
}

void fichierAntlrParser::AffContext::copyFrom(AffContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Aff_variableContext ------------------------------------------------------------------

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Aff_variableContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

fichierAntlrParser::Aff_variableContext::Aff_variableContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Aff_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAff_variable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Aff_tableauContext ------------------------------------------------------------------

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Aff_tableauContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Aff_tableauContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Aff_tableauContext::Aff_tableauContext(AffContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Aff_tableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAff_tableau(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::AffContext* fichierAntlrParser::aff() {
  AffContext *_localctx = _tracker.createInstance<AffContext>(_ctx, getState());
  enterRule(_localctx, 14, fichierAntlrParser::RuleAff);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(186);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<fichierAntlrParser::Aff_variableContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(180);
      nom_var();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<fichierAntlrParser::Aff_tableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(181);
      nom_var();
      setState(182);
      match(fichierAntlrParser::T__6);
      setState(183);
      expr(0);
      setState(184);
      match(fichierAntlrParser::T__7);
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

fichierAntlrParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::AffectationContext::getRuleIndex() const {
  return fichierAntlrParser::RuleAffectation;
}

void fichierAntlrParser::AffectationContext::copyFrom(AffectationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Affectation_plusegalContext ------------------------------------------------------------------

fichierAntlrParser::AffContext* fichierAntlrParser::Affectation_plusegalContext::aff() {
  return getRuleContext<fichierAntlrParser::AffContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Affectation_plusegalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Affectation_plusegalContext::Affectation_plusegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_plusegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_plusegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_plusplusavantContext ------------------------------------------------------------------

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_plusplusavantContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
}

fichierAntlrParser::Affectation_plusplusavantContext::Affectation_plusplusavantContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_plusplusavantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_plusplusavant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_ouegalContext ------------------------------------------------------------------

fichierAntlrParser::AffContext* fichierAntlrParser::Affectation_ouegalContext::aff() {
  return getRuleContext<fichierAntlrParser::AffContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Affectation_ouegalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Affectation_ouegalContext::Affectation_ouegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_ouegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_ouegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_supegalContext ------------------------------------------------------------------

fichierAntlrParser::AffContext* fichierAntlrParser::Affectation_supegalContext::aff() {
  return getRuleContext<fichierAntlrParser::AffContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Affectation_supegalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Affectation_supegalContext::Affectation_supegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_supegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_supegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_plusplusapresContext ------------------------------------------------------------------

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_plusplusapresContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
}

fichierAntlrParser::Affectation_plusplusapresContext::Affectation_plusplusapresContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_plusplusapresContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_plusplusapres(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_divegalContext ------------------------------------------------------------------

fichierAntlrParser::AffContext* fichierAntlrParser::Affectation_divegalContext::aff() {
  return getRuleContext<fichierAntlrParser::AffContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Affectation_divegalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Affectation_divegalContext::Affectation_divegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_divegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_divegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_foisegalContext ------------------------------------------------------------------

fichierAntlrParser::AffContext* fichierAntlrParser::Affectation_foisegalContext::aff() {
  return getRuleContext<fichierAntlrParser::AffContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Affectation_foisegalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Affectation_foisegalContext::Affectation_foisegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_foisegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_foisegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_moinsmoinsapresContext ------------------------------------------------------------------

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_moinsmoinsapresContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
}

fichierAntlrParser::Affectation_moinsmoinsapresContext::Affectation_moinsmoinsapresContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_moinsmoinsapresContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_moinsmoinsapres(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_pourcentegalContext ------------------------------------------------------------------

fichierAntlrParser::AffContext* fichierAntlrParser::Affectation_pourcentegalContext::aff() {
  return getRuleContext<fichierAntlrParser::AffContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Affectation_pourcentegalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Affectation_pourcentegalContext::Affectation_pourcentegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_pourcentegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_pourcentegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_egalContext ------------------------------------------------------------------

fichierAntlrParser::AffContext* fichierAntlrParser::Affectation_egalContext::aff() {
  return getRuleContext<fichierAntlrParser::AffContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Affectation_egalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Affectation_egalContext::Affectation_egalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_egalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_egal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_etegalContext ------------------------------------------------------------------

fichierAntlrParser::AffContext* fichierAntlrParser::Affectation_etegalContext::aff() {
  return getRuleContext<fichierAntlrParser::AffContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Affectation_etegalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Affectation_etegalContext::Affectation_etegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_etegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_etegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_moinsmoinsavantContext ------------------------------------------------------------------

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_moinsmoinsavantContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
}

fichierAntlrParser::Affectation_moinsmoinsavantContext::Affectation_moinsmoinsavantContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_moinsmoinsavantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_moinsmoinsavant(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_infegalContext ------------------------------------------------------------------

fichierAntlrParser::AffContext* fichierAntlrParser::Affectation_infegalContext::aff() {
  return getRuleContext<fichierAntlrParser::AffContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Affectation_infegalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Affectation_infegalContext::Affectation_infegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_infegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_infegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Affectation_moinsegalContext ------------------------------------------------------------------

fichierAntlrParser::AffContext* fichierAntlrParser::Affectation_moinsegalContext::aff() {
  return getRuleContext<fichierAntlrParser::AffContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Affectation_moinsegalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Affectation_moinsegalContext::Affectation_moinsegalContext(AffectationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Affectation_moinsegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitAffectation_moinsegal(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::AffectationContext* fichierAntlrParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 16, fichierAntlrParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(238);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_plusplusapresContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(188);
      variable();
      setState(189);
      match(fichierAntlrParser::T__9);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_plusplusavantContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(191);
      match(fichierAntlrParser::T__9);
      setState(192);
      variable();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_moinsmoinsapresContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(193);
      variable();
      setState(194);
      match(fichierAntlrParser::T__10);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_moinsmoinsavantContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(196);
      match(fichierAntlrParser::T__10);
      setState(197);
      variable();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_egalContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(198);
      aff();
      setState(199);
      match(fichierAntlrParser::T__11);
      setState(200);
      expr(0);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_etegalContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(202);
      aff();
      setState(203);
      match(fichierAntlrParser::T__12);
      setState(204);
      expr(0);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_ouegalContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(206);
      aff();
      setState(207);
      match(fichierAntlrParser::T__13);
      setState(208);
      expr(0);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_plusegalContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(210);
      aff();
      setState(211);
      match(fichierAntlrParser::T__14);
      setState(212);
      expr(0);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_moinsegalContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(214);
      aff();
      setState(215);
      match(fichierAntlrParser::T__15);
      setState(216);
      expr(0);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_foisegalContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(218);
      aff();
      setState(219);
      match(fichierAntlrParser::T__16);
      setState(220);
      expr(0);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_divegalContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(222);
      aff();
      setState(223);
      match(fichierAntlrParser::T__17);
      setState(224);
      expr(0);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_pourcentegalContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(226);
      aff();
      setState(227);
      match(fichierAntlrParser::T__18);
      setState(228);
      expr(0);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_infegalContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(230);
      aff();
      setState(231);
      match(fichierAntlrParser::T__19);
      setState(232);
      expr(0);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_supegalContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(234);
      aff();
      setState(235);
      match(fichierAntlrParser::T__20);
      setState(236);
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

fichierAntlrParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::ExprContext::getRuleIndex() const {
  return fichierAntlrParser::RuleExpr;
}

void fichierAntlrParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_infegalContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_infegalContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_infegalContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_infegalContext::Expr_infegalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_infegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_infegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_nombreContext ------------------------------------------------------------------

tree::TerminalNode* fichierAntlrParser::Expr_nombreContext::NOMBRE() {
  return getToken(fichierAntlrParser::NOMBRE, 0);
}

fichierAntlrParser::Expr_nombreContext::Expr_nombreContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_nombreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_nombre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_diffegalContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_diffegalContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_diffegalContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_diffegalContext::Expr_diffegalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_diffegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_diffegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_vagueContext ------------------------------------------------------------------

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_vagueContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Expr_vagueContext::Expr_vagueContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_vagueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_vague(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_affContext ------------------------------------------------------------------

fichierAntlrParser::AffContext* fichierAntlrParser::Expr_affContext::aff() {
  return getRuleContext<fichierAntlrParser::AffContext>(0);
}

fichierAntlrParser::Expr_affContext::Expr_affContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_affContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_aff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_etContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_etContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_etContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_etContext::Expr_etContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_etContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_et(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_infContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_infContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_infContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_infContext::Expr_infContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_infContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_inf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_parentheseContext ------------------------------------------------------------------

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_parentheseContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Expr_parentheseContext::Expr_parentheseContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_parentheseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_parenthese(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_variabkeContext ------------------------------------------------------------------

fichierAntlrParser::VariableContext* fichierAntlrParser::Expr_variabkeContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
}

fichierAntlrParser::Expr_variabkeContext::Expr_variabkeContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_variabkeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_variabke(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_additionContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_additionContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_additionContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_additionContext::Expr_additionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_additionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_addition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_ouContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_ouContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_ouContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_ouContext::Expr_ouContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_ouContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_ou(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_supContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_supContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_supContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_supContext::Expr_supContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_supContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_sup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_etetContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_etetContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_etetContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_etetContext::Expr_etetContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_etetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_etet(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_infinfContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_infinfContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_infinfContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_infinfContext::Expr_infinfContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_infinfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_infinf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_fonctionContext ------------------------------------------------------------------

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Expr_fonctionContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_fonctionContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_fonctionContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_fonctionContext::Expr_fonctionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_fonctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_fonction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_charContext ------------------------------------------------------------------

tree::TerminalNode* fichierAntlrParser::Expr_charContext::CHAR() {
  return getToken(fichierAntlrParser::CHAR, 0);
}

fichierAntlrParser::Expr_charContext::Expr_charContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_charContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_char(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_egalegalContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_egalegalContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_egalegalContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_egalegalContext::Expr_egalegalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_egalegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_egalegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_chiffreContext ------------------------------------------------------------------

tree::TerminalNode* fichierAntlrParser::Expr_chiffreContext::CHIFFRE() {
  return getToken(fichierAntlrParser::CHIFFRE, 0);
}

fichierAntlrParser::Expr_chiffreContext::Expr_chiffreContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_chiffreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_chiffre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_ououContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_ououContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_ououContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_ououContext::Expr_ououContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_ououContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_ouou(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_divisionContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_divisionContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_divisionContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_divisionContext::Expr_divisionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_divisionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_division(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_modContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_modContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_modContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_modContext::Expr_modContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_modContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_mod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_supegalContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_supegalContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_supegalContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_supegalContext::Expr_supegalContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_supegalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_supegal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_soustractionContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_soustractionContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_soustractionContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_soustractionContext::Expr_soustractionContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_soustractionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_soustraction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_affectationContext ------------------------------------------------------------------

fichierAntlrParser::AffectationContext* fichierAntlrParser::Expr_affectationContext::affectation() {
  return getRuleContext<fichierAntlrParser::AffectationContext>(0);
}

fichierAntlrParser::Expr_affectationContext::Expr_affectationContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_affectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_affectation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_exclamationContext ------------------------------------------------------------------

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_exclamationContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Expr_exclamationContext::Expr_exclamationContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_exclamationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_exclamation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_multiplicationContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_multiplicationContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_multiplicationContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_multiplicationContext::Expr_multiplicationContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_multiplicationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_multiplication(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_supsupContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_supsupContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_supsupContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_supsupContext::Expr_supsupContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_supsupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_supsup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_chapeauContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::ExprContext *> fichierAntlrParser::Expr_chapeauContext::expr() {
  return getRuleContexts<fichierAntlrParser::ExprContext>();
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Expr_chapeauContext::expr(size_t i) {
  return getRuleContext<fichierAntlrParser::ExprContext>(i);
}

fichierAntlrParser::Expr_chapeauContext::Expr_chapeauContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_chapeauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_chapeau(this);
  else
    return visitor->visitChildren(this);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::expr() {
   return expr(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  fichierAntlrParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  fichierAntlrParser::ExprContext *previousContext = _localctx;
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, fichierAntlrParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(269);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Expr_chiffreContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(241);
      match(fichierAntlrParser::CHIFFRE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Expr_nombreContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(242);
      match(fichierAntlrParser::NOMBRE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Expr_charContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(243);
      match(fichierAntlrParser::CHAR);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Expr_parentheseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(244);
      match(fichierAntlrParser::T__1);
      setState(245);
      expr(0);
      setState(246);
      match(fichierAntlrParser::T__2);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Expr_vagueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(248);
      match(fichierAntlrParser::T__21);
      setState(249);
      expr(24);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Expr_exclamationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(250);
      match(fichierAntlrParser::T__22);
      setState(251);
      expr(23);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<Expr_variabkeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(252);
      variable();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<Expr_affContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(253);
      aff();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<Expr_affectationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(254);
      affectation();
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<Expr_fonctionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(255);
      nom_var();
      setState(256);
      match(fichierAntlrParser::T__1);
      setState(265);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__1)
        | (1ULL << fichierAntlrParser::T__9)
        | (1ULL << fichierAntlrParser::T__10)
        | (1ULL << fichierAntlrParser::T__21)
        | (1ULL << fichierAntlrParser::T__22)
        | (1ULL << fichierAntlrParser::T__45)
        | (1ULL << fichierAntlrParser::LETTRE)
        | (1ULL << fichierAntlrParser::CHIFFRE)
        | (1ULL << fichierAntlrParser::NOMBRE)
        | (1ULL << fichierAntlrParser::CHAR))) != 0)) {
        setState(257);
        expr(0);
        setState(262);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fichierAntlrParser::T__8) {
          setState(258);
          match(fichierAntlrParser::T__8);
          setState(259);
          expr(0);
          setState(264);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(267);
      match(fichierAntlrParser::T__2);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(327);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(325);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Expr_multiplicationContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(271);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(272);
          match(fichierAntlrParser::T__23);
          setState(273);
          expr(23);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Expr_divisionContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(274);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(275);
          match(fichierAntlrParser::T__24);
          setState(276);
          expr(22);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Expr_modContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(277);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(278);
          match(fichierAntlrParser::T__25);
          setState(279);
          expr(21);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Expr_additionContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(280);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(281);
          match(fichierAntlrParser::T__26);
          setState(282);
          expr(20);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<Expr_soustractionContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(283);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(284);
          match(fichierAntlrParser::T__27);
          setState(285);
          expr(19);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<Expr_infinfContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(286);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(287);
          match(fichierAntlrParser::T__28);
          setState(288);
          expr(18);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<Expr_supsupContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(289);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(290);
          match(fichierAntlrParser::T__29);
          setState(291);
          expr(17);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<Expr_etContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(292);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(293);
          match(fichierAntlrParser::T__30);
          setState(294);
          expr(16);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<Expr_ouContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(295);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(296);
          match(fichierAntlrParser::T__31);
          setState(297);
          expr(15);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<Expr_chapeauContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(298);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(299);
          match(fichierAntlrParser::T__32);
          setState(300);
          expr(14);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<Expr_etetContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(301);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(302);
          match(fichierAntlrParser::T__33);
          setState(303);
          expr(13);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<Expr_ououContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(304);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(305);
          match(fichierAntlrParser::T__34);
          setState(306);
          expr(12);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<Expr_infContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(307);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(308);
          match(fichierAntlrParser::T__35);
          setState(309);
          expr(11);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<Expr_infegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(310);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(311);
          match(fichierAntlrParser::T__19);
          setState(312);
          expr(10);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<Expr_supContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(313);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(314);
          match(fichierAntlrParser::T__36);
          setState(315);
          expr(9);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<Expr_supegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(316);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(317);
          match(fichierAntlrParser::T__20);
          setState(318);
          expr(8);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<Expr_egalegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(319);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(320);
          match(fichierAntlrParser::T__37);
          setState(321);
          expr(7);
          break;
        }

        case 18: {
          auto newContext = _tracker.createInstance<Expr_diffegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(322);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(323);
          match(fichierAntlrParser::T__38);
          setState(324);
          expr(6);
          break;
        }

        } 
      }
      setState(329);
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

//----------------- Return_Context ------------------------------------------------------------------

fichierAntlrParser::Return_Context::Return_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::Return_Context::getRuleIndex() const {
  return fichierAntlrParser::RuleReturn_;
}

void fichierAntlrParser::Return_Context::copyFrom(Return_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Return_normalContext ------------------------------------------------------------------

fichierAntlrParser::ExprContext* fichierAntlrParser::Return_normalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Return_normalContext::Return_normalContext(Return_Context *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Return_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitReturn_normal(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::Return_Context* fichierAntlrParser::return_() {
  Return_Context *_localctx = _tracker.createInstance<Return_Context>(_ctx, getState());
  enterRule(_localctx, 20, fichierAntlrParser::RuleReturn_);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Return_Context *>(_tracker.createInstance<fichierAntlrParser::Return_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(330);
    match(fichierAntlrParser::T__39);
    setState(332);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__1)
      | (1ULL << fichierAntlrParser::T__9)
      | (1ULL << fichierAntlrParser::T__10)
      | (1ULL << fichierAntlrParser::T__21)
      | (1ULL << fichierAntlrParser::T__22)
      | (1ULL << fichierAntlrParser::T__45)
      | (1ULL << fichierAntlrParser::LETTRE)
      | (1ULL << fichierAntlrParser::CHIFFRE)
      | (1ULL << fichierAntlrParser::NOMBRE)
      | (1ULL << fichierAntlrParser::CHAR))) != 0)) {
      setState(331);
      expr(0);
    }
    setState(334);
    match(fichierAntlrParser::T__40);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Break_Context ------------------------------------------------------------------

fichierAntlrParser::Break_Context::Break_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::Break_Context::getRuleIndex() const {
  return fichierAntlrParser::RuleBreak_;
}

void fichierAntlrParser::Break_Context::copyFrom(Break_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Break_normalContext ------------------------------------------------------------------

fichierAntlrParser::Break_normalContext::Break_normalContext(Break_Context *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Break_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitBreak_normal(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::Break_Context* fichierAntlrParser::break_() {
  Break_Context *_localctx = _tracker.createInstance<Break_Context>(_ctx, getState());
  enterRule(_localctx, 22, fichierAntlrParser::RuleBreak_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Break_Context *>(_tracker.createInstance<fichierAntlrParser::Break_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(fichierAntlrParser::T__41);
    setState(337);
    match(fichierAntlrParser::T__40);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

fichierAntlrParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::InstructionContext::getRuleIndex() const {
  return fichierAntlrParser::RuleInstruction;
}

void fichierAntlrParser::InstructionContext::copyFrom(InstructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Instruction_exprContext ------------------------------------------------------------------

fichierAntlrParser::ExprContext* fichierAntlrParser::Instruction_exprContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Instruction_exprContext::Instruction_exprContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Instruction_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitInstruction_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Instruction_whileContext ------------------------------------------------------------------

fichierAntlrParser::Structure_whileContext* fichierAntlrParser::Instruction_whileContext::structure_while() {
  return getRuleContext<fichierAntlrParser::Structure_whileContext>(0);
}

fichierAntlrParser::Instruction_whileContext::Instruction_whileContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Instruction_whileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitInstruction_while(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Instruction_returnContext ------------------------------------------------------------------

fichierAntlrParser::Return_Context* fichierAntlrParser::Instruction_returnContext::return_() {
  return getRuleContext<fichierAntlrParser::Return_Context>(0);
}

fichierAntlrParser::Instruction_returnContext::Instruction_returnContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Instruction_returnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitInstruction_return(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Instruction_breakContext ------------------------------------------------------------------

fichierAntlrParser::Break_Context* fichierAntlrParser::Instruction_breakContext::break_() {
  return getRuleContext<fichierAntlrParser::Break_Context>(0);
}

fichierAntlrParser::Instruction_breakContext::Instruction_breakContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Instruction_breakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitInstruction_break(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Instruction_ifContext ------------------------------------------------------------------

fichierAntlrParser::Structure_ifContext* fichierAntlrParser::Instruction_ifContext::structure_if() {
  return getRuleContext<fichierAntlrParser::Structure_ifContext>(0);
}

fichierAntlrParser::Instruction_ifContext::Instruction_ifContext(InstructionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Instruction_ifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitInstruction_if(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::InstructionContext* fichierAntlrParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 24, fichierAntlrParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(346);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fichierAntlrParser::T__42: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<fichierAntlrParser::Instruction_ifContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(339);
        structure_if();
        break;
      }

      case fichierAntlrParser::T__44: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<fichierAntlrParser::Instruction_whileContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(340);
        structure_while();
        break;
      }

      case fichierAntlrParser::T__1:
      case fichierAntlrParser::T__9:
      case fichierAntlrParser::T__10:
      case fichierAntlrParser::T__21:
      case fichierAntlrParser::T__22:
      case fichierAntlrParser::T__45:
      case fichierAntlrParser::LETTRE:
      case fichierAntlrParser::CHIFFRE:
      case fichierAntlrParser::NOMBRE:
      case fichierAntlrParser::CHAR: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<fichierAntlrParser::Instruction_exprContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(341);
        expr(0);
        setState(342);
        match(fichierAntlrParser::T__40);
        break;
      }

      case fichierAntlrParser::T__39: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<fichierAntlrParser::Instruction_returnContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(344);
        return_();
        break;
      }

      case fichierAntlrParser::T__41: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<fichierAntlrParser::Instruction_breakContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(345);
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

fichierAntlrParser::BlocContext::BlocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::BlocContext::getRuleIndex() const {
  return fichierAntlrParser::RuleBloc;
}

void fichierAntlrParser::BlocContext::copyFrom(BlocContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Bloc_normalContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::InstructionContext *> fichierAntlrParser::Bloc_normalContext::instruction() {
  return getRuleContexts<fichierAntlrParser::InstructionContext>();
}

fichierAntlrParser::InstructionContext* fichierAntlrParser::Bloc_normalContext::instruction(size_t i) {
  return getRuleContext<fichierAntlrParser::InstructionContext>(i);
}

fichierAntlrParser::Bloc_normalContext::Bloc_normalContext(BlocContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Bloc_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitBloc_normal(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::BlocContext* fichierAntlrParser::bloc() {
  BlocContext *_localctx = _tracker.createInstance<BlocContext>(_ctx, getState());
  enterRule(_localctx, 26, fichierAntlrParser::RuleBloc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<BlocContext *>(_tracker.createInstance<fichierAntlrParser::Bloc_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(351);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__1)
      | (1ULL << fichierAntlrParser::T__9)
      | (1ULL << fichierAntlrParser::T__10)
      | (1ULL << fichierAntlrParser::T__21)
      | (1ULL << fichierAntlrParser::T__22)
      | (1ULL << fichierAntlrParser::T__39)
      | (1ULL << fichierAntlrParser::T__41)
      | (1ULL << fichierAntlrParser::T__42)
      | (1ULL << fichierAntlrParser::T__44)
      | (1ULL << fichierAntlrParser::T__45)
      | (1ULL << fichierAntlrParser::LETTRE)
      | (1ULL << fichierAntlrParser::CHIFFRE)
      | (1ULL << fichierAntlrParser::NOMBRE)
      | (1ULL << fichierAntlrParser::CHAR))) != 0)) {
      setState(348);
      instruction();
      setState(353);
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

fichierAntlrParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::DeclarationContext::getRuleIndex() const {
  return fichierAntlrParser::RuleDeclaration;
}

void fichierAntlrParser::DeclarationContext::copyFrom(DeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Declaration_tableauContext ------------------------------------------------------------------

fichierAntlrParser::Type_varContext* fichierAntlrParser::Declaration_tableauContext::type_var() {
  return getRuleContext<fichierAntlrParser::Type_varContext>(0);
}

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Declaration_tableauContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Declaration_tableauContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Declaration_tableauContext::Declaration_tableauContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Declaration_tableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitDeclaration_tableau(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Declaration_definitionContext ------------------------------------------------------------------

fichierAntlrParser::Type_varContext* fichierAntlrParser::Declaration_definitionContext::type_var() {
  return getRuleContext<fichierAntlrParser::Type_varContext>(0);
}

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Declaration_definitionContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Declaration_definitionContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::Declaration_definitionContext::Declaration_definitionContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Declaration_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitDeclaration_definition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Declaration_normaleContext ------------------------------------------------------------------

fichierAntlrParser::Type_varContext* fichierAntlrParser::Declaration_normaleContext::type_var() {
  return getRuleContext<fichierAntlrParser::Type_varContext>(0);
}

std::vector<fichierAntlrParser::Nom_varContext *> fichierAntlrParser::Declaration_normaleContext::nom_var() {
  return getRuleContexts<fichierAntlrParser::Nom_varContext>();
}

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Declaration_normaleContext::nom_var(size_t i) {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(i);
}

fichierAntlrParser::Declaration_normaleContext::Declaration_normaleContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Declaration_normaleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitDeclaration_normale(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Declaration_definitiontableauContext ------------------------------------------------------------------

fichierAntlrParser::Type_varContext* fichierAntlrParser::Declaration_definitiontableauContext::type_var() {
  return getRuleContext<fichierAntlrParser::Type_varContext>(0);
}

fichierAntlrParser::Nom_varContext* fichierAntlrParser::Declaration_definitiontableauContext::nom_var() {
  return getRuleContext<fichierAntlrParser::Nom_varContext>(0);
}

fichierAntlrParser::ExprContext* fichierAntlrParser::Declaration_definitiontableauContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> fichierAntlrParser::Declaration_definitiontableauContext::CHIFFRE() {
  return getTokens(fichierAntlrParser::CHIFFRE);
}

tree::TerminalNode* fichierAntlrParser::Declaration_definitiontableauContext::CHIFFRE(size_t i) {
  return getToken(fichierAntlrParser::CHIFFRE, i);
}

fichierAntlrParser::Declaration_definitiontableauContext::Declaration_definitiontableauContext(DeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Declaration_definitiontableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitDeclaration_definitiontableau(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::DeclarationContext* fichierAntlrParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, fichierAntlrParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(396);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<fichierAntlrParser::Declaration_normaleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(354);
      type_var();
      setState(355);
      nom_var();
      setState(360);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == fichierAntlrParser::T__8) {
        setState(356);
        match(fichierAntlrParser::T__8);
        setState(357);
        nom_var();
        setState(362);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(363);
      match(fichierAntlrParser::T__40);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<fichierAntlrParser::Declaration_definitionContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(365);
      type_var();
      setState(366);
      nom_var();
      setState(367);
      match(fichierAntlrParser::T__11);
      setState(368);
      expr(0);
      setState(369);
      match(fichierAntlrParser::T__40);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<fichierAntlrParser::Declaration_tableauContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(371);
      type_var();
      setState(372);
      nom_var();
      setState(373);
      match(fichierAntlrParser::T__6);
      setState(374);
      expr(0);
      setState(375);
      match(fichierAntlrParser::T__7);
      setState(376);
      match(fichierAntlrParser::T__40);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<fichierAntlrParser::Declaration_definitiontableauContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(378);
      type_var();
      setState(379);
      nom_var();
      setState(380);
      match(fichierAntlrParser::T__6);
      setState(381);
      expr(0);
      setState(382);
      match(fichierAntlrParser::T__7);
      setState(383);
      match(fichierAntlrParser::T__11);
      setState(384);
      match(fichierAntlrParser::T__3);
      setState(385);
      match(fichierAntlrParser::CHIFFRE);
      setState(390);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == fichierAntlrParser::T__8) {
        setState(386);
        match(fichierAntlrParser::T__8);
        setState(387);
        match(fichierAntlrParser::CHIFFRE);
        setState(392);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(393);
      match(fichierAntlrParser::T__4);
      setState(394);
      match(fichierAntlrParser::T__40);
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

fichierAntlrParser::Structure_ifContext::Structure_ifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::Structure_ifContext::getRuleIndex() const {
  return fichierAntlrParser::RuleStructure_if;
}

void fichierAntlrParser::Structure_ifContext::copyFrom(Structure_ifContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Structureif_normalContext ------------------------------------------------------------------

fichierAntlrParser::ExprContext* fichierAntlrParser::Structureif_normalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::ClauseContext* fichierAntlrParser::Structureif_normalContext::clause() {
  return getRuleContext<fichierAntlrParser::ClauseContext>(0);
}

fichierAntlrParser::Structureif_normalContext::Structureif_normalContext(Structure_ifContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Structureif_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitStructureif_normal(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::Structure_ifContext* fichierAntlrParser::structure_if() {
  Structure_ifContext *_localctx = _tracker.createInstance<Structure_ifContext>(_ctx, getState());
  enterRule(_localctx, 30, fichierAntlrParser::RuleStructure_if);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Structure_ifContext *>(_tracker.createInstance<fichierAntlrParser::Structureif_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(398);
    match(fichierAntlrParser::T__42);
    setState(399);
    match(fichierAntlrParser::T__1);
    setState(400);
    expr(0);
    setState(401);
    match(fichierAntlrParser::T__2);
    setState(402);
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

fichierAntlrParser::ClauseContext::ClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::ClauseContext::getRuleIndex() const {
  return fichierAntlrParser::RuleClause;
}

void fichierAntlrParser::ClauseContext::copyFrom(ClauseContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Clause_normalContext ------------------------------------------------------------------

fichierAntlrParser::Else_Context* fichierAntlrParser::Clause_normalContext::else_() {
  return getRuleContext<fichierAntlrParser::Else_Context>(0);
}

fichierAntlrParser::BlocContext* fichierAntlrParser::Clause_normalContext::bloc() {
  return getRuleContext<fichierAntlrParser::BlocContext>(0);
}

fichierAntlrParser::InstructionContext* fichierAntlrParser::Clause_normalContext::instruction() {
  return getRuleContext<fichierAntlrParser::InstructionContext>(0);
}

fichierAntlrParser::Clause_normalContext::Clause_normalContext(ClauseContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Clause_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitClause_normal(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::ClauseContext* fichierAntlrParser::clause() {
  ClauseContext *_localctx = _tracker.createInstance<ClauseContext>(_ctx, getState());
  enterRule(_localctx, 32, fichierAntlrParser::RuleClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<ClauseContext *>(_tracker.createInstance<fichierAntlrParser::Clause_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(409);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fichierAntlrParser::T__3: {
        setState(404);
        match(fichierAntlrParser::T__3);
        setState(405);
        bloc();
        setState(406);
        match(fichierAntlrParser::T__4);
        break;
      }

      case fichierAntlrParser::T__1:
      case fichierAntlrParser::T__9:
      case fichierAntlrParser::T__10:
      case fichierAntlrParser::T__21:
      case fichierAntlrParser::T__22:
      case fichierAntlrParser::T__39:
      case fichierAntlrParser::T__41:
      case fichierAntlrParser::T__42:
      case fichierAntlrParser::T__44:
      case fichierAntlrParser::T__45:
      case fichierAntlrParser::LETTRE:
      case fichierAntlrParser::CHIFFRE:
      case fichierAntlrParser::NOMBRE:
      case fichierAntlrParser::CHAR: {
        setState(408);
        instruction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(411);
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

fichierAntlrParser::Else_Context::Else_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::Else_Context::getRuleIndex() const {
  return fichierAntlrParser::RuleElse_;
}

void fichierAntlrParser::Else_Context::copyFrom(Else_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Else_normalContext ------------------------------------------------------------------

std::vector<fichierAntlrParser::BlocContext *> fichierAntlrParser::Else_normalContext::bloc() {
  return getRuleContexts<fichierAntlrParser::BlocContext>();
}

fichierAntlrParser::BlocContext* fichierAntlrParser::Else_normalContext::bloc(size_t i) {
  return getRuleContext<fichierAntlrParser::BlocContext>(i);
}

std::vector<fichierAntlrParser::InstructionContext *> fichierAntlrParser::Else_normalContext::instruction() {
  return getRuleContexts<fichierAntlrParser::InstructionContext>();
}

fichierAntlrParser::InstructionContext* fichierAntlrParser::Else_normalContext::instruction(size_t i) {
  return getRuleContext<fichierAntlrParser::InstructionContext>(i);
}

fichierAntlrParser::Else_normalContext::Else_normalContext(Else_Context *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Else_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitElse_normal(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::Else_Context* fichierAntlrParser::else_() {
  Else_Context *_localctx = _tracker.createInstance<Else_Context>(_ctx, getState());
  enterRule(_localctx, 34, fichierAntlrParser::RuleElse_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    _localctx = dynamic_cast<Else_Context *>(_tracker.createInstance<fichierAntlrParser::Else_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(423);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(413);
        match(fichierAntlrParser::T__43);
        setState(419);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case fichierAntlrParser::T__3: {
            setState(414);
            match(fichierAntlrParser::T__3);
            setState(415);
            bloc();
            setState(416);
            match(fichierAntlrParser::T__4);
            break;
          }

          case fichierAntlrParser::T__1:
          case fichierAntlrParser::T__9:
          case fichierAntlrParser::T__10:
          case fichierAntlrParser::T__21:
          case fichierAntlrParser::T__22:
          case fichierAntlrParser::T__39:
          case fichierAntlrParser::T__41:
          case fichierAntlrParser::T__42:
          case fichierAntlrParser::T__44:
          case fichierAntlrParser::T__45:
          case fichierAntlrParser::LETTRE:
          case fichierAntlrParser::CHIFFRE:
          case fichierAntlrParser::NOMBRE:
          case fichierAntlrParser::CHAR: {
            setState(418);
            instruction();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(425);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
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

fichierAntlrParser::Structure_whileContext::Structure_whileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::Structure_whileContext::getRuleIndex() const {
  return fichierAntlrParser::RuleStructure_while;
}

void fichierAntlrParser::Structure_whileContext::copyFrom(Structure_whileContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Structurewhile_normalContext ------------------------------------------------------------------

fichierAntlrParser::ExprContext* fichierAntlrParser::Structurewhile_normalContext::expr() {
  return getRuleContext<fichierAntlrParser::ExprContext>(0);
}

fichierAntlrParser::BlocContext* fichierAntlrParser::Structurewhile_normalContext::bloc() {
  return getRuleContext<fichierAntlrParser::BlocContext>(0);
}

fichierAntlrParser::InstructionContext* fichierAntlrParser::Structurewhile_normalContext::instruction() {
  return getRuleContext<fichierAntlrParser::InstructionContext>(0);
}

fichierAntlrParser::Structurewhile_normalContext::Structurewhile_normalContext(Structure_whileContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Structurewhile_normalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitStructurewhile_normal(this);
  else
    return visitor->visitChildren(this);
}
fichierAntlrParser::Structure_whileContext* fichierAntlrParser::structure_while() {
  Structure_whileContext *_localctx = _tracker.createInstance<Structure_whileContext>(_ctx, getState());
  enterRule(_localctx, 36, fichierAntlrParser::RuleStructure_while);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Structure_whileContext *>(_tracker.createInstance<fichierAntlrParser::Structurewhile_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(426);
    match(fichierAntlrParser::T__44);
    setState(427);
    match(fichierAntlrParser::T__1);
    setState(428);
    expr(0);
    setState(429);
    match(fichierAntlrParser::T__2);
    setState(435);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fichierAntlrParser::T__3: {
        setState(430);
        match(fichierAntlrParser::T__3);
        setState(431);
        bloc();
        setState(432);
        match(fichierAntlrParser::T__4);
        break;
      }

      case fichierAntlrParser::T__1:
      case fichierAntlrParser::T__9:
      case fichierAntlrParser::T__10:
      case fichierAntlrParser::T__21:
      case fichierAntlrParser::T__22:
      case fichierAntlrParser::T__39:
      case fichierAntlrParser::T__41:
      case fichierAntlrParser::T__42:
      case fichierAntlrParser::T__44:
      case fichierAntlrParser::T__45:
      case fichierAntlrParser::LETTRE:
      case fichierAntlrParser::CHIFFRE:
      case fichierAntlrParser::NOMBRE:
      case fichierAntlrParser::CHAR: {
        setState(434);
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

//----------------- Nom_varContext ------------------------------------------------------------------

fichierAntlrParser::Nom_varContext::Nom_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> fichierAntlrParser::Nom_varContext::LETTRE() {
  return getTokens(fichierAntlrParser::LETTRE);
}

tree::TerminalNode* fichierAntlrParser::Nom_varContext::LETTRE(size_t i) {
  return getToken(fichierAntlrParser::LETTRE, i);
}

std::vector<tree::TerminalNode *> fichierAntlrParser::Nom_varContext::CHIFFRE() {
  return getTokens(fichierAntlrParser::CHIFFRE);
}

tree::TerminalNode* fichierAntlrParser::Nom_varContext::CHIFFRE(size_t i) {
  return getToken(fichierAntlrParser::CHIFFRE, i);
}


size_t fichierAntlrParser::Nom_varContext::getRuleIndex() const {
  return fichierAntlrParser::RuleNom_var;
}

antlrcpp::Any fichierAntlrParser::Nom_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitNom_var(this);
  else
    return visitor->visitChildren(this);
}

fichierAntlrParser::Nom_varContext* fichierAntlrParser::nom_var() {
  Nom_varContext *_localctx = _tracker.createInstance<Nom_varContext>(_ctx, getState());
  enterRule(_localctx, 38, fichierAntlrParser::RuleNom_var);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(440);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(437);
        _la = _input->LA(1);
        if (!(_la == fichierAntlrParser::T__45

        || _la == fichierAntlrParser::LETTRE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(442);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
    setState(444); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(443);
              match(fichierAntlrParser::LETTRE);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(446); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(451);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(448);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__45)
          | (1ULL << fichierAntlrParser::LETTRE)
          | (1ULL << fichierAntlrParser::CHIFFRE))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(453);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_varContext ------------------------------------------------------------------

fichierAntlrParser::Type_varContext::Type_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::Type_varContext::getRuleIndex() const {
  return fichierAntlrParser::RuleType_var;
}

antlrcpp::Any fichierAntlrParser::Type_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitType_var(this);
  else
    return visitor->visitChildren(this);
}

fichierAntlrParser::Type_varContext* fichierAntlrParser::type_var() {
  Type_varContext *_localctx = _tracker.createInstance<Type_varContext>(_ctx, getState());
  enterRule(_localctx, 40, fichierAntlrParser::RuleType_var);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(454);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
      | (1ULL << fichierAntlrParser::T__47)
      | (1ULL << fichierAntlrParser::T__48))) != 0))) {
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

//----------------- Type_fonctionContext ------------------------------------------------------------------

fichierAntlrParser::Type_fonctionContext::Type_fonctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t fichierAntlrParser::Type_fonctionContext::getRuleIndex() const {
  return fichierAntlrParser::RuleType_fonction;
}

antlrcpp::Any fichierAntlrParser::Type_fonctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitType_fonction(this);
  else
    return visitor->visitChildren(this);
}

fichierAntlrParser::Type_fonctionContext* fichierAntlrParser::type_fonction() {
  Type_fonctionContext *_localctx = _tracker.createInstance<Type_fonctionContext>(_ctx, getState());
  enterRule(_localctx, 42, fichierAntlrParser::RuleType_fonction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(456);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__5)
      | (1ULL << fichierAntlrParser::T__46)
      | (1ULL << fichierAntlrParser::T__47)
      | (1ULL << fichierAntlrParser::T__48)
      | (1ULL << fichierAntlrParser::T__49))) != 0))) {
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

bool fichierAntlrParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool fichierAntlrParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 22);
    case 1: return precpred(_ctx, 21);
    case 2: return precpred(_ctx, 20);
    case 3: return precpred(_ctx, 19);
    case 4: return precpred(_ctx, 18);
    case 5: return precpred(_ctx, 17);
    case 6: return precpred(_ctx, 16);
    case 7: return precpred(_ctx, 15);
    case 8: return precpred(_ctx, 14);
    case 9: return precpred(_ctx, 13);
    case 10: return precpred(_ctx, 12);
    case 11: return precpred(_ctx, 11);
    case 12: return precpred(_ctx, 10);
    case 13: return precpred(_ctx, 9);
    case 14: return precpred(_ctx, 8);
    case 15: return precpred(_ctx, 7);
    case 16: return precpred(_ctx, 6);
    case 17: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> fichierAntlrParser::_decisionToDFA;
atn::PredictionContextCache fichierAntlrParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN fichierAntlrParser::_atn;
std::vector<uint16_t> fichierAntlrParser::_serializedATN;

std::vector<std::string> fichierAntlrParser::_ruleNames = {
  "big", "programme", "main", "fonction", "parametre", "parametre1", "variable", 
  "aff", "affectation", "expr", "return_", "break_", "instruction", "bloc", 
  "declaration", "structure_if", "clause", "else_", "structure_while", "nom_var", 
  "type_var", "type_fonction"
};

std::vector<std::string> fichierAntlrParser::_literalNames = {
  "", "'main'", "'('", "')'", "'{'", "'}'", "'void'", "'['", "']'", "','", 
  "'++'", "'--'", "'='", "'&='", "'|='", "'+='", "'-='", "'*='", "'/='", 
  "'%='", "'<='", "'>='", "'~'", "'!'", "'*'", "'/'", "'%'", "'+'", "'-'", 
  "'<<'", "'>>'", "'&'", "'|'", "'^'", "'&&'", "'||'", "'<'", "'>'", "'=='", 
  "'!='", "'return'", "';'", "'break'", "'if'", "'else'", "'while'", "'_'", 
  "'char'", "'int64_t'", "'int32_t'", "'int'"
};

std::vector<std::string> fichierAntlrParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "Include", 
  "EspaceBlanc", "CommentaireBlock", "CommentaireLigne", "LETTRE", "CHIFFRE", 
  "NOMBRE", "CHAR", "SYMBOLE"
};

dfa::Vocabulary fichierAntlrParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> fichierAntlrParser::_tokenNames;

fichierAntlrParser::Initializer::Initializer() {
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
    0x3, 0x3d, 0x1cd, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x7, 0x3, 0x32, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x35, 0xb, 
    0x3, 0x3, 0x3, 0x7, 0x3, 0x38, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x3b, 0xb, 
    0x3, 0x3, 0x3, 0x7, 0x3, 0x3e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x41, 0xb, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x7, 0x4, 0x4a, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x4d, 0xb, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0x58, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x5b, 0xb, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x67, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0x6a, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x6f, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x7, 0x5, 0x78, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x7b, 0xb, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x86, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x89, 
    0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x95, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x98, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x9d, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xa9, 0xa, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xad, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xb5, 0xa, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xbd, 0xa, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x5, 0xa, 0xf1, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x107, 0xa, 0xb, 0xc, 0xb, 0xe, 
    0xb, 0x10a, 0xb, 0xb, 0x5, 0xb, 0x10c, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x110, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x7, 0xb, 0x148, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x14b, 0xb, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x14f, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x15d, 0xa, 0xe, 0x3, 0xf, 0x7, 0xf, 
    0x160, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x163, 0xb, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x169, 0xa, 0x10, 0xc, 0x10, 
    0xe, 0x10, 0x16c, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x7, 0x10, 0x187, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 
    0x18a, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x18f, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x19c, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x1a6, 0xa, 0x13, 0x7, 0x13, 
    0x1a8, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x1ab, 0xb, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x5, 0x14, 0x1b6, 0xa, 0x14, 0x3, 0x15, 0x7, 0x15, 
    0x1b9, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x1bc, 0xb, 0x15, 0x3, 0x15, 
    0x6, 0x15, 0x1bf, 0xa, 0x15, 0xd, 0x15, 0xe, 0x15, 0x1c0, 0x3, 0x15, 
    0x7, 0x15, 0x1c4, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x1c7, 0xb, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x2, 0x3, 0x14, 
    0x18, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2, 0x6, 
    0x4, 0x2, 0x30, 0x30, 0x39, 0x39, 0x4, 0x2, 0x30, 0x30, 0x39, 0x3a, 
    0x3, 0x2, 0x31, 0x33, 0x4, 0x2, 0x8, 0x8, 0x31, 0x34, 0x2, 0x203, 0x2, 
    0x2e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x33, 0x3, 0x2, 0x2, 0x2, 0x6, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x9c, 0x3, 0x2, 0x2, 0x2, 0xa, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xac, 0x3, 0x2, 0x2, 0x2, 0xe, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x12, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x10f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x18, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x161, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x190, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1a9, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1ba, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2f, 0x5, 0x4, 0x3, 0x2, 0x2f, 0x3, 0x3, 0x2, 0x2, 0x2, 0x30, 0x32, 
    0x5, 0x1e, 0x10, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x39, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x38, 0x5, 0x8, 0x5, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x3e, 0x5, 0x6, 0x4, 0x2, 0x3d, 0x3c, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 
    0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x5, 0x2c, 0x17, 0x2, 
    0x43, 0x44, 0x7, 0x3, 0x2, 0x2, 0x44, 0x45, 0x7, 0x4, 0x2, 0x2, 0x45, 
    0x46, 0x5, 0xa, 0x6, 0x2, 0x46, 0x47, 0x7, 0x5, 0x2, 0x2, 0x47, 0x4b, 
    0x7, 0x6, 0x2, 0x2, 0x48, 0x4a, 0x5, 0x1e, 0x10, 0x2, 0x49, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0x1c, 0xf, 0x2, 
    0x4f, 0x50, 0x7, 0x7, 0x2, 0x2, 0x50, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x51, 
    0x52, 0x5, 0x2c, 0x17, 0x2, 0x52, 0x53, 0x7, 0x3, 0x2, 0x2, 0x53, 0x54, 
    0x7, 0x4, 0x2, 0x2, 0x54, 0x55, 0x7, 0x5, 0x2, 0x2, 0x55, 0x59, 0x7, 
    0x6, 0x2, 0x2, 0x56, 0x58, 0x5, 0x1e, 0x10, 0x2, 0x57, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5c, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0x1c, 0xf, 0x2, 0x5d, 
    0x5e, 0x7, 0x7, 0x2, 0x2, 0x5e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 
    0x5, 0x2c, 0x17, 0x2, 0x60, 0x61, 0x7, 0x3, 0x2, 0x2, 0x61, 0x62, 0x7, 
    0x4, 0x2, 0x2, 0x62, 0x63, 0x7, 0x8, 0x2, 0x2, 0x63, 0x64, 0x7, 0x5, 
    0x2, 0x2, 0x64, 0x68, 0x7, 0x6, 0x2, 0x2, 0x65, 0x67, 0x5, 0x1e, 0x10, 
    0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 
    0x5, 0x1c, 0xf, 0x2, 0x6c, 0x6d, 0x7, 0x7, 0x2, 0x2, 0x6d, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x42, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x71, 0x5, 0x2c, 0x17, 0x2, 0x71, 0x72, 0x5, 0x28, 0x15, 
    0x2, 0x72, 0x73, 0x7, 0x4, 0x2, 0x2, 0x73, 0x74, 0x5, 0xa, 0x6, 0x2, 
    0x74, 0x75, 0x7, 0x5, 0x2, 0x2, 0x75, 0x79, 0x7, 0x6, 0x2, 0x2, 0x76, 
    0x78, 0x5, 0x1e, 0x10, 0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x7d, 0x5, 0x1c, 0xf, 0x2, 0x7d, 0x7e, 0x7, 0x7, 0x2, 
    0x2, 0x7e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x5, 0x2c, 0x17, 0x2, 
    0x80, 0x81, 0x5, 0x28, 0x15, 0x2, 0x81, 0x82, 0x7, 0x4, 0x2, 0x2, 0x82, 
    0x83, 0x7, 0x5, 0x2, 0x2, 0x83, 0x87, 0x7, 0x6, 0x2, 0x2, 0x84, 0x86, 
    0x5, 0x1e, 0x10, 0x2, 0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x8b, 0x5, 0x1c, 0xf, 0x2, 0x8b, 0x8c, 0x7, 0x7, 0x2, 0x2, 
    0x8c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x2c, 0x17, 0x2, 0x8e, 
    0x8f, 0x5, 0x28, 0x15, 0x2, 0x8f, 0x90, 0x7, 0x4, 0x2, 0x2, 0x90, 0x91, 
    0x7, 0x8, 0x2, 0x2, 0x91, 0x92, 0x7, 0x5, 0x2, 0x2, 0x92, 0x96, 0x7, 
    0x6, 0x2, 0x2, 0x93, 0x95, 0x5, 0x1e, 0x10, 0x2, 0x94, 0x93, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x98, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x1c, 0xf, 0x2, 0x9a, 
    0x9b, 0x7, 0x7, 0x2, 0x2, 0x9b, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x5, 0x2a, 
    0x16, 0x2, 0x9f, 0xa0, 0x5, 0x28, 0x15, 0x2, 0xa0, 0xa1, 0x5, 0xc, 0x7, 
    0x2, 0xa1, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x2a, 0x16, 0x2, 
    0xa3, 0xa4, 0x5, 0x28, 0x15, 0x2, 0xa4, 0xa5, 0x7, 0x9, 0x2, 0x2, 0xa5, 
    0xa6, 0x5, 0x14, 0xb, 0x2, 0xa6, 0xa7, 0x7, 0xa, 0x2, 0x2, 0xa7, 0xa9, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa9, 0xb, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x7, 0xb, 
    0x2, 0x2, 0xab, 0xad, 0x5, 0xa, 0x6, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 
    0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xb5, 0x5, 0x28, 0x15, 0x2, 0xaf, 0xb0, 0x5, 0x28, 0x15, 0x2, 
    0xb0, 0xb1, 0x7, 0x9, 0x2, 0x2, 0xb1, 0xb2, 0x5, 0x14, 0xb, 0x2, 0xb2, 
    0xb3, 0x7, 0xa, 0x2, 0x2, 0xb3, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xae, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xbd, 0x5, 0x28, 0x15, 0x2, 0xb7, 0xb8, 0x5, 0x28, 
    0x15, 0x2, 0xb8, 0xb9, 0x7, 0x9, 0x2, 0x2, 0xb9, 0xba, 0x5, 0x14, 0xb, 
    0x2, 0xba, 0xbb, 0x7, 0xa, 0x2, 0x2, 0xbb, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x5, 0xe, 0x8, 0x2, 0xbf, 0xc0, 
    0x7, 0xc, 0x2, 0x2, 0xc0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x7, 
    0xc, 0x2, 0x2, 0xc2, 0xf1, 0x5, 0xe, 0x8, 0x2, 0xc3, 0xc4, 0x5, 0xe, 
    0x8, 0x2, 0xc4, 0xc5, 0x7, 0xd, 0x2, 0x2, 0xc5, 0xf1, 0x3, 0x2, 0x2, 
    0x2, 0xc6, 0xc7, 0x7, 0xd, 0x2, 0x2, 0xc7, 0xf1, 0x5, 0xe, 0x8, 0x2, 
    0xc8, 0xc9, 0x5, 0x10, 0x9, 0x2, 0xc9, 0xca, 0x7, 0xe, 0x2, 0x2, 0xca, 
    0xcb, 0x5, 0x14, 0xb, 0x2, 0xcb, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 
    0x5, 0x10, 0x9, 0x2, 0xcd, 0xce, 0x7, 0xf, 0x2, 0x2, 0xce, 0xcf, 0x5, 
    0x14, 0xb, 0x2, 0xcf, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x10, 
    0x9, 0x2, 0xd1, 0xd2, 0x7, 0x10, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x14, 0xb, 
    0x2, 0xd3, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x5, 0x10, 0x9, 0x2, 
    0xd5, 0xd6, 0x7, 0x11, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0x14, 0xb, 0x2, 0xd7, 
    0xf1, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x10, 0x9, 0x2, 0xd9, 0xda, 
    0x7, 0x12, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x14, 0xb, 0x2, 0xdb, 0xf1, 0x3, 
    0x2, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x10, 0x9, 0x2, 0xdd, 0xde, 0x7, 0x13, 
    0x2, 0x2, 0xde, 0xdf, 0x5, 0x14, 0xb, 0x2, 0xdf, 0xf1, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xe1, 0x5, 0x10, 0x9, 0x2, 0xe1, 0xe2, 0x7, 0x14, 0x2, 0x2, 
    0xe2, 0xe3, 0x5, 0x14, 0xb, 0x2, 0xe3, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0xe5, 0x5, 0x10, 0x9, 0x2, 0xe5, 0xe6, 0x7, 0x15, 0x2, 0x2, 0xe6, 0xe7, 
    0x5, 0x14, 0xb, 0x2, 0xe7, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x5, 
    0x10, 0x9, 0x2, 0xe9, 0xea, 0x7, 0x16, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x14, 
    0xb, 0x2, 0xeb, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x5, 0x10, 0x9, 
    0x2, 0xed, 0xee, 0x7, 0x17, 0x2, 0x2, 0xee, 0xef, 0x5, 0x14, 0xb, 0x2, 
    0xef, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xf0, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xc6, 
    0x3, 0x2, 0x2, 0x2, 0xf0, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xcc, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xd4, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xdc, 0x3, 0x2, 0x2, 
    0x2, 0xf0, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0xf0, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xec, 0x3, 0x2, 0x2, 0x2, 0xf1, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x8, 0xb, 0x1, 0x2, 0xf3, 0x110, 
    0x7, 0x3a, 0x2, 0x2, 0xf4, 0x110, 0x7, 0x3b, 0x2, 0x2, 0xf5, 0x110, 
    0x7, 0x3c, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x4, 0x2, 0x2, 0xf7, 0xf8, 0x5, 
    0x14, 0xb, 0x2, 0xf8, 0xf9, 0x7, 0x5, 0x2, 0x2, 0xf9, 0x110, 0x3, 0x2, 
    0x2, 0x2, 0xfa, 0xfb, 0x7, 0x18, 0x2, 0x2, 0xfb, 0x110, 0x5, 0x14, 0xb, 
    0x1a, 0xfc, 0xfd, 0x7, 0x19, 0x2, 0x2, 0xfd, 0x110, 0x5, 0x14, 0xb, 
    0x19, 0xfe, 0x110, 0x5, 0xe, 0x8, 0x2, 0xff, 0x110, 0x5, 0x10, 0x9, 
    0x2, 0x100, 0x110, 0x5, 0x12, 0xa, 0x2, 0x101, 0x102, 0x5, 0x28, 0x15, 
    0x2, 0x102, 0x10b, 0x7, 0x4, 0x2, 0x2, 0x103, 0x108, 0x5, 0x14, 0xb, 
    0x2, 0x104, 0x105, 0x7, 0xb, 0x2, 0x2, 0x105, 0x107, 0x5, 0x14, 0xb, 
    0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10a, 0x3, 0x2, 0x2, 
    0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x3, 0x2, 0x2, 
    0x2, 0x109, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 
    0x2, 0x10b, 0x103, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x3, 0x2, 0x2, 
    0x2, 0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x5, 0x2, 
    0x2, 0x10e, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10f, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0x10f, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x10f, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x10f, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0x10f, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x10f, 0xfc, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x10f, 0xff, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x100, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x101, 0x3, 
    0x2, 0x2, 0x2, 0x110, 0x149, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0xc, 
    0x18, 0x2, 0x2, 0x112, 0x113, 0x7, 0x1a, 0x2, 0x2, 0x113, 0x148, 0x5, 
    0x14, 0xb, 0x19, 0x114, 0x115, 0xc, 0x17, 0x2, 0x2, 0x115, 0x116, 0x7, 
    0x1b, 0x2, 0x2, 0x116, 0x148, 0x5, 0x14, 0xb, 0x18, 0x117, 0x118, 0xc, 
    0x16, 0x2, 0x2, 0x118, 0x119, 0x7, 0x1c, 0x2, 0x2, 0x119, 0x148, 0x5, 
    0x14, 0xb, 0x17, 0x11a, 0x11b, 0xc, 0x15, 0x2, 0x2, 0x11b, 0x11c, 0x7, 
    0x1d, 0x2, 0x2, 0x11c, 0x148, 0x5, 0x14, 0xb, 0x16, 0x11d, 0x11e, 0xc, 
    0x14, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0x1e, 0x2, 0x2, 0x11f, 0x148, 0x5, 
    0x14, 0xb, 0x15, 0x120, 0x121, 0xc, 0x13, 0x2, 0x2, 0x121, 0x122, 0x7, 
    0x1f, 0x2, 0x2, 0x122, 0x148, 0x5, 0x14, 0xb, 0x14, 0x123, 0x124, 0xc, 
    0x12, 0x2, 0x2, 0x124, 0x125, 0x7, 0x20, 0x2, 0x2, 0x125, 0x148, 0x5, 
    0x14, 0xb, 0x13, 0x126, 0x127, 0xc, 0x11, 0x2, 0x2, 0x127, 0x128, 0x7, 
    0x21, 0x2, 0x2, 0x128, 0x148, 0x5, 0x14, 0xb, 0x12, 0x129, 0x12a, 0xc, 
    0x10, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x22, 0x2, 0x2, 0x12b, 0x148, 0x5, 
    0x14, 0xb, 0x11, 0x12c, 0x12d, 0xc, 0xf, 0x2, 0x2, 0x12d, 0x12e, 0x7, 
    0x23, 0x2, 0x2, 0x12e, 0x148, 0x5, 0x14, 0xb, 0x10, 0x12f, 0x130, 0xc, 
    0xe, 0x2, 0x2, 0x130, 0x131, 0x7, 0x24, 0x2, 0x2, 0x131, 0x148, 0x5, 
    0x14, 0xb, 0xf, 0x132, 0x133, 0xc, 0xd, 0x2, 0x2, 0x133, 0x134, 0x7, 
    0x25, 0x2, 0x2, 0x134, 0x148, 0x5, 0x14, 0xb, 0xe, 0x135, 0x136, 0xc, 
    0xc, 0x2, 0x2, 0x136, 0x137, 0x7, 0x26, 0x2, 0x2, 0x137, 0x148, 0x5, 
    0x14, 0xb, 0xd, 0x138, 0x139, 0xc, 0xb, 0x2, 0x2, 0x139, 0x13a, 0x7, 
    0x16, 0x2, 0x2, 0x13a, 0x148, 0x5, 0x14, 0xb, 0xc, 0x13b, 0x13c, 0xc, 
    0xa, 0x2, 0x2, 0x13c, 0x13d, 0x7, 0x27, 0x2, 0x2, 0x13d, 0x148, 0x5, 
    0x14, 0xb, 0xb, 0x13e, 0x13f, 0xc, 0x9, 0x2, 0x2, 0x13f, 0x140, 0x7, 
    0x17, 0x2, 0x2, 0x140, 0x148, 0x5, 0x14, 0xb, 0xa, 0x141, 0x142, 0xc, 
    0x8, 0x2, 0x2, 0x142, 0x143, 0x7, 0x28, 0x2, 0x2, 0x143, 0x148, 0x5, 
    0x14, 0xb, 0x9, 0x144, 0x145, 0xc, 0x7, 0x2, 0x2, 0x145, 0x146, 0x7, 
    0x29, 0x2, 0x2, 0x146, 0x148, 0x5, 0x14, 0xb, 0x8, 0x147, 0x111, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x114, 0x3, 0x2, 0x2, 0x2, 0x147, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x147, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x120, 0x3, 0x2, 0x2, 0x2, 0x147, 0x123, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x126, 0x3, 0x2, 0x2, 0x2, 0x147, 0x129, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x147, 0x12f, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x132, 0x3, 0x2, 0x2, 0x2, 0x147, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x138, 0x3, 0x2, 0x2, 0x2, 0x147, 0x13b, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x147, 0x141, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x144, 0x3, 0x2, 0x2, 0x2, 0x148, 0x14b, 0x3, 
    0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x3, 
    0x2, 0x2, 0x2, 0x14a, 0x15, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x14c, 0x14e, 0x7, 0x2a, 0x2, 0x2, 0x14d, 0x14f, 0x5, 0x14, 
    0xb, 0x2, 0x14e, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 
    0x2, 0x2, 0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x7, 0x2b, 
    0x2, 0x2, 0x151, 0x17, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x7, 0x2c, 
    0x2, 0x2, 0x153, 0x154, 0x7, 0x2b, 0x2, 0x2, 0x154, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x155, 0x15d, 0x5, 0x20, 0x11, 0x2, 0x156, 0x15d, 0x5, 0x26, 
    0x14, 0x2, 0x157, 0x158, 0x5, 0x14, 0xb, 0x2, 0x158, 0x159, 0x7, 0x2b, 
    0x2, 0x2, 0x159, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15d, 0x5, 0x16, 
    0xc, 0x2, 0x15b, 0x15d, 0x5, 0x18, 0xd, 0x2, 0x15c, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x156, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x157, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15b, 0x3, 0x2, 
    0x2, 0x2, 0x15d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x160, 0x5, 0x1a, 
    0xe, 0x2, 0x15f, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x161, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x3, 0x2, 
    0x2, 0x2, 0x162, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x163, 0x161, 0x3, 0x2, 0x2, 
    0x2, 0x164, 0x165, 0x5, 0x2a, 0x16, 0x2, 0x165, 0x16a, 0x5, 0x28, 0x15, 
    0x2, 0x166, 0x167, 0x7, 0xb, 0x2, 0x2, 0x167, 0x169, 0x5, 0x28, 0x15, 
    0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x16a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x3, 0x2, 0x2, 
    0x2, 0x16b, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 
    0x2, 0x16d, 0x16e, 0x7, 0x2b, 0x2, 0x2, 0x16e, 0x18f, 0x3, 0x2, 0x2, 
    0x2, 0x16f, 0x170, 0x5, 0x2a, 0x16, 0x2, 0x170, 0x171, 0x5, 0x28, 0x15, 
    0x2, 0x171, 0x172, 0x7, 0xe, 0x2, 0x2, 0x172, 0x173, 0x5, 0x14, 0xb, 
    0x2, 0x173, 0x174, 0x7, 0x2b, 0x2, 0x2, 0x174, 0x18f, 0x3, 0x2, 0x2, 
    0x2, 0x175, 0x176, 0x5, 0x2a, 0x16, 0x2, 0x176, 0x177, 0x5, 0x28, 0x15, 
    0x2, 0x177, 0x178, 0x7, 0x9, 0x2, 0x2, 0x178, 0x179, 0x5, 0x14, 0xb, 
    0x2, 0x179, 0x17a, 0x7, 0xa, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0x2b, 0x2, 
    0x2, 0x17b, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x5, 0x2a, 0x16, 
    0x2, 0x17d, 0x17e, 0x5, 0x28, 0x15, 0x2, 0x17e, 0x17f, 0x7, 0x9, 0x2, 
    0x2, 0x17f, 0x180, 0x5, 0x14, 0xb, 0x2, 0x180, 0x181, 0x7, 0xa, 0x2, 
    0x2, 0x181, 0x182, 0x7, 0xe, 0x2, 0x2, 0x182, 0x183, 0x7, 0x6, 0x2, 
    0x2, 0x183, 0x188, 0x7, 0x3a, 0x2, 0x2, 0x184, 0x185, 0x7, 0xb, 0x2, 
    0x2, 0x185, 0x187, 0x7, 0x3a, 0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 
    0x2, 0x187, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x188, 0x186, 0x3, 0x2, 0x2, 
    0x2, 0x188, 0x189, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18b, 0x3, 0x2, 0x2, 
    0x2, 0x18a, 0x188, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x7, 0x7, 0x2, 
    0x2, 0x18c, 0x18d, 0x7, 0x2b, 0x2, 0x2, 0x18d, 0x18f, 0x3, 0x2, 0x2, 
    0x2, 0x18e, 0x164, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x16f, 0x3, 0x2, 0x2, 
    0x2, 0x18e, 0x175, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x17c, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x7, 0x2d, 0x2, 
    0x2, 0x191, 0x192, 0x7, 0x4, 0x2, 0x2, 0x192, 0x193, 0x5, 0x14, 0xb, 
    0x2, 0x193, 0x194, 0x7, 0x5, 0x2, 0x2, 0x194, 0x195, 0x5, 0x22, 0x12, 
    0x2, 0x195, 0x21, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x7, 0x6, 0x2, 0x2, 
    0x197, 0x198, 0x5, 0x1c, 0xf, 0x2, 0x198, 0x199, 0x7, 0x7, 0x2, 0x2, 
    0x199, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19c, 0x5, 0x1a, 0xe, 0x2, 
    0x19b, 0x196, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x5, 0x24, 0x13, 0x2, 
    0x19e, 0x23, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a5, 0x7, 0x2e, 0x2, 0x2, 
    0x1a0, 0x1a1, 0x7, 0x6, 0x2, 0x2, 0x1a1, 0x1a2, 0x5, 0x1c, 0xf, 0x2, 
    0x1a2, 0x1a3, 0x7, 0x7, 0x2, 0x2, 0x1a3, 0x1a6, 0x3, 0x2, 0x2, 0x2, 
    0x1a4, 0x1a6, 0x5, 0x1a, 0xe, 0x2, 0x1a5, 0x1a0, 0x3, 0x2, 0x2, 0x2, 
    0x1a5, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a8, 0x3, 0x2, 0x2, 0x2, 
    0x1a7, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1ab, 0x3, 0x2, 0x2, 0x2, 
    0x1a9, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 0x2, 
    0x1aa, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ac, 
    0x1ad, 0x7, 0x2f, 0x2, 0x2, 0x1ad, 0x1ae, 0x7, 0x4, 0x2, 0x2, 0x1ae, 
    0x1af, 0x5, 0x14, 0xb, 0x2, 0x1af, 0x1b5, 0x7, 0x5, 0x2, 0x2, 0x1b0, 
    0x1b1, 0x7, 0x6, 0x2, 0x2, 0x1b1, 0x1b2, 0x5, 0x1c, 0xf, 0x2, 0x1b2, 
    0x1b3, 0x7, 0x7, 0x2, 0x2, 0x1b3, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b4, 
    0x1b6, 0x5, 0x1a, 0xe, 0x2, 0x1b5, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b5, 
    0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b9, 
    0x9, 0x2, 0x2, 0x2, 0x1b8, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1bc, 
    0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 
    0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1ba, 
    0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1bf, 0x7, 0x39, 0x2, 0x2, 0x1be, 0x1bd, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1be, 
    0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c5, 
    0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c4, 0x9, 0x3, 0x2, 0x2, 0x1c3, 0x1c2, 
    0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c3, 
    0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x1c7, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x9, 
    0x4, 0x2, 0x2, 0x1c9, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 0x9, 0x5, 
    0x2, 0x2, 0x1cb, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x24, 0x33, 0x39, 0x3f, 0x4b, 
    0x59, 0x68, 0x6e, 0x79, 0x87, 0x96, 0x9c, 0xa8, 0xac, 0xb4, 0xbc, 0xf0, 
    0x108, 0x10b, 0x10f, 0x147, 0x149, 0x14e, 0x15c, 0x161, 0x16a, 0x188, 
    0x18e, 0x19b, 0x1a5, 0x1a9, 0x1b5, 0x1ba, 0x1c0, 0x1c5, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

fichierAntlrParser::Initializer fichierAntlrParser::_init;