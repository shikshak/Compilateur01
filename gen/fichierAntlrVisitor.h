
// Generated from C:/Users/heyhey/Desktop/4IF/Compilateur01/Compilateur01\fichierAntlr.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "fichierAntlrParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by fichierAntlrParser.
 */
class  fichierAntlrVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by fichierAntlrParser.
   */
    virtual antlrcpp::Any visitProgramme_normal(fichierAntlrParser::Programme_normalContext *context) = 0;

    virtual antlrcpp::Any visitMain_avecparametre(fichierAntlrParser::Main_avecparametreContext *context) = 0;

    virtual antlrcpp::Any visitMain_sansparametre(fichierAntlrParser::Main_sansparametreContext *context) = 0;

    virtual antlrcpp::Any visitMain_parametrevoid(fichierAntlrParser::Main_parametrevoidContext *context) = 0;

    virtual antlrcpp::Any visitFonction_avecparametre(fichierAntlrParser::Fonction_avecparametreContext *context) = 0;

    virtual antlrcpp::Any visitFonction_sansparametre(fichierAntlrParser::Fonction_sansparametreContext *context) = 0;

    virtual antlrcpp::Any visitFonction_parametrevoid(fichierAntlrParser::Fonction_parametrevoidContext *context) = 0;

    virtual antlrcpp::Any visitParametre_normal(fichierAntlrParser::Parametre_normalContext *context) = 0;

    virtual antlrcpp::Any visitParametre_tableau(fichierAntlrParser::Parametre_tableauContext *context) = 0;

    virtual antlrcpp::Any visitParametre1_normal(fichierAntlrParser::Parametre1_normalContext *context) = 0;

    virtual antlrcpp::Any visitVariable_simple(fichierAntlrParser::Variable_simpleContext *context) = 0;

    virtual antlrcpp::Any visitVariable_tableau(fichierAntlrParser::Variable_tableauContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_plusplusapres(fichierAntlrParser::Affectation_plusplusapresContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_plusplusavant(fichierAntlrParser::Affectation_plusplusavantContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_moinsmoinsapres(fichierAntlrParser::Affectation_moinsmoinsapresContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_moinsmoinsavant(fichierAntlrParser::Affectation_moinsmoinsavantContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_egal(fichierAntlrParser::Affectation_egalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_etegal(fichierAntlrParser::Affectation_etegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_ouegal(fichierAntlrParser::Affectation_ouegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_plusegal(fichierAntlrParser::Affectation_plusegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_moinsegal(fichierAntlrParser::Affectation_moinsegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_foisegal(fichierAntlrParser::Affectation_foisegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_divegal(fichierAntlrParser::Affectation_divegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_pourcentegal(fichierAntlrParser::Affectation_pourcentegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_infegal(fichierAntlrParser::Affectation_infegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_supegal(fichierAntlrParser::Affectation_supegalContext *context) = 0;

    virtual antlrcpp::Any visitExpr_infegal(fichierAntlrParser::Expr_infegalContext *context) = 0;

    virtual antlrcpp::Any visitExpr_nombre(fichierAntlrParser::Expr_nombreContext *context) = 0;

    virtual antlrcpp::Any visitExpr_diffegal(fichierAntlrParser::Expr_diffegalContext *context) = 0;

    virtual antlrcpp::Any visitExpr_vague(fichierAntlrParser::Expr_vagueContext *context) = 0;

    virtual antlrcpp::Any visitExpr_et(fichierAntlrParser::Expr_etContext *context) = 0;

    virtual antlrcpp::Any visitExpr_inf(fichierAntlrParser::Expr_infContext *context) = 0;

    virtual antlrcpp::Any visitExpr_parenthese(fichierAntlrParser::Expr_parentheseContext *context) = 0;

    virtual antlrcpp::Any visitExpr_addition(fichierAntlrParser::Expr_additionContext *context) = 0;

    virtual antlrcpp::Any visitExpr_ou(fichierAntlrParser::Expr_ouContext *context) = 0;

    virtual antlrcpp::Any visitExpr_sup(fichierAntlrParser::Expr_supContext *context) = 0;

    virtual antlrcpp::Any visitExpr_etet(fichierAntlrParser::Expr_etetContext *context) = 0;

    virtual antlrcpp::Any visitExpr_infinf(fichierAntlrParser::Expr_infinfContext *context) = 0;

    virtual antlrcpp::Any visitExpr_fonction(fichierAntlrParser::Expr_fonctionContext *context) = 0;

    virtual antlrcpp::Any visitExpr_char(fichierAntlrParser::Expr_charContext *context) = 0;

    virtual antlrcpp::Any visitExpr_egalegal(fichierAntlrParser::Expr_egalegalContext *context) = 0;

    virtual antlrcpp::Any visitExpr_chiffre(fichierAntlrParser::Expr_chiffreContext *context) = 0;

    virtual antlrcpp::Any visitExpr_variable(fichierAntlrParser::Expr_variableContext *context) = 0;

    virtual antlrcpp::Any visitExpr_ouou(fichierAntlrParser::Expr_ououContext *context) = 0;

    virtual antlrcpp::Any visitExpr_division(fichierAntlrParser::Expr_divisionContext *context) = 0;

    virtual antlrcpp::Any visitExpr_mod(fichierAntlrParser::Expr_modContext *context) = 0;

    virtual antlrcpp::Any visitExpr_supegal(fichierAntlrParser::Expr_supegalContext *context) = 0;

    virtual antlrcpp::Any visitExpr_soustraction(fichierAntlrParser::Expr_soustractionContext *context) = 0;

    virtual antlrcpp::Any visitExpr_affectation(fichierAntlrParser::Expr_affectationContext *context) = 0;

    virtual antlrcpp::Any visitExpr_exclamation(fichierAntlrParser::Expr_exclamationContext *context) = 0;

    virtual antlrcpp::Any visitExpr_multiplication(fichierAntlrParser::Expr_multiplicationContext *context) = 0;

    virtual antlrcpp::Any visitExpr_supsup(fichierAntlrParser::Expr_supsupContext *context) = 0;

    virtual antlrcpp::Any visitExpr_chapeau(fichierAntlrParser::Expr_chapeauContext *context) = 0;

    virtual antlrcpp::Any visitReturn_normal(fichierAntlrParser::Return_normalContext *context) = 0;

    virtual antlrcpp::Any visitBreak_normal(fichierAntlrParser::Break_normalContext *context) = 0;

    virtual antlrcpp::Any visitInstruction_if(fichierAntlrParser::Instruction_ifContext *context) = 0;

    virtual antlrcpp::Any visitInstruction_while(fichierAntlrParser::Instruction_whileContext *context) = 0;

    virtual antlrcpp::Any visitInstruction_expr(fichierAntlrParser::Instruction_exprContext *context) = 0;

    virtual antlrcpp::Any visitInstruction_return(fichierAntlrParser::Instruction_returnContext *context) = 0;

    virtual antlrcpp::Any visitInstruction_break(fichierAntlrParser::Instruction_breakContext *context) = 0;

    virtual antlrcpp::Any visitBloc_normal(fichierAntlrParser::Bloc_normalContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_normale(fichierAntlrParser::Declaration_normaleContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_definition(fichierAntlrParser::Declaration_definitionContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_tableau(fichierAntlrParser::Declaration_tableauContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_definitiontableau(fichierAntlrParser::Declaration_definitiontableauContext *context) = 0;

    virtual antlrcpp::Any visitStructureif_normal(fichierAntlrParser::Structureif_normalContext *context) = 0;

    virtual antlrcpp::Any visitClause_normal(fichierAntlrParser::Clause_normalContext *context) = 0;

    virtual antlrcpp::Any visitElse_normal(fichierAntlrParser::Else_normalContext *context) = 0;

    virtual antlrcpp::Any visitStructurewhile_normal(fichierAntlrParser::Structurewhile_normalContext *context) = 0;

    virtual antlrcpp::Any visitNom_var(fichierAntlrParser::Nom_varContext *context) = 0;

    virtual antlrcpp::Any visitType_var(fichierAntlrParser::Type_varContext *context) = 0;

    virtual antlrcpp::Any visitType_fonction(fichierAntlrParser::Type_fonctionContext *context) = 0;


};

