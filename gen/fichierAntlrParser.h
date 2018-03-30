
// Generated from D:/4IF/PLD-COMP/Compilateur01\fichierAntlr.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  fichierAntlrParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    Include = 51, EspaceBlanc = 52, CommentaireBlock = 53, CommentaireLigne = 54, 
    LETTRE = 55, CHIFFRE = 56, NOMBRE = 57, CHAR = 58, SYMBOLE = 59
  };

  enum {
    RuleProgramme = 0, RuleMain = 1, RuleFonction = 2, RuleParametre = 3, 
    RuleVariable = 4, RuleAffectation = 5, RuleExpr = 6, RuleReturn_ = 7, 
    RuleBreak_ = 8, RuleInstruction = 9, RuleBloc = 10, RuleDeclaration = 11, 
    RuleStructure_if = 12, RuleElse_ = 13, RuleStructure_while = 14, RuleNom_var = 15, 
    RuleType_var = 16, RuleType_fonction = 17
  };

  fichierAntlrParser(antlr4::TokenStream *input);
  ~fichierAntlrParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgrammeContext;
  class MainContext;
  class FonctionContext;
  class ParametreContext;
  class VariableContext;
  class AffectationContext;
  class ExprContext;
  class Return_Context;
  class Break_Context;
  class InstructionContext;
  class BlocContext;
  class DeclarationContext;
  class Structure_ifContext;
  class Else_Context;
  class Structure_whileContext;
  class Nom_varContext;
  class Type_varContext;
  class Type_fonctionContext; 

  class  ProgrammeContext : public antlr4::ParserRuleContext {
  public:
    ProgrammeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgrammeContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ProgrammeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Programme_normalContext : public ProgrammeContext {
  public:
    Programme_normalContext(ProgrammeContext *ctx);

    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<FonctionContext *> fonction();
    FonctionContext* fonction(size_t i);
    std::vector<MainContext *> main();
    MainContext* main(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgrammeContext* programme();

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MainContext() : antlr4::ParserRuleContext() { }
    void copyFrom(MainContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Main_parametrevoidContext : public MainContext {
  public:
    Main_parametrevoidContext(MainContext *ctx);

    Type_fonctionContext *type_fonction();
    BlocContext *bloc();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Main_sansparametreContext : public MainContext {
  public:
    Main_sansparametreContext(MainContext *ctx);

    Type_fonctionContext *type_fonction();
    BlocContext *bloc();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Main_avecparametreContext : public MainContext {
  public:
    Main_avecparametreContext(MainContext *ctx);

    Type_fonctionContext *type_fonction();
    ParametreContext *parametre();
    BlocContext *bloc();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MainContext* main();

  class  FonctionContext : public antlr4::ParserRuleContext {
  public:
    FonctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FonctionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(FonctionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Fonction_avecparametreContext : public FonctionContext {
  public:
    Fonction_avecparametreContext(FonctionContext *ctx);

    Type_fonctionContext *type_fonction();
    Nom_varContext *nom_var();
    ParametreContext *parametre();
    BlocContext *bloc();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Fonction_parametrevoidContext : public FonctionContext {
  public:
    Fonction_parametrevoidContext(FonctionContext *ctx);

    Type_fonctionContext *type_fonction();
    Nom_varContext *nom_var();
    BlocContext *bloc();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Fonction_sansparametreContext : public FonctionContext {
  public:
    Fonction_sansparametreContext(FonctionContext *ctx);

    Type_fonctionContext *type_fonction();
    Nom_varContext *nom_var();
    BlocContext *bloc();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FonctionContext* fonction();

  class  ParametreContext : public antlr4::ParserRuleContext {
  public:
    ParametreContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParametreContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ParametreContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Parametre_tableauContext : public ParametreContext {
  public:
    Parametre_tableauContext(ParametreContext *ctx);

    Type_varContext *type_var();
    Nom_varContext *nom_var();
    antlr4::tree::TerminalNode *CHIFFRE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Parametre_normalContext : public ParametreContext {
  public:
    Parametre_normalContext(ParametreContext *ctx);

    Type_varContext *type_var();
    Nom_varContext *nom_var();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParametreContext* parametre();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VariableContext() : antlr4::ParserRuleContext() { }
    void copyFrom(VariableContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Variable_simpleContext : public VariableContext {
  public:
    Variable_simpleContext(VariableContext *ctx);

    Nom_varContext *nom_var();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_tableauContext : public VariableContext {
  public:
    Variable_tableauContext(VariableContext *ctx);

    Nom_varContext *nom_var();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VariableContext* variable();

  class  AffectationContext : public antlr4::ParserRuleContext {
  public:
    AffectationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AffectationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AffectationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Affectation_plusegalContext : public AffectationContext {
  public:
    Affectation_plusegalContext(AffectationContext *ctx);

    VariableContext *variable();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_plusplusavantContext : public AffectationContext {
  public:
    Affectation_plusplusavantContext(AffectationContext *ctx);

    VariableContext *variable();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_ouegalContext : public AffectationContext {
  public:
    Affectation_ouegalContext(AffectationContext *ctx);

    VariableContext *variable();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_supegalContext : public AffectationContext {
  public:
    Affectation_supegalContext(AffectationContext *ctx);

    VariableContext *variable();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_plusplusapresContext : public AffectationContext {
  public:
    Affectation_plusplusapresContext(AffectationContext *ctx);

    VariableContext *variable();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_divegalContext : public AffectationContext {
  public:
    Affectation_divegalContext(AffectationContext *ctx);

    VariableContext *variable();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_foisegalContext : public AffectationContext {
  public:
    Affectation_foisegalContext(AffectationContext *ctx);

    VariableContext *variable();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_moinsmoinsapresContext : public AffectationContext {
  public:
    Affectation_moinsmoinsapresContext(AffectationContext *ctx);

    VariableContext *variable();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_pourcentegalContext : public AffectationContext {
  public:
    Affectation_pourcentegalContext(AffectationContext *ctx);

    VariableContext *variable();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_egalContext : public AffectationContext {
  public:
    Affectation_egalContext(AffectationContext *ctx);

    VariableContext *variable();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_etegalContext : public AffectationContext {
  public:
    Affectation_etegalContext(AffectationContext *ctx);

    VariableContext *variable();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_moinsmoinsavantContext : public AffectationContext {
  public:
    Affectation_moinsmoinsavantContext(AffectationContext *ctx);

    VariableContext *variable();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_infegalContext : public AffectationContext {
  public:
    Affectation_infegalContext(AffectationContext *ctx);

    VariableContext *variable();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_moinsegalContext : public AffectationContext {
  public:
    Affectation_moinsegalContext(AffectationContext *ctx);

    VariableContext *variable();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AffectationContext* affectation();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_infegalContext : public ExprContext {
  public:
    Expr_infegalContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_nombreContext : public ExprContext {
  public:
    Expr_nombreContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NOMBRE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_diffegalContext : public ExprContext {
  public:
    Expr_diffegalContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_vagueContext : public ExprContext {
  public:
    Expr_vagueContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_etContext : public ExprContext {
  public:
    Expr_etContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_infContext : public ExprContext {
  public:
    Expr_infContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_parentheseContext : public ExprContext {
  public:
    Expr_parentheseContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_additionContext : public ExprContext {
  public:
    Expr_additionContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_ouContext : public ExprContext {
  public:
    Expr_ouContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_supContext : public ExprContext {
  public:
    Expr_supContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_etetContext : public ExprContext {
  public:
    Expr_etetContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_infinfContext : public ExprContext {
  public:
    Expr_infinfContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_fonctionContext : public ExprContext {
  public:
    Expr_fonctionContext(ExprContext *ctx);

    Nom_varContext *nom_var();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_charContext : public ExprContext {
  public:
    Expr_charContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_egalegalContext : public ExprContext {
  public:
    Expr_egalegalContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_chiffreContext : public ExprContext {
  public:
    Expr_chiffreContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *CHIFFRE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_variableContext : public ExprContext {
  public:
    Expr_variableContext(ExprContext *ctx);

    VariableContext *variable();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_ououContext : public ExprContext {
  public:
    Expr_ououContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_divisionContext : public ExprContext {
  public:
    Expr_divisionContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_modContext : public ExprContext {
  public:
    Expr_modContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_supegalContext : public ExprContext {
  public:
    Expr_supegalContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_soustractionContext : public ExprContext {
  public:
    Expr_soustractionContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_affectationContext : public ExprContext {
  public:
    Expr_affectationContext(ExprContext *ctx);

    AffectationContext *affectation();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_exclamationContext : public ExprContext {
  public:
    Expr_exclamationContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_multiplicationContext : public ExprContext {
  public:
    Expr_multiplicationContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_supsupContext : public ExprContext {
  public:
    Expr_supsupContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_chapeauContext : public ExprContext {
  public:
    Expr_chapeauContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Return_Context : public antlr4::ParserRuleContext {
  public:
    Return_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Return_Context() : antlr4::ParserRuleContext() { }
    void copyFrom(Return_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Return_normalContext : public Return_Context {
  public:
    Return_normalContext(Return_Context *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Return_Context* return_();

  class  Break_Context : public antlr4::ParserRuleContext {
  public:
    Break_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Break_Context() : antlr4::ParserRuleContext() { }
    void copyFrom(Break_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Break_normalContext : public Break_Context {
  public:
    Break_normalContext(Break_Context *ctx);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Break_Context* break_();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InstructionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(InstructionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Instruction_exprContext : public InstructionContext {
  public:
    Instruction_exprContext(InstructionContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Instruction_whileContext : public InstructionContext {
  public:
    Instruction_whileContext(InstructionContext *ctx);

    Structure_whileContext *structure_while();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Instruction_returnContext : public InstructionContext {
  public:
    Instruction_returnContext(InstructionContext *ctx);

    Return_Context *return_();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Instruction_breakContext : public InstructionContext {
  public:
    Instruction_breakContext(InstructionContext *ctx);

    Break_Context *break_();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Instruction_ifContext : public InstructionContext {
  public:
    Instruction_ifContext(InstructionContext *ctx);

    Structure_ifContext *structure_if();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InstructionContext* instruction();

  class  BlocContext : public antlr4::ParserRuleContext {
  public:
    BlocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BlocContext() : antlr4::ParserRuleContext() { }
    void copyFrom(BlocContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Bloc_normalContext : public BlocContext {
  public:
    Bloc_normalContext(BlocContext *ctx);

    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BlocContext* bloc();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclarationContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Declaration_tableauContext : public DeclarationContext {
  public:
    Declaration_tableauContext(DeclarationContext *ctx);

    Type_varContext *type_var();
    Nom_varContext *nom_var();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Declaration_definitionContext : public DeclarationContext {
  public:
    Declaration_definitionContext(DeclarationContext *ctx);

    Type_varContext *type_var();
    Nom_varContext *nom_var();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Declaration_normaleContext : public DeclarationContext {
  public:
    Declaration_normaleContext(DeclarationContext *ctx);

    Type_varContext *type_var();
    std::vector<Nom_varContext *> nom_var();
    Nom_varContext* nom_var(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Declaration_definitiontableau_charContext : public DeclarationContext {
  public:
    Declaration_definitiontableau_charContext(DeclarationContext *ctx);

    Type_varContext *type_var();
    Nom_varContext *nom_var();
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> CHAR();
    antlr4::tree::TerminalNode* CHAR(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Declaration_definitiontableau_nombreContext : public DeclarationContext {
  public:
    Declaration_definitiontableau_nombreContext(DeclarationContext *ctx);

    Type_varContext *type_var();
    Nom_varContext *nom_var();
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> NOMBRE();
    antlr4::tree::TerminalNode* NOMBRE(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclarationContext* declaration();

  class  Structure_ifContext : public antlr4::ParserRuleContext {
  public:
    Structure_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Structure_ifContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Structure_ifContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Structureif_normalContext : public Structure_ifContext {
  public:
    Structureif_normalContext(Structure_ifContext *ctx);

    ExprContext *expr();
    Else_Context *else_();
    BlocContext *bloc();
    InstructionContext *instruction();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Structure_ifContext* structure_if();

  class  Else_Context : public antlr4::ParserRuleContext {
  public:
    Else_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Else_Context() : antlr4::ParserRuleContext() { }
    void copyFrom(Else_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Else_normalContext : public Else_Context {
  public:
    Else_normalContext(Else_Context *ctx);

    BlocContext *bloc();
    InstructionContext *instruction();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Else_Context* else_();

  class  Structure_whileContext : public antlr4::ParserRuleContext {
  public:
    Structure_whileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Structure_whileContext() : antlr4::ParserRuleContext() { }
    void copyFrom(Structure_whileContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Structurewhile_normalContext : public Structure_whileContext {
  public:
    Structurewhile_normalContext(Structure_whileContext *ctx);

    ExprContext *expr();
    BlocContext *bloc();
    InstructionContext *instruction();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Structure_whileContext* structure_while();

  class  Nom_varContext : public antlr4::ParserRuleContext {
  public:
    Nom_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LETTRE();
    antlr4::tree::TerminalNode* LETTRE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CHIFFRE();
    antlr4::tree::TerminalNode* CHIFFRE(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nom_varContext* nom_var();

  class  Type_varContext : public antlr4::ParserRuleContext {
  public:
    Type_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_varContext* type_var();

  class  Type_fonctionContext : public antlr4::ParserRuleContext {
  public:
    Type_fonctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_fonctionContext* type_fonction();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

