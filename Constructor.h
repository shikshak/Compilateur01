//
// Created by heyhey on 25/03/2018.
//

#ifndef PLDCOMP_CONSTRUCTOR_H
#define PLDCOMP_CONSTRUCTOR_H


#include <fichierAntlrBaseVisitor.h>
#include <iostream>
#include "Programme.h"
#include "Simple.h"

class Constructor : public fichierAntlrBaseVisitor {
public:
    antlrcpp::Any visitProgramme_normal(fichierAntlrParser::Programme_normalContext *ctx) override {
        Programme* programme = new Programme();
        for(auto i : ctx->declaration()){
            programme->addDeclaration(visit(i));
        }
        for(auto i : ctx->fonction()){
            programme->addFonction(visit(i));
        }
        programme->setMain(visit(ctx->main()))
        cout << *programme;
        return programme;
    }

    antlrcpp::Any visitMain_avecparametre(fichierAntlrParser::Main_avecparametreContext *ctx) override {
        Fonction* fonction = new Fonction();
        fonction->setParametre(visit(ctx->parametre()));
        for(auto i : ctx->declaration()){
            fonction->addDeclaration(visit(i));
        }
        fonction->setBloc(visit(ctx->bloc()));
        return *fonction;
    }

    antlrcpp::Any visitMain_sansparametre(fichierAntlrParser::Main_sansparametreContext *ctx) override {
        Fonction* fonction = new Fonction();
        for(auto i : ctx->declaration()){
            fonction->addDeclaration(visit(i));
        }
        fonction->setBloc(visit(ctx->bloc()));
        return *fonction;
    }

    antlrcpp::Any visitMain_parametrevoid(fichierAntlrParser::Main_parametrevoidContext *ctx) override {
        Fonction* fonction = new Fonction();
        for(auto i : ctx->declaration()){
            fonction->addDeclaration(visit(i));
        }
        fonction->setBloc(visit(ctx->bloc()));
        return *fonction;
    }

    antlrcpp::Any visitFonction_avecparametre(fichierAntlrParser::Fonction_avecparametreContext *ctx) override {
        Fonction* fonction = new Fonction();
        fonction->setParametre(visit(ctx->parametre()));
        for(auto i : ctx->declaration()){
            fonction->addDeclaration(visit(i));
        }
        fonction->setBloc(visit(ctx->bloc()));
        return *fonction;
    }

    antlrcpp::Any visitFonction_sansparametre(fichierAntlrParser::Fonction_sansparametreContext *ctx) override {
        Fonction* fonction = new Fonction();
        for(auto i : ctx->declaration()){
            fonction->addDeclaration(visit(i));
        }
        fonction->setBloc(visit(ctx->bloc()));
        return *fonction;
    }

    antlrcpp::Any visitFonction_parametrevoid(fichierAntlrParser::Fonction_parametrevoidContext *ctx) override {
        Fonction* fonction = new Fonction();
        for(auto i : ctx->declaration()){
            fonction->addDeclaration(visit(i));
        }
        fonction->setBloc(visit(ctx->bloc()));
        return *fonction;
    }

    antlrcpp::Any visitParametre_normal(fichierAntlrParser::Parametre_normalContext *ctx) override {
        Parametre* parametre = new Parametre();
        for(auto i : ctx->parametre1()){
            parametre->addExpression(visit(i));
        }
        return *parametre;
    }

    antlrcpp::Any visitParametre_tableau(fichierAntlrParser::Parametre_tableauContext *ctx) override {
        Parametre* parametre = new Parametre();
        for(auto i : ctx->expr()){
            parametre->addExpression(visit(i));
        }
        return *parametre;
    }

    antlrcpp::Any visitParametre1_normal(fichierAntlrParser::Parametre1_normalContext *ctx) override {
        Parametre* parametre = new Parametre();
        for(auto i : ctx->parametre1()){
            parametre->addExpression(visit(i));
        }
        return *parametre;
    }

    antlrcpp::Any visitVariable_simple(fichierAntlrParser::Variable_simpleContext *ctx) override {
        Simple* simple = new Simple();
        //arrete ici
        return *simple;
    }

    antlrcpp::Any visitVariable_tableau(fichierAntlrParser::Variable_tableauContext *ctx) override {
        return fichierAntlrBaseVisitor::visitVariable_tableau(ctx);
    }

    antlrcpp::Any visitAffectation_plusplusapres(fichierAntlrParser::Affectation_plusplusapresContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_plusplusapres(ctx);
    }

