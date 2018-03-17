
// Generated from C:/Users/heyhey/Desktop/4IF/Compilateur01/Compilateur01\antlrquejaime.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  antlrquejaimeParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    Nom_var = 45, Type_var = 46, Type_fonction = 47, Include = 48, EspaceBlanc = 49, 
    CommentaireBlock = 50, CommentaireLigne = 51, LETTRE = 52, CHIFFRE = 53, 
    SYMBOLE = 54, NOMBRE = 55, CHAR = 56
  };

  enum {
    RuleBig = 0, RuleProgramme = 1, RuleVariable = 2, RuleAff = 3, RuleAffectation = 4, 
    RuleExpr = 5, RuleReturn_ = 6, RuleBreak_ = 7, RuleInstruction = 8, 
    RuleBloc = 9, RuleDeclaration = 10, RuleFonction = 11, RuleParametre = 12, 
    RuleParametre1 = 13, RuleMain = 14, RuleStructure_if = 15, RuleClause = 16, 
    RuleElse_ = 17, RuleStructure_while = 18
  };

  antlrquejaimeParser(antlr4::TokenStream *input);
  ~antlrquejaimeParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class BigContext;
  class ProgrammeContext;
  class VariableContext;
  class AffContext;
  class AffectationContext;
  class ExprContext;
  class Return_Context;
  class Break_Context;
  class InstructionContext;
  class BlocContext;
  class DeclarationContext;
  class FonctionContext;
  class ParametreContext;
  class Parametre1Context;
  class MainContext;
  class Structure_ifContext;
  class ClauseContext;
  class Else_Context;
  class Structure_whileContext; 

  class  BigContext : public antlr4::ParserRuleContext {
  public:
    BigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BigContext() : antlr4::ParserRuleContext() { }
    void copyFrom(BigContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AxiomeContext : public BigContext {
  public:
    AxiomeContext(BigContext *ctx);

    ProgrammeContext *programme();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BigContext* big();

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

    MainContext *main();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<FonctionContext *> fonction();
    FonctionContext* fonction(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgrammeContext* programme();

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

    antlr4::tree::TerminalNode *Nom_var();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Variable_tableauContext : public VariableContext {
  public:
    Variable_tableauContext(VariableContext *ctx);

    antlr4::tree::TerminalNode *Nom_var();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VariableContext* variable();

  class  AffContext : public antlr4::ParserRuleContext {
  public:
    AffContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AffContext() : antlr4::ParserRuleContext() { }
    void copyFrom(AffContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Aff_variableContext : public AffContext {
  public:
    Aff_variableContext(AffContext *ctx);

    antlr4::tree::TerminalNode *Nom_var();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Aff_tableauContext : public AffContext {
  public:
    Aff_tableauContext(AffContext *ctx);

    antlr4::tree::TerminalNode *Nom_var();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AffContext* aff();

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

    AffContext *aff();
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

    AffContext *aff();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_supegalContext : public AffectationContext {
  public:
    Affectation_supegalContext(AffectationContext *ctx);

    AffContext *aff();
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

    AffContext *aff();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_foisegalContext : public AffectationContext {
  public:
    Affectation_foisegalContext(AffectationContext *ctx);

    AffContext *aff();
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

    AffContext *aff();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_egalContext : public AffectationContext {
  public:
    Affectation_egalContext(AffectationContext *ctx);

    AffContext *aff();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_etegalContext : public AffectationContext {
  public:
    Affectation_etegalContext(AffectationContext *ctx);

    AffContext *aff();
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

    AffContext *aff();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Affectation_moinsegalContext : public AffectationContext {
  public:
    Affectation_moinsegalContext(AffectationContext *ctx);

    AffContext *aff();
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

  class  Expr_affContext : public ExprContext {
  public:
    Expr_affContext(ExprContext *ctx);

    AffContext *aff();
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

  class  Expr_variabkeContext : public ExprContext {
  public:
    Expr_variabkeContext(ExprContext *ctx);

    VariableContext *variable();
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

    antlr4::tree::TerminalNode *Type_var();
    antlr4::tree::TerminalNode *Nom_var();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Declaration_definitionContext : public DeclarationContext {
  public:
    Declaration_definitionContext(DeclarationContext *ctx);

    antlr4::tree::TerminalNode *Type_var();
    antlr4::tree::TerminalNode *Nom_var();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Declaration_normaleContext : public DeclarationContext {
  public:
    Declaration_normaleContext(DeclarationContext *ctx);

    antlr4::tree::TerminalNode *Type_var();
    std::vector<antlr4::tree::TerminalNode *> Nom_var();
    antlr4::tree::TerminalNode* Nom_var(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclarationContext* declaration();

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

    antlr4::tree::TerminalNode *Type_fonction();
    antlr4::tree::TerminalNode *Nom_var();
    ParametreContext *parametre();
    BlocContext *bloc();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Fonction_parametrevoidContext : public FonctionContext {
  public:
    Fonction_parametrevoidContext(FonctionContext *ctx);

    antlr4::tree::TerminalNode *Type_fonction();
    antlr4::tree::TerminalNode *Nom_var();
    BlocContext *bloc();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Fonction_sansparametreContext : public FonctionContext {
  public:
    Fonction_sansparametreContext(FonctionContext *ctx);

    antlr4::tree::TerminalNode *Type_fonction();
    antlr4::tree::TerminalNode *Nom_var();
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

    antlr4::tree::TerminalNode *Type_var();
    antlr4::tree::TerminalNode *Nom_var();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Parametre_normalContext : public ParametreContext {
  public:
    Parametre_normalContext(ParametreContext *ctx);

    antlr4::tree::TerminalNode *Type_var();
    antlr4::tree::TerminalNode *Nom_var();
    Parametre1Context *parametre1();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParametreContext* parametre();

  class  Parametre1Context : public antlr4::ParserRuleContext {
  public:
    Parametre1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Parametre1Context() : antlr4::ParserRuleContext() { }
    void copyFrom(Parametre1Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Parametre1_normalContext : public Parametre1Context {
  public:
    Parametre1_normalContext(Parametre1Context *ctx);

    ParametreContext *parametre();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Parametre1Context* parametre1();

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

    antlr4::tree::TerminalNode *Type_fonction();
    antlr4::tree::TerminalNode *Nom_var();
    BlocContext *bloc();
    ParametreContext *parametre();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Main_sansparametreContext : public MainContext {
  public:
    Main_sansparametreContext(MainContext *ctx);

    antlr4::tree::TerminalNode *Type_fonction();
    antlr4::tree::TerminalNode *Nom_var();
    BlocContext *bloc();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Main_avecparametreContext : public MainContext {
  public:
    Main_avecparametreContext(MainContext *ctx);

    antlr4::tree::TerminalNode *Type_fonction();
    antlr4::tree::TerminalNode *Nom_var();
    ParametreContext *parametre();
    BlocContext *bloc();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MainContext* main();

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
    ClauseContext *clause();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Structure_ifContext* structure_if();

  class  ClauseContext : public antlr4::ParserRuleContext {
  public:
    ClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ClauseContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ClauseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Clause_normalContext : public ClauseContext {
  public:
    Clause_normalContext(ClauseContext *ctx);

    Else_Context *else_();
    BlocContext *bloc();
    InstructionContext *instruction();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ClauseContext* clause();

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

    std::vector<BlocContext *> bloc();
    BlocContext* bloc(size_t i);
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);
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

