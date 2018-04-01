//
// Created by Amina on 30/03/2018.
//
#include <string>
#include <iostream>
#include "BuidIR.h"
#include "IR.h"
#include "../Fonction.h"
#include "../Instruction.h"
#include "../Expression.h"
#include "../ExpressionOperateur.h"
#include "../ExpressionIncrementale.h"
#include "../ExpressionUnaire.h"
#include "../Affectation.h"
#include "../Constante.h"

BuildIR::BuildIR() {}

BuildIR::~BuildIR() {


}
BuildIR::BuildIR(Programme *prog) {
    cout<< "build prog";
    programToIR(prog);
}

void BuildIR::programToIR(Programme *prog) {
    cout << "prog to IR";
    vector<Fonction*> fonctions;
    fonctions.push_back(prog->getMain());
    for(vector<Fonction*>::iterator i= fonctions.begin() ; i != fonctions.end() ; i++){
        CFG* cfg = new CFG(((Fonction*)*i));
        CFGs.push_back(cfg);
        current_cfg = cfg;
        BasicBlock* bb = new BasicBlock(current_cfg, current_cfg->new_BB_name());
        current_bb = bb;
        cfg->add_bb(bb);
        DeclarationToIR(((Fonction*)*i)->getDeclarations());
        blocToIR(((Fonction*)*i)->getBloc());
    }

}

// Transformer Bloc to IR
void BuildIR::blocToIR(Bloc* bloc){
    cout << "bloc to IR";
    vector<Instruction*> instructions = bloc->getInstructions();
    for (auto inst : instructions ){
        if(Expression* exp = dynamic_cast<Expression*>(inst)) {
            ExpressionToIR(exp);
        }
    }
}

// Transformer Declaration to IR
void BuildIR::DeclarationToIR(vector<Declaration *> declarations) {
    cout << "Declaration to IR";
    for (auto dec : declarations ){
        for (auto var : dec->getVariables()){
            current_cfg->add_to_symbol_table(var->getNom(), Type::int64);
        }
    }
}

// Transformer Expression to IR
string BuildIR::ExpressionToIR(Expression* exp) {
    if (ExpressionOperateur *expOp = dynamic_cast<ExpressionOperateur *>(exp)) {
        cout << "expr op" << "\n";
        string var1 = ExpressionToIR(expOp->getLeftExpression());
        string var2 = ExpressionToIR(expOp->getRightExpression());
        string var3 = current_cfg->create_new_tempvar(Type::int64);
        vector<string> params;
        params.push_back(var1);
        params.push_back(var2);
        params.push_back(var3);
        if (expOp->getOperateur() == ExpressionOperateur::PLUS) {
            current_bb->add_IRInstr(IRInstr::Operation::add, Type::int64, params);
        } else if (expOp->getOperateur() == ExpressionOperateur::MOINS) {
            current_bb->add_IRInstr(IRInstr::Operation::sub, Type::int64, params);
        } else if (expOp->getOperateur() == ExpressionOperateur::MULTIPLICATION) {
            current_bb->add_IRInstr(IRInstr::Operation::mul, Type::int64, params);
        }
        return var3;

    } else if (Affectation *aff = dynamic_cast<Affectation *>(exp)) {
        cout << "affectation"<< "\n";
        string var1 = VariableToIR(aff->getVariableLeft());
        string var2 = ExpressionToIR(aff->getExpressionRight());
        vector<string> params;
        params.push_back(var1);
        params.push_back(var2);
        current_bb->add_IRInstr(IRInstr::Operation::wmem, Type::int64, params);
        return var1;
    }else if (Variable *var = dynamic_cast<Variable *>(exp)) {
        cout << " var "<< "\n";
        return var->getNom();
    }else if (Constante *cst = dynamic_cast<Constante *>(exp)) {
        string var1 = cst->getValeur();
        string var2 = current_cfg->create_new_tempvar(Type::int64);
        vector<string> params;
        params.push_back(var1);
        params.push_back(var2);
        current_bb->add_IRInstr(IRInstr::ldconst,Type::int64,params);
        return var2;
    }
}

// Transformer Variable to IR
string BuildIR::VariableToIR(Variable*  var) {
        return var->getNom();
}