    antlrcpp::Any visitAffectation_plusplusavant(fichierAntlrParser::Affectation_plusplusavantContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_plusplusavant(ctx);
    }

    antlrcpp::Any
    visitAffectation_moinsmoinsapres(fichierAntlrParser::Affectation_moinsmoinsapresContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_moinsmoinsapres(ctx);
    }

    antlrcpp::Any
    visitAffectation_moinsmoinsavant(fichierAntlrParser::Affectation_moinsmoinsavantContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_moinsmoinsavant(ctx);
    }

    antlrcpp::Any visitAffectation_egal(fichierAntlrParser::Affectation_egalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_egal(ctx);
    }

    antlrcpp::Any visitAffectation_etegal(fichierAntlrParser::Affectation_etegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_etegal(ctx);
    }

    antlrcpp::Any visitAffectation_ouegal(fichierAntlrParser::Affectation_ouegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_ouegal(ctx);
    }

    antlrcpp::Any visitAffectation_plusegal(fichierAntlrParser::Affectation_plusegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_plusegal(ctx);
    }

    antlrcpp::Any visitAffectation_moinsegal(fichierAntlrParser::Affectation_moinsegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_moinsegal(ctx);
    }

    antlrcpp::Any visitAffectation_foisegal(fichierAntlrParser::Affectation_foisegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_foisegal(ctx);
    }

    antlrcpp::Any visitAffectation_divegal(fichierAntlrParser::Affectation_divegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_divegal(ctx);
    }

    antlrcpp::Any visitAffectation_pourcentegal(fichierAntlrParser::Affectation_pourcentegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_pourcentegal(ctx);
    }

    antlrcpp::Any visitAffectation_infegal(fichierAntlrParser::Affectation_infegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_infegal(ctx);
    }

    antlrcpp::Any visitAffectation_supegal(fichierAntlrParser::Affectation_supegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitAffectation_supegal(ctx);
    }

    antlrcpp::Any visitExpr_infegal(fichierAntlrParser::Expr_infegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_infegal(ctx);
    }

    antlrcpp::Any visitExpr_nombre(fichierAntlrParser::Expr_nombreContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_nombre(ctx);
    }

    antlrcpp::Any visitExpr_diffegal(fichierAntlrParser::Expr_diffegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_diffegal(ctx);
    }

    antlrcpp::Any visitExpr_vague(fichierAntlrParser::Expr_vagueContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_vague(ctx);
    }

    antlrcpp::Any visitExpr_et(fichierAntlrParser::Expr_etContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_et(ctx);
    }

    antlrcpp::Any visitExpr_inf(fichierAntlrParser::Expr_infContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_inf(ctx);
    }

    antlrcpp::Any visitExpr_parenthese(fichierAntlrParser::Expr_parentheseContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_parenthese(ctx);
    }

    antlrcpp::Any visitExpr_addition(fichierAntlrParser::Expr_additionContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_addition(ctx);
    }

    antlrcpp::Any visitExpr_ou(fichierAntlrParser::Expr_ouContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_ou(ctx);
    }

    antlrcpp::Any visitExpr_sup(fichierAntlrParser::Expr_supContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_sup(ctx);
    }

    antlrcpp::Any visitExpr_etet(fichierAntlrParser::Expr_etetContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_etet(ctx);
    }

    antlrcpp::Any visitExpr_infinf(fichierAntlrParser::Expr_infinfContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_infinf(ctx);
    }

    antlrcpp::Any visitExpr_fonction(fichierAntlrParser::Expr_fonctionContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_fonction(ctx);
    }

    antlrcpp::Any visitExpr_char(fichierAntlrParser::Expr_charContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_char(ctx);
    }

    antlrcpp::Any visitExpr_egalegal(fichierAntlrParser::Expr_egalegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_egalegal(ctx);
    }

    antlrcpp::Any visitExpr_chiffre(fichierAntlrParser::Expr_chiffreContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_chiffre(ctx);
    }

    antlrcpp::Any visitExpr_variable(fichierAntlrParser::Expr_variableContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_variable(ctx);
    }

    antlrcpp::Any visitExpr_ouou(fichierAntlrParser::Expr_ououContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_ouou(ctx);
    }

    antlrcpp::Any visitExpr_division(fichierAntlrParser::Expr_divisionContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_division(ctx);
    }

    antlrcpp::Any visitExpr_mod(fichierAntlrParser::Expr_modContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_mod(ctx);
    }

