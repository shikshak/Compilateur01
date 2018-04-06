//
// Created by heyhey on 25/03/2018.
//

#ifndef PLDCOMP_CONSTRUCTOR_H
#define PLDCOMP_CONSTRUCTOR_H


#include "gen/fichierAntlrBaseVisitor.h"
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
#include "Constante.h"

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
        for(auto i : ctx->main()){
            programme_->setMain(visit(i));
        }
        return programme_;
    }

    antlrcpp::Any visitMain_avecparametre(fichierAntlrParser::Main_avecparametreContext *ctx) override {
        return fichierAntlrBaseVisitor::visitMain_avecparametre(ctx);
    }

    antlrcpp::Any visitMain_sansparametre(fichierAntlrParser::Main_sansparametreContext *ctx) override {

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
        Fonction* fonction_ = new Fonction();
        fonction_->setType(visit(ctx->type_fonction()));
	
        fonction_->setNom("main");
        for(auto i : ctx->declaration()){
            fonction_->addDeclaration(visit(i));
        }
        fonction_->setBloc(visit(ctx->bloc()));
        return fonction_;
    }

    antlrcpp::Any visitFonction_avecparametre(fichierAntlrParser::Fonction_avecparametreContext *ctx) override {
        Fonction* fonction_ = new Fonction();
        fonction_->setType(visit(ctx->type_fonction()));
	
        fonction_->setNom("main");
        fonction_->setParametre(visit(ctx->parametre()));
        for(auto i : ctx->declaration()){
            fonction_->addDeclaration(visit(i));
        }
        fonction_->setBloc(visit(ctx->bloc()));
        return fonction_;
    }

    antlrcpp::Any visitFonction_sansparametre(fichierAntlrParser::Fonction_sansparametreContext *ctx) override {

    	Fonction* fonction_ = new Fonction();

        fonction_->setType(visit(ctx->type_fonction()));
        fonction_->setNom(ctx->NOM()->toString());
        for(auto i : ctx->declaration()){
            fonction_->addDeclaration(visit(i));
        }
        fonction_->setBloc(visit(ctx->bloc()));
        return fonction_;	

    }

    antlrcpp::Any visitFonction_parametrevoid(fichierAntlrParser::Fonction_parametrevoidContext *ctx) override {
        return fichierAntlrBaseVisitor::visitFonction_parametrevoid(ctx);
    }

    antlrcpp::Any visitParametre_normal(fichierAntlrParser::Parametre_normalContext *ctx) override {
        Simple* s_ = new Simple();

        s_->setType(visit(ctx->type_var()));
        s_->setNom(ctx->NOM()->getText());

        Parametre* p_= new Parametre;
        p_->setExpression(s_);
        return dynamic_cast<Variable*>(p_);
    }

    antlrcpp::Any visitParametre_tableau(fichierAntlrParser::Parametre_tableauContext *ctx) override {
        return fichierAntlrBaseVisitor::visitParametre_tableau(ctx);
    }

    antlrcpp::Any visitVariable_simple(fichierAntlrParser::Variable_simpleContext *ctx) override {
        Simple* simple = new Simple();
	ctx->NOM()->toString();
        simple->setNom(ctx->NOM()->getText());
        return dynamic_cast<Variable*>(simple);
    }

    antlrcpp::Any visitVariable_tableau(fichierAntlrParser::Variable_tableauContext *ctx) override {
        return fichierAntlrBaseVisitor::visitVariable_tableau(ctx);
    }

    antlrcpp::Any visitAffectation_plusplusapres(fichierAntlrParser::Affectation_plusplusapresContext *ctx) override {
        Affectation* affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::EGAL);

        ExpressionOperateur* exprOp = new ExpressionOperateur();
       Variable* expression = visit(ctx->variable());
	Expression* expr=dynamic_cast<Expression*>(expression);
            exprOp->setLeftExpression(expr);
        exprOp->setOperateur(ExpressionOperateur::PLUS);
        
                    Constante* cons = new Constante();
