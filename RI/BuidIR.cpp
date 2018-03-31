//
// Created by Amina on 30/03/2018.
//
#include <string>
#include "BuidIR.h"
#include "IR.h"
#include "../Fonction.h"
#include "../Instruction.h"
#include "../Expression.h"
#include "../ExpressionOperateur.h"
#include "../ExpressionIncrementale.h"
#include "../ExpressionUnaire.h"
#include "../Affectation.h"

BuildIR::BuildIR() {}

BuildIR::~BuildIR() {


}

void BuildIR::programToIR(Programme *prog) {

    vector<Fonction*> fonctions = prog->getFonctions();
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
void BuildIR::blocToIR(Bloc* bloc){
    vector<Instruction*> instructions = bloc->getInstructions();
    for (auto inst : instructions ){
        if(Expression* exp = dynamic_cast<Expression*>(inst)) {
            ExpressionToIR(exp);
        }
    }
    }

void BuildIR::DeclarationToIR(vector<Declaration *> declarations) {
    for (auto dec : declarations ){
        for (auto var : dec->getVariables()){
            current_cfg->add_to_symbol_table(var->getNom(), Type::int64);
        }
    }
}

string BuildIR::ExpressionToIR(Expression* exp){
    if(ExpressionOperateur* expOp = dynamic_cast<ExpressionOperateur*>(exp)) {
        string var1 = ExpressionToIR(expOp->getLeftExpression());
        string var2 = ExpressionToIR(expOp->getRightExpression());
        string var3 = current_cfg->create_new_tempvar(Type::int64);
        vector<string> params;
        params.push_back(var1);
        params.push_back(var2);
        params.push_back(var3);
        if(expOp->getOperateur() == ExpressionOperateur::PLUS ){
            current_bb->add_IRInstr(IRInstr::Operation::add,Type::int64,params);
        }else if(expOp->getOperateur() == ExpressionOperateur::MOINS ){
            current_bb->add_IRInstr(IRInstr::Operation::sub,Type::int64,params);
        }else if(expOp->getOperateur() == ExpressionOperateur::MULTIPLICATION ) {
            current_bb->add_IRInstr(IRInstr::Operation::mul, Type::int64, params);
        }
        return var3;
    }

}