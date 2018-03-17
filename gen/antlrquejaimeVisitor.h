
// Generated from C:/Users/heyhey/Desktop/4IF/Compilateur01/Compilateur01\antlrquejaime.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "antlrquejaimeParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by antlrquejaimeParser.
 */
class  antlrquejaimeVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by antlrquejaimeParser.
   */
    virtual antlrcpp::Any visitAxiome(antlrquejaimeParser::AxiomeContext *context) = 0;

    virtual antlrcpp::Any visitProgramme_normal(antlrquejaimeParser::Programme_normalContext *context) = 0;

    virtual antlrcpp::Any visitVariable_simple(antlrquejaimeParser::Variable_simpleContext *context) = 0;

    virtual antlrcpp::Any visitVariable_tableau(antlrquejaimeParser::Variable_tableauContext *context) = 0;

    virtual antlrcpp::Any visitAff_variable(antlrquejaimeParser::Aff_variableContext *context) = 0;

    virtual antlrcpp::Any visitAff_tableau(antlrquejaimeParser::Aff_tableauContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_plusplusapres(antlrquejaimeParser::Affectation_plusplusapresContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_plusplusavant(antlrquejaimeParser::Affectation_plusplusavantContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_moinsmoinsapres(antlrquejaimeParser::Affectation_moinsmoinsapresContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_moinsmoinsavant(antlrquejaimeParser::Affectation_moinsmoinsavantContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_egal(antlrquejaimeParser::Affectation_egalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_etegal(antlrquejaimeParser::Affectation_etegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_ouegal(antlrquejaimeParser::Affectation_ouegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_plusegal(antlrquejaimeParser::Affectation_plusegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_moinsegal(antlrquejaimeParser::Affectation_moinsegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_foisegal(antlrquejaimeParser::Affectation_foisegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_divegal(antlrquejaimeParser::Affectation_divegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_pourcentegal(antlrquejaimeParser::Affectation_pourcentegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_infegal(antlrquejaimeParser::Affectation_infegalContext *context) = 0;

    virtual antlrcpp::Any visitAffectation_supegal(antlrquejaimeParser::Affectation_supegalContext *context) = 0;

    virtual antlrcpp::Any visitExpr_infegal(antlrquejaimeParser::Expr_infegalContext *context) = 0;

    virtual antlrcpp::Any visitExpr_nombre(antlrquejaimeParser::Expr_nombreContext *context) = 0;

    virtual antlrcpp::Any visitExpr_diffegal(antlrquejaimeParser::Expr_diffegalContext *context) = 0;

    virtual antlrcpp::Any visitExpr_vague(antlrquejaimeParser::Expr_vagueContext *context) = 0;

    virtual antlrcpp::Any visitExpr_aff(antlrquejaimeParser::Expr_affContext *context) = 0;

    virtual antlrcpp::Any visitExpr_et(antlrquejaimeParser::Expr_etContext *context) = 0;

    virtual antlrcpp::Any visitExpr_inf(antlrquejaimeParser::Expr_infContext *context) = 0;

    virtual antlrcpp::Any visitExpr_parenthese(antlrquejaimeParser::Expr_parentheseContext *context) = 0;

    virtual antlrcpp::Any visitExpr_variabke(antlrquejaimeParser::Expr_variabkeContext *context) = 0;

    virtual antlrcpp::Any visitExpr_addition(antlrquejaimeParser::Expr_additionContext *context) = 0;

    virtual antlrcpp::Any visitExpr_ou(antlrquejaimeParser::Expr_ouContext *context) = 0;

    virtual antlrcpp::Any visitExpr_sup(antlrquejaimeParser::Expr_supContext *context) = 0;

    virtual antlrcpp::Any visitExpr_etet(antlrquejaimeParser::Expr_etetContext *context) = 0;

    virtual antlrcpp::Any visitExpr_infinf(antlrquejaimeParser::Expr_infinfContext *context) = 0;

    virtual antlrcpp::Any visitExpr_char(antlrquejaimeParser::Expr_charContext *context) = 0;

    virtual antlrcpp::Any visitExpr_egalegal(antlrquejaimeParser::Expr_egalegalContext *context) = 0;

    virtual antlrcpp::Any visitExpr_ouou(antlrquejaimeParser::Expr_ououContext *context) = 0;

    virtual antlrcpp::Any visitExpr_division(antlrquejaimeParser::Expr_divisionContext *context) = 0;

    virtual antlrcpp::Any visitExpr_mod(antlrquejaimeParser::Expr_modContext *context) = 0;

    virtual antlrcpp::Any visitExpr_supegal(antlrquejaimeParser::Expr_supegalContext *context) = 0;

    virtual antlrcpp::Any visitExpr_soustraction(antlrquejaimeParser::Expr_soustractionContext *context) = 0;

    virtual antlrcpp::Any visitExpr_exclamation(antlrquejaimeParser::Expr_exclamationContext *context) = 0;

    virtual antlrcpp::Any visitExpr_multiplication(antlrquejaimeParser::Expr_multiplicationContext *context) = 0;

    virtual antlrcpp::Any visitExpr_supsup(antlrquejaimeParser::Expr_supsupContext *context) = 0;

    virtual antlrcpp::Any visitExpr_chapeau(antlrquejaimeParser::Expr_chapeauContext *context) = 0;

    virtual antlrcpp::Any visitReturn_normal(antlrquejaimeParser::Return_normalContext *context) = 0;

    virtual antlrcpp::Any visitBreak_normal(antlrquejaimeParser::Break_normalContext *context) = 0;

    virtual antlrcpp::Any visitInstruction_if(antlrquejaimeParser::Instruction_ifContext *context) = 0;

    virtual antlrcpp::Any visitInstruction_while(antlrquejaimeParser::Instruction_whileContext *context) = 0;

    virtual antlrcpp::Any visitInstruction_expr(antlrquejaimeParser::Instruction_exprContext *context) = 0;

    virtual antlrcpp::Any visitInstruction_return(antlrquejaimeParser::Instruction_returnContext *context) = 0;

    virtual antlrcpp::Any visitInstruction_break(antlrquejaimeParser::Instruction_breakContext *context) = 0;

    virtual antlrcpp::Any visitBloc_normal(antlrquejaimeParser::Bloc_normalContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_normale(antlrquejaimeParser::Declaration_normaleContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_definition(antlrquejaimeParser::Declaration_definitionContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_tableau(antlrquejaimeParser::Declaration_tableauContext *context) = 0;

    virtual antlrcpp::Any visitFonction_avecparametre(antlrquejaimeParser::Fonction_avecparametreContext *context) = 0;

    virtual antlrcpp::Any visitFonction_sansparametre(antlrquejaimeParser::Fonction_sansparametreContext *context) = 0;

    virtual antlrcpp::Any visitFonction_parametrevoid(antlrquejaimeParser::Fonction_parametrevoidContext *context) = 0;

    virtual antlrcpp::Any visitParametre_normal(antlrquejaimeParser::Parametre_normalContext *context) = 0;

    virtual antlrcpp::Any visitParametre_tableau(antlrquejaimeParser::Parametre_tableauContext *context) = 0;

    virtual antlrcpp::Any visitParametre1_normal(antlrquejaimeParser::Parametre1_normalContext *context) = 0;

    virtual antlrcpp::Any visitMain_avecparametre(antlrquejaimeParser::Main_avecparametreContext *context) = 0;

    virtual antlrcpp::Any visitMain_sansparametre(antlrquejaimeParser::Main_sansparametreContext *context) = 0;

    virtual antlrcpp::Any visitMain_parametrevoid(antlrquejaimeParser::Main_parametrevoidContext *context) = 0;

    virtual antlrcpp::Any visitStructureif_normal(antlrquejaimeParser::Structureif_normalContext *context) = 0;

    virtual antlrcpp::Any visitClause_normal(antlrquejaimeParser::Clause_normalContext *context) = 0;

    virtual antlrcpp::Any visitElse_normal(antlrquejaimeParser::Else_normalContext *context) = 0;

    virtual antlrcpp::Any visitStructurewhile_normal(antlrquejaimeParser::Structurewhile_normalContext *context) = 0;


};

