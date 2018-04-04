//
// Created by heyhey on 25/03/2018.
//

#ifndef PLDCOMP_CONSTRUCTOR_H
#define PLDCOMP_CONSTRUCTOR_H


#include <fichierAntlrBaseVisitor.h>
#include <iostream>
#include <string>
#include "Programme.h"
#include "Simple.h"
#include "Tableau.h"
#include "ExpressionIncrementale.h"
#include "Affectation.h"
#include "ExpressionOperateur.h"
#include "ExpressionUnaire.h"
#include "AppelFonction.h"
#include "Return.h"
#include "Break.h"
#include "StructureIF.h"
#include "StructureWHILE.h"

class Constructor : public fichierAntlrBaseVisitor {
public:
    antlrcpp::Any visitProgramme_normal(fichierAntlrParser::Programme_normalContext *ctx) override {
        std::cout << 1 << endl;
        Programme* programme_ = new Programme();
        for(auto i : ctx->declaration()){
            programme_->addDeclaration(visit(i));
        }
        for(auto i : ctx->fonction()){
            programme_->addFonction(visit(i));
        }
        for(auto i : ctx->main()){
            programme_->setMain(visit(i));
        }
        //programme_->setMain(visit(ctx->main()));
        cout << *programme_;
        return programme_;
    }

    antlrcpp::Any visitMain_avecparametre(fichierAntlrParser::Main_avecparametreContext *ctx) override {
        std::cout << 2 << endl;
        return fichierAntlrBaseVisitor::visitMain_avecparametre(ctx);
    }

    antlrcpp::Any visitMain_sansparametre(fichierAntlrParser::Main_sansparametreContext *ctx) override {
        std::cout << 3 << endl;

        Fonction* fonction_ = new Fonction();

        fonction_->setType(visit(ctx->type_fonction()));
        fonction_->setNom("main");
        for(auto i : ctx->declaration()){
            fonction_->addDeclaration(visit(i));
        }
        fonction_->setBloc(visit(ctx->bloc()));
        return fonction_;
    }

    antlrcpp::Any visitMain_parametrevoid(fichierAntlrParser::Main_parametrevoidContext *ctx) override {
        std::cout << 4 << endl;
        return fichierAntlrBaseVisitor::visitMain_parametrevoid(ctx);
    }

    antlrcpp::Any visitFonction_avecparametre(fichierAntlrParser::Fonction_avecparametreContext *ctx) override {
        std::cout << 5 << endl;
        Fonction* fonction_ = new Fonction();
        fonction_->setType(visit(ctx->type_fonction()));
        fonction_->setNom(ctx->NOM()->getText());
        fonction_->setParametre(visit(ctx->parametre()));
        for(auto i : ctx->declaration()){
            fonction_->addDeclaration(visit(i));
        }
        fonction_->setBloc(visit(ctx->bloc()));
        return fonction_;

    }

    antlrcpp::Any visitFonction_sansparametre(fichierAntlrParser::Fonction_sansparametreContext *ctx) override {
        std::cout << 6 << endl;
        return fichierAntlrBaseVisitor::visitFonction_sansparametre(ctx);
    }

    antlrcpp::Any visitFonction_parametrevoid(fichierAntlrParser::Fonction_parametrevoidContext *ctx) override {
        std::cout << 7 << endl;
        return fichierAntlrBaseVisitor::visitFonction_parametrevoid(ctx);
    }

    antlrcpp::Any visitParametre_normal(fichierAntlrParser::Parametre_normalContext *ctx) override {
        std::cout << 8 << endl;
        Simple* s_ = new Simple();

        s_->setType(visit(ctx->type_var()));
        s_->setNom(ctx->NOM()->getText());

        Parametre* p_= new Parametre;
        p_->setVariable(s_);
        return p_;
    }

    antlrcpp::Any visitParametre_tableau(fichierAntlrParser::Parametre_tableauContext *ctx) override {
        std::cout << 9 << endl;
        return fichierAntlrBaseVisitor::visitParametre_tableau(ctx);
    }

    antlrcpp::Any visitVariable_simple(fichierAntlrParser::Variable_simpleContext *ctx) override {
        std::cout << 10 << endl;
        Simple* simple = new Simple();
        simple->setNom(ctx->NOM()->getText());
        return simple;
    }

    antlrcpp::Any visitVariable_tableau(fichierAntlrParser::Variable_tableauContext *ctx) override {
        std::cout << 11 << endl;
        return fichierAntlrBaseVisitor::visitVariable_tableau(ctx);
    }

    antlrcpp::Any visitAffectation_plusplusapres(fichierAntlrParser::Affectation_plusplusapresContext *ctx) override {
        std::cout << 12 << endl;
        return fichierAntlrBaseVisitor::visitAffectation_plusplusapres(ctx);
    }