    antlrcpp::Any visitExpr_supegal(fichierAntlrParser::Expr_supegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_supegal(ctx);
    }

    antlrcpp::Any visitExpr_soustraction(fichierAntlrParser::Expr_soustractionContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_soustraction(ctx);
    }

    antlrcpp::Any visitExpr_affectation(fichierAntlrParser::Expr_affectationContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_affectation(ctx);
    }

    antlrcpp::Any visitExpr_exclamation(fichierAntlrParser::Expr_exclamationContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_exclamation(ctx);
    }

    antlrcpp::Any visitExpr_multiplication(fichierAntlrParser::Expr_multiplicationContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_multiplication(ctx);
    }

    antlrcpp::Any visitExpr_supsup(fichierAntlrParser::Expr_supsupContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_supsup(ctx);
    }

    antlrcpp::Any visitExpr_chapeau(fichierAntlrParser::Expr_chapeauContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_chapeau(ctx);
    }

    antlrcpp::Any visitReturn_normal(fichierAntlrParser::Return_normalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitReturn_normal(ctx);
    }

    antlrcpp::Any visitBreak_normal(fichierAntlrParser::Break_normalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitBreak_normal(ctx);
    }

    antlrcpp::Any visitInstruction_if(fichierAntlrParser::Instruction_ifContext *ctx) override {
        return fichierAntlrBaseVisitor::visitInstruction_if(ctx);
    }

    antlrcpp::Any visitInstruction_while(fichierAntlrParser::Instruction_whileContext *ctx) override {
        return fichierAntlrBaseVisitor::visitInstruction_while(ctx);
    }

    antlrcpp::Any visitInstruction_expr(fichierAntlrParser::Instruction_exprContext *ctx) override {
        return fichierAntlrBaseVisitor::visitInstruction_expr(ctx);
    }

    antlrcpp::Any visitInstruction_return(fichierAntlrParser::Instruction_returnContext *ctx) override {
        return fichierAntlrBaseVisitor::visitInstruction_return(ctx);
    }

    antlrcpp::Any visitInstruction_break(fichierAntlrParser::Instruction_breakContext *ctx) override {
        return fichierAntlrBaseVisitor::visitInstruction_break(ctx);
    }

    antlrcpp::Any visitBloc_normal(fichierAntlrParser::Bloc_normalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitBloc_normal(ctx);
    }

    antlrcpp::Any visitDeclaration_normale(fichierAntlrParser::Declaration_normaleContext *ctx) override {
        return fichierAntlrBaseVisitor::visitDeclaration_normale(ctx);
    }

    antlrcpp::Any visitDeclaration_definition(fichierAntlrParser::Declaration_definitionContext *ctx) override {
        return fichierAntlrBaseVisitor::visitDeclaration_definition(ctx);
    }

    antlrcpp::Any visitDeclaration_tableau(fichierAntlrParser::Declaration_tableauContext *ctx) override {
        return fichierAntlrBaseVisitor::visitDeclaration_tableau(ctx);
    }

    antlrcpp::Any
    visitDeclaration_definitiontableau(fichierAntlrParser::Declaration_definitiontableauContext *ctx) override {
        return fichierAntlrBaseVisitor::visitDeclaration_definitiontableau(ctx);
    }

    antlrcpp::Any visitStructureif_normal(fichierAntlrParser::Structureif_normalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitStructureif_normal(ctx);
    }

    antlrcpp::Any visitClause_normal(fichierAntlrParser::Clause_normalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitClause_normal(ctx);
    }

    antlrcpp::Any visitElse_normal(fichierAntlrParser::Else_normalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitElse_normal(ctx);
    }

    antlrcpp::Any visitStructurewhile_normal(fichierAntlrParser::Structurewhile_normalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitStructurewhile_normal(ctx);
    }

    antlrcpp::Any visitNom_var(fichierAntlrParser::Nom_varContext *ctx) override {
        return fichierAntlrBaseVisitor::visitNom_var(ctx);
    }

    antlrcpp::Any visitType_var(fichierAntlrParser::Type_varContext *ctx) override {
        return fichierAntlrBaseVisitor::visitType_var(ctx);
    }

    antlrcpp::Any visitType_fonction(fichierAntlrParser::Type_fonctionContext *ctx) override {
        return fichierAntlrBaseVisitor::visitType_fonction(ctx);
    }
};

#endif //PLDCOMP_CONSTRUCTOR_H
