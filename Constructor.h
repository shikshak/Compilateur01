//
// Created by heyhey on 25/03/2018.
//

#ifndef PLDCOMP_CONSTRUCTOR_H
#define PLDCOMP_CONSTRUCTOR_H


#include <fichierAntlrBaseVisitor.h>
#include <iostream>
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
        Programme* programme_ = new Programme();
        for(auto i : ctx->declaration()){
            programme_->addDeclaration(visit(i));
        }
        for(auto i : ctx->fonction()){
            programme_->addFonction(visit(i));
        }
        programme_->setMain(visit(ctx->main()));
        cout << *programme_;
        return programme_;
    }

    antlrcpp::Any visitMain_avecparametre(fichierAntlrParser::Main_avecparametreContext *ctx) override {
        Fonction* fonction_ = new Fonction();
        fonction_->setType(visit(ctx->type_fonction()));
        fonction_->setNom("main");
        fonction_->setParametre(visit(ctx->parametre()));
        for(auto i : ctx->declaration()){
            fonction_->addDeclaration(visit(i));
        }
        fonction_->setBloc(visit(ctx->bloc()));
        return *fonction_;
    }

    antlrcpp::Any visitMain_sansparametre(fichierAntlrParser::Main_sansparametreContext *ctx) override {
        Fonction* fonction_ = new Fonction();

        fonction_->setType(visit(ctx->type_fonction()));
        fonction_->setNom("main");
        for(auto i : ctx->declaration()){
            fonction_->addDeclaration(visit(i));
        }
        fonction_->setBloc(visit(ctx->bloc()));
        return *fonction_;
    }

    antlrcpp::Any visitMain_parametrevoid(fichierAntlrParser::Main_parametrevoidContext *ctx) override {
        Fonction* fonction_ = new Fonction();
        fonction_->setType(visit(ctx->type_fonction()));
        fonction_->setNom("main");
        for(auto i : ctx->declaration()){
            fonction_->addDeclaration(visit(i));
        }
        fonction_->setBloc(visit(ctx->bloc()));
        return *fonction_;
    }

    antlrcpp::Any visitFonction_avecparametre(fichierAntlrParser::Fonction_avecparametreContext *ctx) override {
        Fonction* fonction_ = new Fonction();
        fonction_->setType(visit(ctx->type_fonction()));
        fonction_->setNom(visit(ctx->nom_var()));
        fonction_->setParametre(visit(ctx->parametre()));
        for(auto i : ctx->declaration()){
            fonction_->addDeclaration(visit(i));
        }
        fonction_->setBloc(visit(ctx->bloc()));
        return *fonction_;
    }

    antlrcpp::Any visitFonction_sansparametre(fichierAntlrParser::Fonction_sansparametreContext *ctx) override {
        Fonction* fonction_ = new Fonction();
        fonction_->setType(visit(ctx->type_fonction()));
        fonction_->setNom(visit(ctx->nom_var()));
        for(auto i : ctx->declaration()){
            fonction_->addDeclaration(visit(i));
        }
        fonction_->setBloc(visit(ctx->bloc()));
        return *fonction;
    }

    antlrcpp::Any visitFonction_parametrevoid(fichierAntlrParser::Fonction_parametrevoidContext *ctx) override {
        Fonction* fonction_ = new Fonction();
        fonction_->setType(visit(ctx->type_fonction()));
        fonction_->setNom(visit(ctx->nom_var()));
        for(auto i : ctx->declaration()){
            fonction_->addDeclaration(visit(i));
        }
        fonction_->setBloc(visit(ctx->bloc()));
        return *fonction_;
    }

    antlrcpp::Any visitParametre_normal(fichierAntlrParser::Parametre_normalContext *ctx) override {
        Parametre* parametre_ = new Parametre();
        for(auto i : ctx->parametre1()){
            parametre_->addExpression(visit(i));
        }
        return *parametre_;
    }

    antlrcpp::Any visitParametre_tableau(fichierAntlrParser::Parametre_tableauContext *ctx) override {
        Parametre* parametre_ = new Parametre();
        for(auto i : ctx->expr()){
            parametre_->addExpression(visit(i));
        }
        return *parametre_;
    }

    antlrcpp::Any visitParametre1_normal(fichierAntlrParser::Parametre1_normalContext *ctx) override {
        Parametre* parametre_ = new Parametre();
        for(auto i : ctx->parametre()){
            parametre_->addExpression(visit(i));
        }
        return *parametre_;
    }

    antlrcpp::Any visitVariable_simple(fichierAntlrParser::Variable_simpleContext *ctx) override {
        Simple* simple = new Simple();
        simple->setNom(visit(ctx->nom_var()));
        return *simple;
    }

    antlrcpp::Any visitVariable_tableau(fichierAntlrParser::Variable_tableauContext *ctx) override {
        Tableau* tableau = new Tableau();
        tableau->setNom(visit(ctx->nom_var()));
        tableau->setPosition(visit(ctx->expr()));

        return *tableau;
    }

    antlrcpp::Any visitAffectation_plusplusapres(fichierAntlrParser::Affectation_plusplusapresContext *ctx) override {
        ExpressionIncrementale* exprIncr = new ExpressionIncrementale();
        exprIncr->setVariable(visit(ctx->variable()));
        exprIncr->setOperateurINcrement(ExpressionIncrementale::PLUSPLUSAPRES);

        return *exprIncr;
    }

    antlrcpp::Any visitAffectation_plusplusavant(fichierAntlrParser::Affectation_plusplusavantContext *ctx) override {
        ExpressionIncrementale* exprIncr = new ExpressionIncrementale();
        exprIncr->setVariable(visit(ctx->variable()));
        exprIncr->setOperateurINcrement(ExpressionIncrementale::PLUSPLUSAVANT);

        return *exprIncr;
    }

    antlrcpp::Any
    visitAffectation_moinsmoinsapres(fichierAntlrParser::Affectation_moinsmoinsapresContext *ctx) override {
        ExpressionIncrementale* exprIncr = new ExpressionIncrementale();
        exprIncr->setVariable(visit(ctx->variable()));
        exprIncr->setOperateurINcrement(ExpressionIncrementale::MOINSMOINSAPRES);

        return *exprIncr;
    }

    antlrcpp::Any
    visitAffectation_moinsmoinsavant(fichierAntlrParser::Affectation_moinsmoinsavantContext *ctx) override {
        ExpressionIncrementale* exprIncr = new ExpressionIncrementale();
        exprIncr->setVariable(visit(ctx->variable()));
        exprIncr->setOperateurINcrement(ExpressionIncrementale::MOINSMOINSAVANT);

        return *exprIncr;
    }

    antlrcpp::Any visitAffectation_egal(fichierAntlrParser::Affectation_egalContext *ctx) override {
        Affectation* affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::EGAL);
        affectation->setExpressionRight(visit(ctx->expr()));

        return *affectation;
    }

    antlrcpp::Any visitAffectation_etegal(fichierAntlrParser::Affectation_etegalContext *ctx) override {
        Affectation* affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::ETEGAL);
        affectation->setExpressionRight(visit(ctx->expr()));

        return *affectation;
    }

    antlrcpp::Any visitAffectation_ouegal(fichierAntlrParser::Affectation_ouegalContext *ctx) override {
        Affectation* affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::OUEGAL);
        affectation->setExpressionRight(visit(ctx->expr()));

        return *affectation;
    }

    antlrcpp::Any visitAffectation_plusegal(fichierAntlrParser::Affectation_plusegalContext *ctx) override {
        Affectation* affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::PLUSEGAL);
        affectation->setExpressionRight(visit(ctx->expr()));

        return *affectation;
    }

    antlrcpp::Any visitAffectation_moinsegal(fichierAntlrParser::Affectation_moinsegalContext *ctx) override {
        Affectation* affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::MOINSEGAL);
        affectation->setExpressionRight(visit(ctx->expr()));

        return *affectation;
    }

    antlrcpp::Any visitAffectation_foisegal(fichierAntlrParser::Affectation_foisegalContext *ctx) override {
        Affectation* affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::FOISEGAL);
        affectation->setExpressionRight(visit(ctx->expr()));

        return *affectation;
    }

    antlrcpp::Any visitAffectation_divegal(fichierAntlrParser::Affectation_divegalContext *ctx) override {
        Affectation* affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::DIVEGAL);
        affectation->setExpressionRight(visit(ctx->expr()));

        return *affectation;
    }

    antlrcpp::Any visitAffectation_pourcentegal(fichierAntlrParser::Affectation_pourcentegalContext *ctx) override {
        Affectation* affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::POURCENTAGEEGAL);
        affectation->setExpressionRight(visit(ctx->expr()));

        return *affectation;
    }

    antlrcpp::Any visitAffectation_infegal(fichierAntlrParser::Affectation_infegalContext *ctx) override {
        Affectation* affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::INFEGAL);
        affectation->setExpressionRight(visit(ctx->expr()));

        return *affectation;
    }

    antlrcpp::Any visitAffectation_supegal(fichierAntlrParser::Affectation_supegalContext *ctx) override {
        Affectation* affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::SUPEGAL);
        affectation->setExpressionRight(visit(ctx->expr()));

        return *affectation;
    }

    antlrcpp::Any visitExpr_infegal(fichierAntlrParser::Expr_infegalContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::INFEGAL);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_nombre(fichierAntlrParser::Expr_nombreContext *ctx) override {
        Expression* expression = new Expression();
        expression->setValeur(ctx->NOMBRE()->getText());

        return expression;
    }

    antlrcpp::Any visitExpr_diffegal(fichierAntlrParser::Expr_diffegalContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::DIFFEGAL);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_vague(fichierAntlrParser::Expr_vagueContext *ctx) override {
        ExpressionUnaire* exprUn = new ExpressionUnaire();
        exprUn->setOperateur(ExpressionUnaire::VAGUE);

        return exprUn;
    }

    antlrcpp::Any visitExpr_et(fichierAntlrParser::Expr_etContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::ET);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_inf(fichierAntlrParser::Expr_infContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::INF);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_parenthese(fichierAntlrParser::Expr_parentheseContext *ctx) override {
        ExpressionUnaire* exprUn = new ExpressionUnaire();
        exprUn->setOperateur(ExpressionUnaire::PARENTHESE);

        return exprUn;
    }

    antlrcpp::Any visitExpr_addition(fichierAntlrParser::Expr_additionContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::PLUS);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_ou(fichierAntlrParser::Expr_ouContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::OU);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_sup(fichierAntlrParser::Expr_supContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::SUP);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_etet(fichierAntlrParser::Expr_etetContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::ETET);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_infinf(fichierAntlrParser::Expr_infinfContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::INFINF);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_fonction(fichierAntlrParser::Expr_fonctionContext *ctx) override {
        AppelFonction* appFonc = new AppelFonction();
        appFonc->getNomFonction(visit(ctx->nom_var()));
        appFonc->setParametre(visit(ctx->expr())); //faux

        return *appFonc;
    }

    antlrcpp::Any visitExpr_char(fichierAntlrParser::Expr_charContext *ctx) override {
        Expression* expression = new Expression();
        expression->setValeur(ctx->CHAR()->getText());

        return *expression;
    }

    antlrcpp::Any visitExpr_egalegal(fichierAntlrParser::Expr_egalegalContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::EGALEGAL);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_chiffre(fichierAntlrParser::Expr_chiffreContext *ctx) override {
        Expression* expression = new Expression();
        expression->setValeur(ctx->CHIFFRE()->getText());

        return *expression;
    }

    antlrcpp::Any visitExpr_variable(fichierAntlrParser::Expr_variableContext *ctx) override {
        Variable* var = new Variable();
        var->setNom(visit(ctx->variable()));

        return *var;
    }

    antlrcpp::Any visitExpr_ouou(fichierAntlrParser::Expr_ououContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::OUOU);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_division(fichierAntlrParser::Expr_divisionContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::DIVISION);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_mod(fichierAntlrParser::Expr_modContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::MOD);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_supegal(fichierAntlrParser::Expr_supegalContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::SUPEGAL);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_soustraction(fichierAntlrParser::Expr_soustractionContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::MOINS);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_affectation(fichierAntlrParser::Expr_affectationContext *ctx) override {
        Affectation* affectation = new Affectation();
        affectation(visit(ctx->affectation()));

        return affectation;
    }

    antlrcpp::Any visitExpr_exclamation(fichierAntlrParser::Expr_exclamationContext *ctx) override {
        ExpressionUnaire* exprUn = new ExpressionUnaire();
        exprUn->setOperateur(ExpressionUnaire::EXCLAMATION);

        return exprUn;
    }

    antlrcpp::Any visitExpr_multiplication(fichierAntlrParser::Expr_multiplicationContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::MULTIPLICATION);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_supsup(fichierAntlrParser::Expr_supsupContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::SUPSUP);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitExpr_chapeau(fichierAntlrParser::Expr_chapeauContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr()));
        exprOp->setOperateur(ExpressionOperateur::CHAPEAU);
        exprOp->setRightExpression(visit(ctx->expr));

        return *exprOp;
    }

    antlrcpp::Any visitReturn_normal(fichierAntlrParser::Return_normalContext *ctx) override {
        Return* ret = new Return();
        ret->setExpression(visit(ctx->expr()));

        return ret;
    }

    antlrcpp::Any visitBreak_normal(fichierAntlrParser::Break_normalContext *ctx) override {
        Break* bre = new Break();

        return bre;
    }

    antlrcpp::Any visitInstruction_if(fichierAntlrParser::Instruction_ifContext *ctx) override {
        StructureIF* strucIF = new StructureIF();
        strucIF(visit(ctx->structure_if()));

        return *strucIF;
    }

    antlrcpp::Any visitInstruction_while(fichierAntlrParser::Instruction_whileContext *ctx) override {
        StructureWHILE* strucWHILE = new StructureWHILE();
        strucWHILE(visit(ctx->structure_while()));

        return *strucWHILE;
    }

    antlrcpp::Any visitInstruction_expr(fichierAntlrParser::Instruction_exprContext *ctx) override {
        Expression* expr = new Expression();
        expr(visit(ctx->expr()));

        return *expr;
    }

    antlrcpp::Any visitInstruction_return(fichierAntlrParser::Instruction_returnContext *ctx) override {
        Return* ret = new Return();
        ret(visit(ctx->return_()));

        return *ret;
    }

    antlrcpp::Any visitInstruction_break(fichierAntlrParser::Instruction_breakContext *ctx) override {
        Break* bre = new Break();
        bre(visit(ctx->break_()));

        return *bre;
    }

    antlrcpp::Any visitBloc_normal(fichierAntlrParser::Bloc_normalContext *ctx) override {
        Bloc* bloc = new Bloc;
        bloc->setInstructions(visit(ctx->instruction()));

        return bloc;
    }

    antlrcpp::Any visitDeclaration_normale(fichierAntlrParser::Declaration_normaleContext *ctx) override {
        Declaration* decl = new Declaration();
        string type = visit(ctx->type_var()); //voncertir a celuui de l'enum
        for(auto i : ctx->nom_var()){
            Simple* var = new Simple(type, visit(i));
            decl->addVariable(var);
        }

        return decl;
    }

    antlrcpp::Any visitDeclaration_definition(fichierAntlrParser::Declaration_definitionContext *ctx) override {
        Declaration* decl = new Declaration();
        Simple* var = new Simple();
        var->setNom(visit(ctx->nom_var()));
        var->setType(visit(ctx->type_var()));
        var->setValeur(visit(ctx->expr()));
        decl->addVariable(var);

        return *decl;
    }

    antlrcpp::Any visitDeclaration_tableau(fichierAntlrParser::Declaration_tableauContext *ctx) override {
        Declaration* decl = new Declaration();
        string type = visit(ctx->type_var()); //voncertir a celuui de l'enum
        for(auto i : ctx->nom_var()){
            Tableau* var = new Tableau(type, visit(i),false,visit(ctx->expr()));
            decl->addVariable(var);
        }

        return decl;
    }

    antlrcpp::Any
    visitDeclaration_definitiontableau(fichierAntlrParser::Declaration_definitiontableauContext *ctx) override {
        Declaration* decl = new Declaration();
        Tableau* var = new Tableau();
        var->setNom(visit(ctx->nom_var()));
        var->setType(visit(ctx->type_var()));
        var->setTaille(visit(ctx->CHIFFRE));
        var->setValeur(visit(ctx->expr()));
        decl->addVariable(var);

        return *decl;
    }

    antlrcpp::Any visitStructureif_normal(fichierAntlrParser::Structureif_normalContext *ctx) override {
        StructureIF* structureIF = new StructureIF();
        structureIF->setCondition(visit(ctx->expr()));
        structureIF->addIFetELSE(visit(ctx->clause())); //faux car dans clause il y a le else aussi..je sais pas comment le lier au if s'il est dans le bloc..

        return *structureIF;
    }

    antlrcpp::Any visitClause_normal(fichierAntlrParser::Clause_normalContext *ctx) override {
        vector blocs = new vector();
        blocs.push_back(visit(ctx->bloc()));
        blocs.push_back(visit(ctx->instruction())); // je sais pas ce qu'il se passe s'il n'y a pas la regle, est ce quil push back rien ??
        blocs.push_back(visit(ctx->else_()));

        return blocs;
    }

    antlrcpp::Any visitElse_normal(fichierAntlrParser::Else_normalContext *ctx) override {
        Bloc* bloc = new Bloc();
        bloc(visit(ctx->bloc()));
        bloc->addInstructions(visit(ctx->instruction())); //encore du n'importequoi - je sais pas ce qu'il se passe quand y a pas de bloc (renvoie null ??)

        return *bloc;
    }

    antlrcpp::Any visitStructurewhile_normal(fichierAntlrParser::Structurewhile_normalContext *ctx) override {
        StructureWHILE* strucWHILE = new StructureWHILE();
        strucWHILE->setCondition(visit(ctx->expr()));
        strucWHILE->setBloc(visit(ctx->instruction()));
        if (strucWHILE->getBloc() == NULL) {
            strucWHILE->setBloc(visit(ctx->bloc()));
        } // une autre facon je sais pas ce qui est le mieux

        return *strucWHILE;
    }

    antlrcpp::Any visitNom_var(fichierAntlrParser::Nom_varContext *ctx) override {
        string valeur;
        valeur = ctx->getText(); //c'est du n'importequoio j'avoue

        return valeur;
    }

    antlrcpp::Any visitType_var(fichierAntlrParser::Type_varContext *ctx) override {
        string valeur;
        valeur = ctx->getText(); //c'est du n'importequoio j'avoue

        return valeur;
    }

    antlrcpp::Any visitType_fonction(fichierAntlrParser::Type_fonctionContext *ctx) override {
        string valeur;
        valeur = ctx->getText(); //c'est du n'importequoio j'avoue

        return valeur;
    }
};

#endif //PLDCOMP_CONSTRUCTOR_H