    antlrcpp::Any visitAffectation_plusplusavant(fichierAntlrParser::Affectation_plusplusavantContext *ctx) override {
        std::cout << 13 << endl;
        return fichierAntlrBaseVisitor::visitAffectation_plusplusavant(ctx);
    }

    antlrcpp::Any
    visitAffectation_moinsmoinsapres(fichierAntlrParser::Affectation_moinsmoinsapresContext *ctx) override {
        std::cout << 14 << endl;
        return fichierAntlrBaseVisitor::visitAffectation_moinsmoinsapres(ctx);
    }

    antlrcpp::Any
    visitAffectation_moinsmoinsavant(fichierAntlrParser::Affectation_moinsmoinsavantContext *ctx) override {
        std::cout << 15 << endl;
        return fichierAntlrBaseVisitor::visitAffectation_moinsmoinsavant(ctx);
    }

    antlrcpp::Any visitAffectation_egal(fichierAntlrParser::Affectation_egalContext *ctx) override {
        std::cout << 16 << endl;
        Affectation* affectation;
        affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::EGAL);
        affectation->setExpressionRight(visit(ctx->expr()));

        return affectation;
    }

    antlrcpp::Any visitAffectation_etegal(fichierAntlrParser::Affectation_etegalContext *ctx) override {
        std::cout << 17 << endl;
        return fichierAntlrBaseVisitor::visitAffectation_etegal(ctx);
    }

    antlrcpp::Any visitAffectation_ouegal(fichierAntlrParser::Affectation_ouegalContext *ctx) override {
        std::cout << 18 << endl;
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
        std::cout << 32 << endl;
        ExpressionUnaire* exprUn = new ExpressionUnaire();
        exprUn->setOperateur(ExpressionUnaire::PARENTHESE);
        return exprUn;
    }

    antlrcpp::Any visitExpr_addition(fichierAntlrParser::Expr_additionContext *ctx) override {
        std::cout << 33 << endl;
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        for(auto i : ctx->expr()){
            exprOp->setLeftExpression(visit(i));
        }
        exprOp->setOperateur(ExpressionOperateur::PLUS);
        for(auto i : ctx->expr()){
            exprOp->setRightExpression(visit(i));
        }
        return exprOp;
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
        std::cout << 39 << endl;
        Expression* expression = new Expression();
        expression->setValeur(ctx->CHAR()->getText());
        return expression;
    }

    antlrcpp::Any visitExpr_egalegal(fichierAntlrParser::Expr_egalegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_egalegal(ctx);
    }

    antlrcpp::Any visitExpr_chiffre(fichierAntlrParser::Expr_chiffreContext *ctx) override {
        std::cout << 41 << endl;
        Expression* expression = new Expression();
        expression->setValeur(ctx->CHIFFRE()->getText());
        return expression;
    }

    antlrcpp::Any visitExpr_variable(fichierAntlrParser::Expr_variableContext *ctx) override {
        std::cout << 42 << endl;
        Expression* var = new Variable();
        var = visit(ctx->variable());
        return var;
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
        std::cout << 48 << endl;
        Expression* expression = new Affectation();
        expression = visit(ctx->affectation());
        return expression;
    }

    antlrcpp::Any visitExpr_exclamation(fichierAntlrParser::Expr_exclamationContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_exclamation(ctx);
    }

    antlrcpp::Any visitExpr_multiplication(fichierAntlrParser::Expr_multiplicationContext *ctx) override {
        std::cout << 50 << endl;
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        for(auto i : ctx->expr()){
            exprOp->setLeftExpression(visit(i));
        }
        exprOp->setOperateur(ExpressionOperateur::MULTIPLICATION);
        for(auto i : ctx->expr()){
            exprOp->setRightExpression(visit(i));
        }
        return exprOp;
    }

    antlrcpp::Any visitExpr_supsup(fichierAntlrParser::Expr_supsupContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_supsup(ctx);
    }

    antlrcpp::Any visitExpr_chapeau(fichierAntlrParser::Expr_chapeauContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_chapeau(ctx);
    }

    antlrcpp::Any visitReturn_normal(fichierAntlrParser::Return_normalContext *ctx) override {
        std::cout << 53 << endl;
        Return* ret = new Return();
        if (ctx->expr()) {
            ret->setExpression(visit(ctx->expr()));
        }
        return ret;
    }

    antlrcpp::Any visitBreak_normal(fichierAntlrParser::Break_normalContext *ctx) override {
        std::cout << 54 << endl;
        Break* bre = new Break();
        return bre;
    }

    antlrcpp::Any visitInstruction_if(fichierAntlrParser::Instruction_ifContext *ctx) override {
        std::cout << 55 << endl;
        Instruction* strucIF = new StructureIF();
        strucIF = visit(ctx->structure_if());
        return strucIF;
    }

    antlrcpp::Any visitInstruction_while(fichierAntlrParser::Instruction_whileContext *ctx) override {
        std::cout << 56 << endl;
        Instruction* strucWHILE = new StructureWHILE();
        strucWHILE = visit(ctx->structure_while());
        return strucWHILE;
    }

    antlrcpp::Any visitInstruction_expr(fichierAntlrParser::Instruction_exprContext *ctx) override {
        std::cout << 57 << endl;
        Instruction* expr = new Expression();
        expr = visit(ctx->expr());
        return expr;
    }

    antlrcpp::Any visitInstruction_return(fichierAntlrParser::Instruction_returnContext *ctx) override {
        std::cout << 58 << endl;
        Instruction* ret = new Return();
        ret = visit(ctx->return_());
        return ret;
    }

    antlrcpp::Any visitInstruction_break(fichierAntlrParser::Instruction_breakContext *ctx) override {
        std::cout << 59 << endl;
        Instruction* bre = new Break();
        bre = visit(ctx->break_());
        return bre;
    }

    antlrcpp::Any visitBloc_normal(fichierAntlrParser::Bloc_normalContext *ctx) override {
        std::cout << 60 << endl;
        Bloc* bloc = new Bloc;
        for(auto i : ctx->instruction()) {
            bloc->addInstructions(visit(i));
        }
        return bloc;
    }

    antlrcpp::Any visitDeclaration_normale(fichierAntlrParser::Declaration_normaleContext *ctx) override {
        std::cout << 61 << endl;
        Declaration* decl = new Declaration();
        string type = visit(ctx->type_var()); //voncertir a celuui de l'enum
        for(auto i : ctx->NOM(){
            Simple* var = new Simple(type, i->getText());
            decl->addVariable(var);
        }
        return decl;
    }

    antlrcpp::Any visitDeclaration_definition(fichierAntlrParser::Declaration_definitionContext *ctx) override {
        std::cout << 62 << endl;
        Declaration* decl = new Declaration();
        Simple* var = new Simple();
        var->setNom(ctx->NOM()->getText());
        var->setType(visit(ctx->type_var()));
        var->setValeur(visit(ctx->expr()));

        decl->addVariable(var);

        return decl;
    }

    antlrcpp::Any visitDeclaration_tableau(fichierAntlrParser::Declaration_tableauContext *ctx) override {
        return fichierAntlrBaseVisitor::visitDeclaration_tableau(ctx);
    }

    antlrcpp::Any visitDeclaration_definitiontableau_nombre(
            fichierAntlrParser::Declaration_definitiontableau_nombreContext *ctx) override {
        return fichierAntlrBaseVisitor::visitDeclaration_definitiontableau_nombre(ctx);
    }

    antlrcpp::Any visitDeclaration_definitiontableau_char(
            fichierAntlrParser::Declaration_definitiontableau_charContext *ctx) override {
        return fichierAntlrBaseVisitor::visitDeclaration_definitiontableau_char(ctx);
    }

    antlrcpp::Any visitStructureif_normal(fichierAntlrParser::Structureif_normalContext *ctx) override {
        std::cout << 66 << endl;
        StructureIF* structureIF = new StructureIF();
        structureIF->setCondition(visit(ctx->expr()));
        structureIF->setBloc(visit(ctx->bloc()));
        if (ctx->else_())
            structureIF->setBlocElse(visit(ctx->else_()));
        return structureIF;

    }

    antlrcpp::Any visitElse_normal(fichierAntlrParser::Else_normalContext *ctx) override {
        std::cout << 67 << endl;
        Bloc * bloc_=new Bloc();
        bloc_ = visit(ctx->bloc());
        return bloc_;

    }

    antlrcpp::Any visitStructurewhile_normal(fichierAntlrParser::Structurewhile_normalContext *ctx) override {
        std::cout << 68 << endl;
        StructureWHILE* strucWHILE = new StructureWHILE();
        strucWHILE->setCondition(visit(ctx->expr()));

        strucWHILE->setBloc(visit(ctx->bloc()));
         // une autre facon je sais pas ce qui est le mieux

        return strucWHILE;
    }

    antlrcpp::Any visitType_var(fichierAntlrParser::Type_varContext *ctx) override {
        std::cout << 70 << endl;
        string valeur;
        valeur = ctx->getText(); //c'est du n'importequoio j'avoue
        return valeur;
    }

    antlrcpp::Any visitType_fonction(fichierAntlrParser::Type_fonctionContext *ctx) override {
        std::cout << 71 << endl;
        string valeur;
        valeur = ctx->getText(); //c'est du n'importequoio j'avoue
        return valeur;
    }
};

#endif //PLDCOMP_CONSTRUCTOR_H
