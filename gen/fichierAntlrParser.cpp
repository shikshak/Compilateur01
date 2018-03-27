
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
  enterRule(_localctx, 0, fichierAntlrParser::RuleProgramme);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    _localctx = dynamic_cast<ProgrammeContext *>(_tracker.createInstance<fichierAntlrParser::Programme_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(43);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(40);
        declaration(); 
      }
      setState(45);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
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
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__5)
      | (1ULL << fichierAntlrParser::T__46)
      | (1ULL << fichierAntlrParser::T__47)
      | (1ULL << fichierAntlrParser::T__48)
      | (1ULL << fichierAntlrParser::T__49))) != 0)) {
      setState(52);
      main();
      setState(57);
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
  enterRule(_localctx, 2, fichierAntlrParser::RuleMain);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(102);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<MainContext *>(_tracker.createInstance<fichierAntlrParser::Main_avecparametreContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(58);
      type_fonction();
      setState(59);
      match(fichierAntlrParser::T__0);
      setState(60);
      match(fichierAntlrParser::T__1);
      setState(61);
      parametre();
      setState(62);
      match(fichierAntlrParser::T__2);
      setState(63);
      match(fichierAntlrParser::T__3);
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
        | (1ULL << fichierAntlrParser::T__47)
        | (1ULL << fichierAntlrParser::T__48))) != 0)) {
        setState(64);
        declaration();
        setState(69);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(70);
      bloc();
      setState(71);
      match(fichierAntlrParser::T__4);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<MainContext *>(_tracker.createInstance<fichierAntlrParser::Main_sansparametreContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(73);
      type_fonction();
      setState(74);
      match(fichierAntlrParser::T__0);
      setState(75);
      match(fichierAntlrParser::T__1);
      setState(76);
      match(fichierAntlrParser::T__2);
      setState(77);
      match(fichierAntlrParser::T__3);
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
        | (1ULL << fichierAntlrParser::T__47)
        | (1ULL << fichierAntlrParser::T__48))) != 0)) {
        setState(78);
        declaration();
        setState(83);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(84);
      bloc();
      setState(85);
      match(fichierAntlrParser::T__4);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<MainContext *>(_tracker.createInstance<fichierAntlrParser::Main_parametrevoidContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(87);
      type_fonction();
      setState(88);
      match(fichierAntlrParser::T__0);
      setState(89);
      match(fichierAntlrParser::T__1);
      setState(90);
      match(fichierAntlrParser::T__5);
      setState(91);
      match(fichierAntlrParser::T__2);
      setState(92);
      match(fichierAntlrParser::T__3);
      setState(96);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
        | (1ULL << fichierAntlrParser::T__47)
        | (1ULL << fichierAntlrParser::T__48))) != 0)) {
        setState(93);
        declaration();
        setState(98);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(99);
      bloc();
      setState(100);
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
  enterRule(_localctx, 4, fichierAntlrParser::RuleFonction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(148);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<fichierAntlrParser::Fonction_avecparametreContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(104);
      type_fonction();
      setState(105);
      nom_var();
      setState(106);
      match(fichierAntlrParser::T__1);
      setState(107);
      parametre();
      setState(108);
      match(fichierAntlrParser::T__2);
      setState(109);
      match(fichierAntlrParser::T__3);
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
        | (1ULL << fichierAntlrParser::T__47)
        | (1ULL << fichierAntlrParser::T__48))) != 0)) {
        setState(110);
        declaration();
        setState(115);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(116);
      bloc();
      setState(117);
      match(fichierAntlrParser::T__4);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<fichierAntlrParser::Fonction_sansparametreContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(119);
      type_fonction();
      setState(120);
      nom_var();
      setState(121);
      match(fichierAntlrParser::T__1);
      setState(122);
      match(fichierAntlrParser::T__2);
      setState(123);
      match(fichierAntlrParser::T__3);
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
        | (1ULL << fichierAntlrParser::T__47)
        | (1ULL << fichierAntlrParser::T__48))) != 0)) {
        setState(124);
        declaration();
        setState(129);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(130);
      bloc();
      setState(131);
      match(fichierAntlrParser::T__4);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<FonctionContext *>(_tracker.createInstance<fichierAntlrParser::Fonction_parametrevoidContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(133);
      type_fonction();
      setState(134);
      nom_var();
      setState(135);
      match(fichierAntlrParser::T__1);
      setState(136);
      match(fichierAntlrParser::T__5);
      setState(137);
      match(fichierAntlrParser::T__2);
      setState(138);
      match(fichierAntlrParser::T__3);
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << fichierAntlrParser::T__46)
        | (1ULL << fichierAntlrParser::T__47)
        | (1ULL << fichierAntlrParser::T__48))) != 0)) {
        setState(139);
        declaration();
        setState(144);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(145);
      bloc();
      setState(146);
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
  enterRule(_localctx, 6, fichierAntlrParser::RuleParametre);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(160);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ParametreContext *>(_tracker.createInstance<fichierAntlrParser::Parametre_normalContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(150);
      type_var();
      setState(151);
      nom_var();
      setState(152);
      parametre1();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ParametreContext *>(_tracker.createInstance<fichierAntlrParser::Parametre_tableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(154);
      type_var();
      setState(155);
      nom_var();
      setState(156);
      match(fichierAntlrParser::T__6);
      setState(157);
      expr(0);
      setState(158);
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
  enterRule(_localctx, 8, fichierAntlrParser::RuleParametre1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Parametre1Context *>(_tracker.createInstance<fichierAntlrParser::Parametre1_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fichierAntlrParser::T__8) {
      setState(162);
      match(fichierAntlrParser::T__8);
      setState(163);
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
  enterRule(_localctx, 10, fichierAntlrParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VariableContext *>(_tracker.createInstance<fichierAntlrParser::Variable_simpleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(166);
      nom_var();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VariableContext *>(_tracker.createInstance<fichierAntlrParser::Variable_tableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(167);
      nom_var();
      setState(168);
      match(fichierAntlrParser::T__6);
      setState(169);
      expr(0);
      setState(170);
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

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_plusegalContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
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

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_ouegalContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
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

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_supegalContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
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

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_divegalContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
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

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_foisegalContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
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

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_pourcentegalContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
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

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_egalContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
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

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_etegalContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
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

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_infegalContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
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

fichierAntlrParser::VariableContext* fichierAntlrParser::Affectation_moinsegalContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
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
  enterRule(_localctx, 12, fichierAntlrParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(224);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_plusplusapresContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(174);
      variable();
      setState(175);
      match(fichierAntlrParser::T__9);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_plusplusavantContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(177);
      match(fichierAntlrParser::T__9);
      setState(178);
      variable();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_moinsmoinsapresContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(179);
      variable();
      setState(180);
      match(fichierAntlrParser::T__10);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_moinsmoinsavantContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(182);
      match(fichierAntlrParser::T__10);
      setState(183);
      variable();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_egalContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(184);
      variable();
      setState(185);
      match(fichierAntlrParser::T__11);
      setState(186);
      expr(0);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_etegalContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(188);
      variable();
      setState(189);
      match(fichierAntlrParser::T__12);
      setState(190);
      expr(0);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_ouegalContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(192);
      variable();
      setState(193);
      match(fichierAntlrParser::T__13);
      setState(194);
      expr(0);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_plusegalContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(196);
      variable();
      setState(197);
      match(fichierAntlrParser::T__14);
      setState(198);
      expr(0);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_moinsegalContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(200);
      variable();
      setState(201);
      match(fichierAntlrParser::T__15);
      setState(202);
      expr(0);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_foisegalContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(204);
      variable();
      setState(205);
      match(fichierAntlrParser::T__16);
      setState(206);
      expr(0);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_divegalContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(208);
      variable();
      setState(209);
      match(fichierAntlrParser::T__17);
      setState(210);
      expr(0);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_pourcentegalContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(212);
      variable();
      setState(213);
      match(fichierAntlrParser::T__18);
      setState(214);
      expr(0);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_infegalContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(216);
      variable();
      setState(217);
      match(fichierAntlrParser::T__19);
      setState(218);
      expr(0);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<AffectationContext *>(_tracker.createInstance<fichierAntlrParser::Affectation_supegalContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(220);
      variable();
      setState(221);
      match(fichierAntlrParser::T__20);
      setState(222);
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
//----------------- Expr_variableContext ------------------------------------------------------------------

fichierAntlrParser::VariableContext* fichierAntlrParser::Expr_variableContext::variable() {
  return getRuleContext<fichierAntlrParser::VariableContext>(0);
}

fichierAntlrParser::Expr_variableContext::Expr_variableContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any fichierAntlrParser::Expr_variableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<fichierAntlrVisitor*>(visitor))
    return parserVisitor->visitExpr_variable(this);
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
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, fichierAntlrParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Expr_chiffreContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(227);
      match(fichierAntlrParser::CHIFFRE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Expr_nombreContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(228);
      match(fichierAntlrParser::NOMBRE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Expr_charContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(229);
      match(fichierAntlrParser::CHAR);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Expr_parentheseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(230);
      match(fichierAntlrParser::T__1);
      setState(231);
      expr(0);
      setState(232);
      match(fichierAntlrParser::T__2);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Expr_vagueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(234);
      match(fichierAntlrParser::T__21);
      setState(235);
      expr(23);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Expr_exclamationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(236);
      match(fichierAntlrParser::T__22);
      setState(237);
      expr(22);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<Expr_variableContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(238);
      variable();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<Expr_affectationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(239);
      affectation();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<Expr_fonctionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(240);
      nom_var();
      setState(241);
      match(fichierAntlrParser::T__1);
      setState(250);
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
        setState(242);
        expr(0);
        setState(247);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fichierAntlrParser::T__8) {
          setState(243);
          match(fichierAntlrParser::T__8);
          setState(244);
          expr(0);
          setState(249);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(252);
      match(fichierAntlrParser::T__2);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(312);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(310);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Expr_multiplicationContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(256);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(257);
          match(fichierAntlrParser::T__23);
          setState(258);
          expr(22);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Expr_divisionContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(259);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(260);
          match(fichierAntlrParser::T__24);
          setState(261);
          expr(21);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Expr_modContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(262);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(263);
          match(fichierAntlrParser::T__25);
          setState(264);
          expr(20);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Expr_additionContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(265);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(266);
          match(fichierAntlrParser::T__26);
          setState(267);
          expr(19);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<Expr_soustractionContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(268);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(269);
          match(fichierAntlrParser::T__27);
          setState(270);
          expr(18);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<Expr_infinfContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(271);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(272);
          match(fichierAntlrParser::T__28);
          setState(273);
          expr(17);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<Expr_supsupContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(274);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(275);
          match(fichierAntlrParser::T__29);
          setState(276);
          expr(16);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<Expr_etContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(277);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(278);
          match(fichierAntlrParser::T__30);
          setState(279);
          expr(15);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<Expr_ouContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(280);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(281);
          match(fichierAntlrParser::T__31);
          setState(282);
          expr(14);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<Expr_chapeauContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(283);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(284);
          match(fichierAntlrParser::T__32);
          setState(285);
          expr(13);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<Expr_etetContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(286);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(287);
          match(fichierAntlrParser::T__33);
          setState(288);
          expr(12);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<Expr_ououContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(289);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(290);
          match(fichierAntlrParser::T__34);
          setState(291);
          expr(11);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<Expr_infContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(292);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(293);
          match(fichierAntlrParser::T__35);
          setState(294);
          expr(10);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<Expr_infegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(295);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(296);
          match(fichierAntlrParser::T__19);
          setState(297);
          expr(9);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<Expr_supContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(298);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(299);
          match(fichierAntlrParser::T__36);
          setState(300);
          expr(8);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<Expr_supegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(301);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(302);
          match(fichierAntlrParser::T__20);
          setState(303);
          expr(7);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<Expr_egalegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(304);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(305);
          match(fichierAntlrParser::T__37);
          setState(306);
          expr(6);
          break;
        }

        case 18: {
          auto newContext = _tracker.createInstance<Expr_diffegalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(307);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(308);
          match(fichierAntlrParser::T__38);
          setState(309);
          expr(5);
          break;
        }

        } 
      }
      setState(314);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
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
  enterRule(_localctx, 16, fichierAntlrParser::RuleReturn_);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Return_Context *>(_tracker.createInstance<fichierAntlrParser::Return_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(315);
    match(fichierAntlrParser::T__39);
    setState(317);
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
      setState(316);
      expr(0);
    }
    setState(319);
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
  enterRule(_localctx, 18, fichierAntlrParser::RuleBreak_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Break_Context *>(_tracker.createInstance<fichierAntlrParser::Break_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(fichierAntlrParser::T__41);
    setState(322);
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
  enterRule(_localctx, 20, fichierAntlrParser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(331);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fichierAntlrParser::T__42: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<fichierAntlrParser::Instruction_ifContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(324);
        structure_if();
        break;
      }

      case fichierAntlrParser::T__44: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<fichierAntlrParser::Instruction_whileContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(325);
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
        setState(326);
        expr(0);
        setState(327);
        match(fichierAntlrParser::T__40);
        break;
      }

      case fichierAntlrParser::T__39: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<fichierAntlrParser::Instruction_returnContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(329);
        return_();
        break;
      }

      case fichierAntlrParser::T__41: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<fichierAntlrParser::Instruction_breakContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(330);
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
  enterRule(_localctx, 22, fichierAntlrParser::RuleBloc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<BlocContext *>(_tracker.createInstance<fichierAntlrParser::Bloc_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(336);
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
      setState(333);
      instruction();
      setState(338);
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
  enterRule(_localctx, 24, fichierAntlrParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(381);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<fichierAntlrParser::Declaration_normaleContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(339);
      type_var();
      setState(340);
      nom_var();
      setState(345);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == fichierAntlrParser::T__8) {
        setState(341);
        match(fichierAntlrParser::T__8);
        setState(342);
        nom_var();
        setState(347);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(348);
      match(fichierAntlrParser::T__40);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<fichierAntlrParser::Declaration_definitionContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(350);
      type_var();
      setState(351);
      nom_var();
      setState(352);
      match(fichierAntlrParser::T__11);
      setState(353);
      expr(0);
      setState(354);
      match(fichierAntlrParser::T__40);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<fichierAntlrParser::Declaration_tableauContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(356);
      type_var();
      setState(357);
      nom_var();
      setState(358);
      match(fichierAntlrParser::T__6);
      setState(359);
      expr(0);
      setState(360);
      match(fichierAntlrParser::T__7);
      setState(361);
      match(fichierAntlrParser::T__40);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<fichierAntlrParser::Declaration_definitiontableauContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(363);
      type_var();
      setState(364);
      nom_var();
      setState(365);
      match(fichierAntlrParser::T__6);
      setState(366);
      expr(0);
      setState(367);
      match(fichierAntlrParser::T__7);
      setState(368);
      match(fichierAntlrParser::T__11);
      setState(369);
      match(fichierAntlrParser::T__3);
      setState(370);
      match(fichierAntlrParser::CHIFFRE);
      setState(375);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == fichierAntlrParser::T__8) {
        setState(371);
        match(fichierAntlrParser::T__8);
        setState(372);
        match(fichierAntlrParser::CHIFFRE);
        setState(377);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(378);
      match(fichierAntlrParser::T__4);
      setState(379);
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
  enterRule(_localctx, 26, fichierAntlrParser::RuleStructure_if);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Structure_ifContext *>(_tracker.createInstance<fichierAntlrParser::Structureif_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(383);
    match(fichierAntlrParser::T__42);
    setState(384);
    match(fichierAntlrParser::T__1);
    setState(385);
    expr(0);
    setState(386);
    match(fichierAntlrParser::T__2);
    setState(387);
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
  enterRule(_localctx, 28, fichierAntlrParser::RuleClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<ClauseContext *>(_tracker.createInstance<fichierAntlrParser::Clause_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(394);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fichierAntlrParser::T__3: {
        setState(389);
        match(fichierAntlrParser::T__3);
        setState(390);
        bloc();
        setState(391);
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
        setState(393);
        instruction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(396);
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
  enterRule(_localctx, 30, fichierAntlrParser::RuleElse_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    _localctx = dynamic_cast<Else_Context *>(_tracker.createInstance<fichierAntlrParser::Else_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(408);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(398);
        match(fichierAntlrParser::T__43);
        setState(404);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case fichierAntlrParser::T__3: {
            setState(399);
            match(fichierAntlrParser::T__3);
            setState(400);
            bloc();
            setState(401);
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
            setState(403);
            instruction();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(410);
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
  enterRule(_localctx, 32, fichierAntlrParser::RuleStructure_while);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Structure_whileContext *>(_tracker.createInstance<fichierAntlrParser::Structurewhile_normalContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(411);
    match(fichierAntlrParser::T__44);
    setState(412);
    match(fichierAntlrParser::T__1);
    setState(413);
    expr(0);
    setState(414);
    match(fichierAntlrParser::T__2);
    setState(420);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fichierAntlrParser::T__3: {
        setState(415);
        match(fichierAntlrParser::T__3);
        setState(416);
        bloc();
        setState(417);
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
        setState(419);
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
  enterRule(_localctx, 34, fichierAntlrParser::RuleNom_var);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(425);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(422);
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
      setState(427);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
    setState(429); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(428);
              match(fichierAntlrParser::LETTRE);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(431); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(436);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(433);
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
      setState(438);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
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
  enterRule(_localctx, 36, fichierAntlrParser::RuleType_var);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
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
  enterRule(_localctx, 38, fichierAntlrParser::RuleType_fonction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
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
    case 7: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool fichierAntlrParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 21);
    case 1: return precpred(_ctx, 20);
    case 2: return precpred(_ctx, 19);
    case 3: return precpred(_ctx, 18);
    case 4: return precpred(_ctx, 17);
    case 5: return precpred(_ctx, 16);
    case 6: return precpred(_ctx, 15);
    case 7: return precpred(_ctx, 14);
    case 8: return precpred(_ctx, 13);
    case 9: return precpred(_ctx, 12);
    case 10: return precpred(_ctx, 11);
    case 11: return precpred(_ctx, 10);
    case 12: return precpred(_ctx, 9);
    case 13: return precpred(_ctx, 8);
    case 14: return precpred(_ctx, 7);
    case 15: return precpred(_ctx, 6);
    case 16: return precpred(_ctx, 5);
    case 17: return precpred(_ctx, 4);

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
  "programme", "main", "fonction", "parametre", "parametre1", "variable", 
  "affectation", "expr", "return_", "break_", "instruction", "bloc", "declaration", 
  "structure_if", "clause", "else_", "structure_while", "nom_var", "type_var", 
  "type_fonction"
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
    0x3, 0x3d, 0x1be, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x3, 0x2, 0x7, 0x2, 0x2c, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x2f, 
    0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x32, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x35, 
    0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x38, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x3b, 
    0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x7, 0x3, 0x44, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x47, 0xb, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x52, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x55, 
    0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x61, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x64, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x69, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0x72, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x75, 0xb, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x80, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 
    0x83, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x8f, 0xa, 0x4, 
    0xc, 0x4, 0xe, 0x4, 0x92, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x97, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xa3, 0xa, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xa7, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xaf, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0xe3, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0xf8, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0xfb, 0xb, 0x9, 
    0x5, 0x9, 0xfd, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x101, 0xa, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x139, 
    0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x13c, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 
    0xa, 0x140, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x5, 0xc, 0x14e, 0xa, 0xc, 0x3, 0xd, 0x7, 0xd, 0x151, 0xa, 0xd, 0xc, 
    0xd, 0xe, 0xd, 0x154, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x7, 0xe, 0x15a, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x15d, 0xb, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x178, 0xa, 0xe, 0xc, 0xe, 
    0xe, 0xe, 0x17b, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x180, 
    0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x18d, 
    0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x197, 0xa, 0x11, 0x7, 0x11, 
    0x199, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x19c, 0xb, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x5, 0x12, 0x1a7, 0xa, 0x12, 0x3, 0x13, 0x7, 0x13, 
    0x1aa, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x1ad, 0xb, 0x13, 0x3, 0x13, 
    0x6, 0x13, 0x1b0, 0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 0x1b1, 0x3, 0x13, 
    0x7, 0x13, 0x1b5, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x1b8, 0xb, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x2, 0x3, 0x10, 
    0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 0x6, 0x4, 0x2, 
    0x30, 0x30, 0x39, 0x39, 0x4, 0x2, 0x30, 0x30, 0x39, 0x3a, 0x3, 0x2, 
    0x31, 0x33, 0x4, 0x2, 0x8, 0x8, 0x31, 0x34, 0x2, 0x1f4, 0x2, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0xae, 0x3, 0x2, 0x2, 0x2, 0xe, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x10, 0x100, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x14, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x18, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x181, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x20, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x1b9, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2c, 
    0x5, 0x1a, 0xe, 0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x33, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x32, 0x5, 0x6, 0x4, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x35, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x39, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x36, 0x38, 0x5, 0x4, 0x3, 0x2, 0x37, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0x28, 0x15, 0x2, 
    0x3d, 0x3e, 0x7, 0x3, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x4, 0x2, 0x2, 0x3f, 
    0x40, 0x5, 0x8, 0x5, 0x2, 0x40, 0x41, 0x7, 0x5, 0x2, 0x2, 0x41, 0x45, 
    0x7, 0x6, 0x2, 0x2, 0x42, 0x44, 0x5, 0x1a, 0xe, 0x2, 0x43, 0x42, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x47, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0x48, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x5, 0x18, 0xd, 0x2, 
    0x49, 0x4a, 0x7, 0x7, 0x2, 0x2, 0x4a, 0x69, 0x3, 0x2, 0x2, 0x2, 0x4b, 
    0x4c, 0x5, 0x28, 0x15, 0x2, 0x4c, 0x4d, 0x7, 0x3, 0x2, 0x2, 0x4d, 0x4e, 
    0x7, 0x4, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x5, 0x2, 0x2, 0x4f, 0x53, 0x7, 
    0x6, 0x2, 0x2, 0x50, 0x52, 0x5, 0x1a, 0xe, 0x2, 0x51, 0x50, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x55, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 0x18, 0xd, 0x2, 0x57, 
    0x58, 0x7, 0x7, 0x2, 0x2, 0x58, 0x69, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 
    0x5, 0x28, 0x15, 0x2, 0x5a, 0x5b, 0x7, 0x3, 0x2, 0x2, 0x5b, 0x5c, 0x7, 
    0x4, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x8, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x5, 
    0x2, 0x2, 0x5e, 0x62, 0x7, 0x6, 0x2, 0x2, 0x5f, 0x61, 0x5, 0x1a, 0xe, 
    0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 
    0x5, 0x18, 0xd, 0x2, 0x66, 0x67, 0x7, 0x7, 0x2, 0x2, 0x67, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x68, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x59, 0x3, 0x2, 0x2, 0x2, 0x69, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x6b, 0x5, 0x28, 0x15, 0x2, 0x6b, 0x6c, 0x5, 0x24, 0x13, 
    0x2, 0x6c, 0x6d, 0x7, 0x4, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0x8, 0x5, 0x2, 
    0x6e, 0x6f, 0x7, 0x5, 0x2, 0x2, 0x6f, 0x73, 0x7, 0x6, 0x2, 0x2, 0x70, 
    0x72, 0x5, 0x1a, 0xe, 0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x77, 0x5, 0x18, 0xd, 0x2, 0x77, 0x78, 0x7, 0x7, 0x2, 
    0x2, 0x78, 0x97, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x28, 0x15, 0x2, 
    0x7a, 0x7b, 0x5, 0x24, 0x13, 0x2, 0x7b, 0x7c, 0x7, 0x4, 0x2, 0x2, 0x7c, 
    0x7d, 0x7, 0x5, 0x2, 0x2, 0x7d, 0x81, 0x7, 0x6, 0x2, 0x2, 0x7e, 0x80, 
    0x5, 0x1a, 0xe, 0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x84, 0x3, 0x2, 0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x85, 0x5, 0x18, 0xd, 0x2, 0x85, 0x86, 0x7, 0x7, 0x2, 0x2, 
    0x86, 0x97, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x5, 0x28, 0x15, 0x2, 0x88, 
    0x89, 0x5, 0x24, 0x13, 0x2, 0x89, 0x8a, 0x7, 0x4, 0x2, 0x2, 0x8a, 0x8b, 
    0x7, 0x8, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x5, 0x2, 0x2, 0x8c, 0x90, 0x7, 
    0x6, 0x2, 0x2, 0x8d, 0x8f, 0x5, 0x1a, 0xe, 0x2, 0x8e, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x8f, 0x92, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 
    0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x5, 0x18, 0xd, 0x2, 0x94, 
    0x95, 0x7, 0x7, 0x2, 0x2, 0x95, 0x97, 0x3, 0x2, 0x2, 0x2, 0x96, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x79, 0x3, 0x2, 0x2, 0x2, 0x96, 0x87, 0x3, 
    0x2, 0x2, 0x2, 0x97, 0x7, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x5, 0x26, 
    0x14, 0x2, 0x99, 0x9a, 0x5, 0x24, 0x13, 0x2, 0x9a, 0x9b, 0x5, 0xa, 0x6, 
    0x2, 0x9b, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x26, 0x14, 0x2, 
    0x9d, 0x9e, 0x5, 0x24, 0x13, 0x2, 0x9e, 0x9f, 0x7, 0x9, 0x2, 0x2, 0x9f, 
    0xa0, 0x5, 0x10, 0x9, 0x2, 0xa0, 0xa1, 0x7, 0xa, 0x2, 0x2, 0xa1, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0x98, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9c, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0x9, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0xb, 
    0x2, 0x2, 0xa5, 0xa7, 0x5, 0x8, 0x5, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0xaf, 0x5, 0x24, 0x13, 0x2, 0xa9, 0xaa, 0x5, 0x24, 0x13, 0x2, 
    0xaa, 0xab, 0x7, 0x9, 0x2, 0x2, 0xab, 0xac, 0x5, 0x10, 0x9, 0x2, 0xac, 
    0xad, 0x7, 0xa, 0x2, 0x2, 0xad, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xae, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xae, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0xc, 0x7, 0x2, 0xb1, 0xb2, 0x7, 0xc, 
    0x2, 0x2, 0xb2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0xc, 0x2, 
    0x2, 0xb4, 0xe3, 0x5, 0xc, 0x7, 0x2, 0xb5, 0xb6, 0x5, 0xc, 0x7, 0x2, 
    0xb6, 0xb7, 0x7, 0xd, 0x2, 0x2, 0xb7, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0xb9, 0x7, 0xd, 0x2, 0x2, 0xb9, 0xe3, 0x5, 0xc, 0x7, 0x2, 0xba, 0xbb, 
    0x5, 0xc, 0x7, 0x2, 0xbb, 0xbc, 0x7, 0xe, 0x2, 0x2, 0xbc, 0xbd, 0x5, 
    0x10, 0x9, 0x2, 0xbd, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x5, 0xc, 
    0x7, 0x2, 0xbf, 0xc0, 0x7, 0xf, 0x2, 0x2, 0xc0, 0xc1, 0x5, 0x10, 0x9, 
    0x2, 0xc1, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0xc, 0x7, 0x2, 
    0xc3, 0xc4, 0x7, 0x10, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x10, 0x9, 0x2, 0xc5, 
    0xe3, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0xc, 0x7, 0x2, 0xc7, 0xc8, 
    0x7, 0x11, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x10, 0x9, 0x2, 0xc9, 0xe3, 0x3, 
    0x2, 0x2, 0x2, 0xca, 0xcb, 0x5, 0xc, 0x7, 0x2, 0xcb, 0xcc, 0x7, 0x12, 
    0x2, 0x2, 0xcc, 0xcd, 0x5, 0x10, 0x9, 0x2, 0xcd, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0xcf, 0x5, 0xc, 0x7, 0x2, 0xcf, 0xd0, 0x7, 0x13, 0x2, 0x2, 
    0xd0, 0xd1, 0x5, 0x10, 0x9, 0x2, 0xd1, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xd2, 
    0xd3, 0x5, 0xc, 0x7, 0x2, 0xd3, 0xd4, 0x7, 0x14, 0x2, 0x2, 0xd4, 0xd5, 
    0x5, 0x10, 0x9, 0x2, 0xd5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x5, 
    0xc, 0x7, 0x2, 0xd7, 0xd8, 0x7, 0x15, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x10, 
    0x9, 0x2, 0xd9, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x5, 0xc, 0x7, 
    0x2, 0xdb, 0xdc, 0x7, 0x16, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x10, 0x9, 0x2, 
    0xdd, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x5, 0xc, 0x7, 0x2, 0xdf, 
    0xe0, 0x7, 0x17, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0x10, 0x9, 0x2, 0xe1, 0xe3, 
    0x3, 0x2, 0x2, 0x2, 0xe2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xe2, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xe2, 0xba, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0xe2, 0xca, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xce, 0x3, 0x2, 0x2, 0x2, 0xe2, 
    0xd2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xda, 
    0x3, 0x2, 0x2, 0x2, 0xe2, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0xe4, 0xe5, 0x8, 0x9, 0x1, 0x2, 0xe5, 0x101, 0x7, 0x3a, 
    0x2, 0x2, 0xe6, 0x101, 0x7, 0x3b, 0x2, 0x2, 0xe7, 0x101, 0x7, 0x3c, 
    0x2, 0x2, 0xe8, 0xe9, 0x7, 0x4, 0x2, 0x2, 0xe9, 0xea, 0x5, 0x10, 0x9, 
    0x2, 0xea, 0xeb, 0x7, 0x5, 0x2, 0x2, 0xeb, 0x101, 0x3, 0x2, 0x2, 0x2, 
    0xec, 0xed, 0x7, 0x18, 0x2, 0x2, 0xed, 0x101, 0x5, 0x10, 0x9, 0x19, 
    0xee, 0xef, 0x7, 0x19, 0x2, 0x2, 0xef, 0x101, 0x5, 0x10, 0x9, 0x18, 
    0xf0, 0x101, 0x5, 0xc, 0x7, 0x2, 0xf1, 0x101, 0x5, 0xe, 0x8, 0x2, 0xf2, 
    0xf3, 0x5, 0x24, 0x13, 0x2, 0xf3, 0xfc, 0x7, 0x4, 0x2, 0x2, 0xf4, 0xf9, 
    0x5, 0x10, 0x9, 0x2, 0xf5, 0xf6, 0x7, 0xb, 0x2, 0x2, 0xf6, 0xf8, 0x5, 
    0x10, 0x9, 0x2, 0xf7, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 
    0x2, 0xfa, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 
    0xfc, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x5, 0x2, 0x2, 0xff, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x100, 0xe6, 0x3, 
    0x2, 0x2, 0x2, 0x100, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x100, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0x100, 0xec, 0x3, 0x2, 0x2, 0x2, 0x100, 0xee, 0x3, 0x2, 0x2, 
    0x2, 0x100, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x100, 0xf1, 0x3, 0x2, 0x2, 0x2, 
    0x100, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x101, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x103, 0xc, 0x17, 0x2, 0x2, 0x103, 0x104, 0x7, 0x1a, 0x2, 0x2, 0x104, 
    0x139, 0x5, 0x10, 0x9, 0x18, 0x105, 0x106, 0xc, 0x16, 0x2, 0x2, 0x106, 
    0x107, 0x7, 0x1b, 0x2, 0x2, 0x107, 0x139, 0x5, 0x10, 0x9, 0x17, 0x108, 
    0x109, 0xc, 0x15, 0x2, 0x2, 0x109, 0x10a, 0x7, 0x1c, 0x2, 0x2, 0x10a, 
    0x139, 0x5, 0x10, 0x9, 0x16, 0x10b, 0x10c, 0xc, 0x14, 0x2, 0x2, 0x10c, 
    0x10d, 0x7, 0x1d, 0x2, 0x2, 0x10d, 0x139, 0x5, 0x10, 0x9, 0x15, 0x10e, 
    0x10f, 0xc, 0x13, 0x2, 0x2, 0x10f, 0x110, 0x7, 0x1e, 0x2, 0x2, 0x110, 
    0x139, 0x5, 0x10, 0x9, 0x14, 0x111, 0x112, 0xc, 0x12, 0x2, 0x2, 0x112, 
    0x113, 0x7, 0x1f, 0x2, 0x2, 0x113, 0x139, 0x5, 0x10, 0x9, 0x13, 0x114, 
    0x115, 0xc, 0x11, 0x2, 0x2, 0x115, 0x116, 0x7, 0x20, 0x2, 0x2, 0x116, 
    0x139, 0x5, 0x10, 0x9, 0x12, 0x117, 0x118, 0xc, 0x10, 0x2, 0x2, 0x118, 
    0x119, 0x7, 0x21, 0x2, 0x2, 0x119, 0x139, 0x5, 0x10, 0x9, 0x11, 0x11a, 
    0x11b, 0xc, 0xf, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0x22, 0x2, 0x2, 0x11c, 
    0x139, 0x5, 0x10, 0x9, 0x10, 0x11d, 0x11e, 0xc, 0xe, 0x2, 0x2, 0x11e, 
    0x11f, 0x7, 0x23, 0x2, 0x2, 0x11f, 0x139, 0x5, 0x10, 0x9, 0xf, 0x120, 
    0x121, 0xc, 0xd, 0x2, 0x2, 0x121, 0x122, 0x7, 0x24, 0x2, 0x2, 0x122, 
    0x139, 0x5, 0x10, 0x9, 0xe, 0x123, 0x124, 0xc, 0xc, 0x2, 0x2, 0x124, 
    0x125, 0x7, 0x25, 0x2, 0x2, 0x125, 0x139, 0x5, 0x10, 0x9, 0xd, 0x126, 
    0x127, 0xc, 0xb, 0x2, 0x2, 0x127, 0x128, 0x7, 0x26, 0x2, 0x2, 0x128, 
    0x139, 0x5, 0x10, 0x9, 0xc, 0x129, 0x12a, 0xc, 0xa, 0x2, 0x2, 0x12a, 
    0x12b, 0x7, 0x16, 0x2, 0x2, 0x12b, 0x139, 0x5, 0x10, 0x9, 0xb, 0x12c, 
    0x12d, 0xc, 0x9, 0x2, 0x2, 0x12d, 0x12e, 0x7, 0x27, 0x2, 0x2, 0x12e, 
    0x139, 0x5, 0x10, 0x9, 0xa, 0x12f, 0x130, 0xc, 0x8, 0x2, 0x2, 0x130, 
    0x131, 0x7, 0x17, 0x2, 0x2, 0x131, 0x139, 0x5, 0x10, 0x9, 0x9, 0x132, 
    0x133, 0xc, 0x7, 0x2, 0x2, 0x133, 0x134, 0x7, 0x28, 0x2, 0x2, 0x134, 
    0x139, 0x5, 0x10, 0x9, 0x8, 0x135, 0x136, 0xc, 0x6, 0x2, 0x2, 0x136, 
    0x137, 0x7, 0x29, 0x2, 0x2, 0x137, 0x139, 0x5, 0x10, 0x9, 0x7, 0x138, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x138, 0x105, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x108, 0x3, 0x2, 0x2, 0x2, 0x138, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x10e, 0x3, 0x2, 0x2, 0x2, 0x138, 0x111, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x138, 0x117, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x11a, 0x3, 0x2, 0x2, 0x2, 0x138, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x120, 0x3, 0x2, 0x2, 0x2, 0x138, 0x123, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x126, 0x3, 0x2, 0x2, 0x2, 0x138, 0x129, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x12c, 0x3, 0x2, 0x2, 0x2, 0x138, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x132, 0x3, 0x2, 0x2, 0x2, 0x138, 0x135, 0x3, 0x2, 0x2, 0x2, 0x139, 
    0x13c, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13a, 
    0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13a, 
    0x3, 0x2, 0x2, 0x2, 0x13d, 0x13f, 0x7, 0x2a, 0x2, 0x2, 0x13e, 0x140, 
    0x5, 0x10, 0x9, 0x2, 0x13f, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 
    0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 
    0x7, 0x2b, 0x2, 0x2, 0x142, 0x13, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 
    0x7, 0x2c, 0x2, 0x2, 0x144, 0x145, 0x7, 0x2b, 0x2, 0x2, 0x145, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x146, 0x14e, 0x5, 0x1c, 0xf, 0x2, 0x147, 0x14e, 
    0x5, 0x22, 0x12, 0x2, 0x148, 0x149, 0x5, 0x10, 0x9, 0x2, 0x149, 0x14a, 
    0x7, 0x2b, 0x2, 0x2, 0x14a, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14e, 
    0x5, 0x12, 0xa, 0x2, 0x14c, 0x14e, 0x5, 0x14, 0xb, 0x2, 0x14d, 0x146, 
    0x3, 0x2, 0x2, 0x2, 0x14d, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x148, 
    0x3, 0x2, 0x2, 0x2, 0x14d, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14c, 
    0x3, 0x2, 0x2, 0x2, 0x14e, 0x17, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x151, 0x5, 
    0x16, 0xc, 0x2, 0x150, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x154, 0x3, 
    0x2, 0x2, 0x2, 0x152, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x3, 
    0x2, 0x2, 0x2, 0x153, 0x19, 0x3, 0x2, 0x2, 0x2, 0x154, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x155, 0x156, 0x5, 0x26, 0x14, 0x2, 0x156, 0x15b, 0x5, 0x24, 
    0x13, 0x2, 0x157, 0x158, 0x7, 0xb, 0x2, 0x2, 0x158, 0x15a, 0x5, 0x24, 
    0x13, 0x2, 0x159, 0x157, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15d, 0x3, 0x2, 
    0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15b, 0x3, 0x2, 
    0x2, 0x2, 0x15e, 0x15f, 0x7, 0x2b, 0x2, 0x2, 0x15f, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x160, 0x161, 0x5, 0x26, 0x14, 0x2, 0x161, 0x162, 0x5, 0x24, 
    0x13, 0x2, 0x162, 0x163, 0x7, 0xe, 0x2, 0x2, 0x163, 0x164, 0x5, 0x10, 
    0x9, 0x2, 0x164, 0x165, 0x7, 0x2b, 0x2, 0x2, 0x165, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x167, 0x5, 0x26, 0x14, 0x2, 0x167, 0x168, 0x5, 0x24, 
    0x13, 0x2, 0x168, 0x169, 0x7, 0x9, 0x2, 0x2, 0x169, 0x16a, 0x5, 0x10, 
    0x9, 0x2, 0x16a, 0x16b, 0x7, 0xa, 0x2, 0x2, 0x16b, 0x16c, 0x7, 0x2b, 
    0x2, 0x2, 0x16c, 0x180, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x5, 0x26, 
    0x14, 0x2, 0x16e, 0x16f, 0x5, 0x24, 0x13, 0x2, 0x16f, 0x170, 0x7, 0x9, 
    0x2, 0x2, 0x170, 0x171, 0x5, 0x10, 0x9, 0x2, 0x171, 0x172, 0x7, 0xa, 
    0x2, 0x2, 0x172, 0x173, 0x7, 0xe, 0x2, 0x2, 0x173, 0x174, 0x7, 0x6, 
    0x2, 0x2, 0x174, 0x179, 0x7, 0x3a, 0x2, 0x2, 0x175, 0x176, 0x7, 0xb, 
    0x2, 0x2, 0x176, 0x178, 0x7, 0x3a, 0x2, 0x2, 0x177, 0x175, 0x3, 0x2, 
    0x2, 0x2, 0x178, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x179, 0x177, 0x3, 0x2, 
    0x2, 0x2, 0x179, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17c, 0x3, 0x2, 
    0x2, 0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x7, 0x7, 
    0x2, 0x2, 0x17d, 0x17e, 0x7, 0x2b, 0x2, 0x2, 0x17e, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x17f, 0x155, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x160, 0x3, 0x2, 
    0x2, 0x2, 0x17f, 0x166, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x16d, 0x3, 0x2, 
    0x2, 0x2, 0x180, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0x7, 0x2d, 
    0x2, 0x2, 0x182, 0x183, 0x7, 0x4, 0x2, 0x2, 0x183, 0x184, 0x5, 0x10, 
    0x9, 0x2, 0x184, 0x185, 0x7, 0x5, 0x2, 0x2, 0x185, 0x186, 0x5, 0x1e, 
    0x10, 0x2, 0x186, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x7, 0x6, 
    0x2, 0x2, 0x188, 0x189, 0x5, 0x18, 0xd, 0x2, 0x189, 0x18a, 0x7, 0x7, 
    0x2, 0x2, 0x18a, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18d, 0x5, 0x16, 
    0xc, 0x2, 0x18c, 0x187, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18b, 0x3, 0x2, 
    0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x5, 0x20, 
    0x11, 0x2, 0x18f, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x190, 0x196, 0x7, 0x2e, 
    0x2, 0x2, 0x191, 0x192, 0x7, 0x6, 0x2, 0x2, 0x192, 0x193, 0x5, 0x18, 
    0xd, 0x2, 0x193, 0x194, 0x7, 0x7, 0x2, 0x2, 0x194, 0x197, 0x3, 0x2, 
    0x2, 0x2, 0x195, 0x197, 0x5, 0x16, 0xc, 0x2, 0x196, 0x191, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 0x199, 0x3, 0x2, 
    0x2, 0x2, 0x198, 0x190, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19c, 0x3, 0x2, 
    0x2, 0x2, 0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 
    0x2, 0x2, 0x19b, 0x21, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19a, 0x3, 0x2, 0x2, 
    0x2, 0x19d, 0x19e, 0x7, 0x2f, 0x2, 0x2, 0x19e, 0x19f, 0x7, 0x4, 0x2, 
    0x2, 0x19f, 0x1a0, 0x5, 0x10, 0x9, 0x2, 0x1a0, 0x1a6, 0x7, 0x5, 0x2, 
    0x2, 0x1a1, 0x1a2, 0x7, 0x6, 0x2, 0x2, 0x1a2, 0x1a3, 0x5, 0x18, 0xd, 
    0x2, 0x1a3, 0x1a4, 0x7, 0x7, 0x2, 0x2, 0x1a4, 0x1a7, 0x3, 0x2, 0x2, 
    0x2, 0x1a5, 0x1a7, 0x5, 0x16, 0xc, 0x2, 0x1a6, 0x1a1, 0x3, 0x2, 0x2, 
    0x2, 0x1a6, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x1a8, 0x1aa, 0x9, 0x2, 0x2, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 0x2, 0x2, 
    0x1aa, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1a9, 0x3, 0x2, 0x2, 0x2, 
    0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1af, 0x3, 0x2, 0x2, 0x2, 
    0x1ad, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b0, 0x7, 0x39, 0x2, 0x2, 
    0x1af, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 
    0x1b1, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b5, 0x9, 0x3, 0x2, 0x2, 
    0x1b4, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b8, 0x3, 0x2, 0x2, 0x2, 
    0x1b6, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x3, 0x2, 0x2, 0x2, 
    0x1b7, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b9, 
    0x1ba, 0x9, 0x4, 0x2, 0x2, 0x1ba, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 
    0x9, 0x5, 0x2, 0x2, 0x1bc, 0x29, 0x3, 0x2, 0x2, 0x2, 0x23, 0x2d, 0x33, 
    0x39, 0x45, 0x53, 0x62, 0x68, 0x73, 0x81, 0x90, 0x96, 0xa2, 0xa6, 0xae, 
    0xe2, 0xf9, 0xfc, 0x100, 0x138, 0x13a, 0x13f, 0x14d, 0x152, 0x15b, 0x179, 
    0x17f, 0x18c, 0x196, 0x19a, 0x1a6, 0x1ab, 0x1b1, 0x1b6, 
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