cons->setValeur("1");
        exprOp->setRightExpression(cons);

        affectation->setExpressionRight(exprOp);
        return dynamic_cast<Affectation*>(affectation);
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
        Affectation* affectation = new Affectation();
        affectation->setVariableLeft(visit(ctx->variable()));
        affectation->setOperateur(Affectation::EGAL);
        affectation->setExpressionRight(visit(ctx->expr()));
        return dynamic_cast<Affectation*>(affectation);
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
        Constante* expression = new Constante();
        expression->setValeur(ctx->NOMBRE()->toString());
        return dynamic_cast<Expression*>(expression);
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
        ExpressionUnaire* exprUn = new ExpressionUnaire();
        exprUn->setOperateur(ExpressionUnaire::PARENTHESE);
	exprUn->setExpression(visit(ctx->expr()));
        return dynamic_cast<Expression*>(exprUn);
    }

    antlrcpp::Any visitExpr_addition(fichierAntlrParser::Expr_additionContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
       
            exprOp->setLeftExpression(visit(ctx->expr().at(0)));
        exprOp->setOperateur(ExpressionOperateur::PLUS);
        
            exprOp->setRightExpression(visit(ctx->expr().at(1)));
        
        return dynamic_cast<Expression*>(exprOp);
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
	AppelFonction* appfonct = new AppelFonction();
	appfonct->setNomFonction(ctx->NOM()->toString());
	Parametre* param = new Parametre();
	for(auto i : ctx->expr()) {
		param->setExpression(visit(i));
	}
appfonct->setParametre(param);
	return dynamic_cast<Expression*>(appfonct);
    }

    antlrcpp::Any visitExpr_char(fichierAntlrParser::Expr_charContext *ctx) override {
        Constante* expression = new Constante();
        expression->setValeur(ctx->CHAR()->toString());
        return dynamic_cast<Expression*>(expression);
    }

    antlrcpp::Any visitExpr_egalegal(fichierAntlrParser::Expr_egalegalContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_egalegal(ctx);
    }

    antlrcpp::Any visitExpr_chiffre(fichierAntlrParser::Expr_chiffreContext *ctx) override {

        Constante* expression = new Constante();
        expression->setValeur(ctx->CHIFFRE()->getText());
        return dynamic_cast<Expression*>(expression);
    }

    antlrcpp::Any visitExpr_variable(fichierAntlrParser::Expr_variableContext *ctx) override {
        Variable* var = new Variable();
        var = visit(ctx->variable());
        return dynamic_cast<Expression*>(var);
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
        ExpressionOperateur* exprOp = new ExpressionOperateur();
       
            exprOp->setLeftExpression(visit(ctx->expr().at(0)));
        exprOp->setOperateur(ExpressionOperateur::MOINS);
        
            exprOp->setRightExpression(visit(ctx->expr().at(1)));
        
        return dynamic_cast<Expression*>(exprOp);
    }

    antlrcpp::Any visitExpr_affectation(fichierAntlrParser::Expr_affectationContext *ctx) override {
        Affectation* expression = new Affectation();
        expression = visit(ctx->affectation());
        return dynamic_cast<Expression*>(expression);
    }

    antlrcpp::Any visitExpr_exclamation(fichierAntlrParser::Expr_exclamationContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_exclamation(ctx);
    }

    antlrcpp::Any visitExpr_multiplication(fichierAntlrParser::Expr_multiplicationContext *ctx) override {
        ExpressionOperateur* exprOp = new ExpressionOperateur();
        exprOp->setLeftExpression(visit(ctx->expr().at(0)));
        exprOp->setOperateur(ExpressionOperateur::MULTIPLICATION);
	exprOp->setRightExpression(visit(ctx->expr().at(1)));
        return dynamic_cast<Expression*>(exprOp);
    }

    antlrcpp::Any visitExpr_supsup(fichierAntlrParser::Expr_supsupContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_supsup(ctx);
    }

    antlrcpp::Any visitExpr_chapeau(fichierAntlrParser::Expr_chapeauContext *ctx) override {
        return fichierAntlrBaseVisitor::visitExpr_chapeau(ctx);
    }

    antlrcpp::Any visitReturn_normal(fichierAntlrParser::Return_normalContext *ctx) override {
        Return* ret = new Return();
        if (ctx->expr()) {
            ret->setExpression(visit(ctx->expr()));
        }
        return dynamic_cast<Instruction*>(ret);
    }

    antlrcpp::Any visitBreak_normal(fichierAntlrParser::Break_normalContext *ctx) override {
        Break* bre = new Break();
        return dynamic_cast<Instruction*>(bre);
    }

    antlrcpp::Any visitInstruction_if(fichierAntlrParser::Instruction_ifContext *ctx) override {
        Instruction* strucIF = new Instruction();
        strucIF = visit(ctx->structure_if());
        return dynamic_cast<Instruction*>(strucIF);
    }

    antlrcpp::Any visitInstruction_while(fichierAntlrParser::Instruction_whileContext *ctx) override {
        Instruction* strucWHILE = new Instruction();
        strucWHILE = visit(ctx->structure_while());
        return dynamic_cast<Instruction*>(strucWHILE);
    }

    antlrcpp::Any visitInstruction_expr(fichierAntlrParser::Instruction_exprContext *ctx) override {
        Expression* expr = new Expression(); //ATTENTION
        expr = visit(ctx->expr());
        return dynamic_cast<Instruction*>(expr);
    }

    antlrcpp::Any visitInstruction_return(fichierAntlrParser::Instruction_returnContext *ctx) override {
        Instruction* ret = new Instruction();
        ret = visit(ctx->return_());
        return dynamic_cast<Instruction*>(ret);
    }

    antlrcpp::Any visitInstruction_break(fichierAntlrParser::Instruction_breakContext *ctx) override {
        Break* bre = new Break();
        bre = visit(ctx->break_());
        return dynamic_cast<Instruction*>(bre);
    }

    antlrcpp::Any visitBloc_normal(fichierAntlrParser::Bloc_normalContext *ctx) override {
        Bloc* bloc = new Bloc;
        for(auto i : ctx->instruction()) {
            bloc->addInstructions(visit(i));
        }
        return bloc;
    }

    antlrcpp::Any visitDeclaration_normale(fichierAntlrParser::Declaration_normaleContext *ctx) override {
        Declaration* decl = new Declaration();
        string type = visit(ctx->type_var()); //voncertir a celuui de l'enum
        for(auto i : ctx->NOM()){
            Simple* var = new Simple(type, i->getText());
            decl->addVariable(var);
        }
        return decl;
    }

    antlrcpp::Any visitDeclaration_definition(fichierAntlrParser::Declaration_definitionContext *ctx) override {
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
        StructureIF* structureIF = new StructureIF();
        structureIF->setCondition(visit(ctx->expr()));
        structureIF->setBloc(visit(ctx->bloc()));
        if (ctx->else_())
            structureIF->setBlocElse(visit(ctx->else_()));
        return dynamic_cast<Structure*>(structureIF);

    }

    antlrcpp::Any visitElse_normal(fichierAntlrParser::Else_normalContext *ctx) override {
        Bloc * bloc_=new Bloc();
        bloc_ = visit(ctx->bloc());
        return bloc_;
    }

    antlrcpp::Any visitStructurewhile_normal(fichierAntlrParser::Structurewhile_normalContext *ctx) override {
        StructureWHILE* strucWHILE = new StructureWHILE();
        strucWHILE->setCondition(visit(ctx->expr()));

        strucWHILE->setBloc(visit(ctx->bloc()));
         // une autre facon je sais pas ce qui est le mieux

        return dynamic_cast<Structure*>(strucWHILE);
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
