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
#include "../Structure.h"
#include "../StructureIF.h"
#include "../StructureWHILE.h"
#include "../AppelFonction.h"
#include "../Tableau.h"

BuildIR::BuildIR() {}

BuildIR::~BuildIR() {


}
BuildIR::BuildIR(Programme *prog) {
    programToIR(prog);

}

void BuildIR::setCFGs(const vector<CFG *> &CFGs) {
    BuildIR::CFGs = CFGs;
}

void BuildIR::setCurrent_cfg(CFG *current_cfg) {
    BuildIR::current_cfg = current_cfg;
}

void BuildIR::setCurrent_bb(BasicBlock *current_bb) {
    BuildIR::current_bb = current_bb;
}
const vector<CFG *> &BuildIR::getCFGs() const {
    return CFGs;
}

CFG *BuildIR::getCurrent_cfg() const {
    return current_cfg;
}

BasicBlock *BuildIR::getCurrent_bb() const {
    return current_bb;
}
void BuildIR::programToIR(Programme *prog) {
    vector<Fonction*> fonctions;
    fonctions.push_back(prog->getMain());
    fonctions.insert(fonctions.end(),prog->getFonctions().begin(),prog->getFonctions().end());
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
    vector<Instruction*> instructions = bloc->getInstructions();
    for (auto inst : instructions ){
        if(Expression* exp = dynamic_cast<Expression*>(inst)) {
            ExpressionToIR(exp);
        }else if(Structure* str = dynamic_cast<Structure*>(inst)){
            if(StructureIF* strIF = dynamic_cast<StructureIF*>(inst)){
                BasicBlock* testBB = current_bb;
                BasicBlock* save_bb = current_bb;
                BasicBlock* thenBB = new BasicBlock(current_cfg,current_cfg->new_BB_name());
                current_bb = thenBB;
                blocToIR(strIF->getBloc());
                BasicBlock* elseBB = new BasicBlock(current_cfg,current_cfg->new_BB_name());
                current_bb = elseBB;
                blocToIR(strIF->getBlocElse());
                current_bb = save_bb;
                BasicBlock* afterIFBB = new BasicBlock(current_cfg,current_cfg->new_BB_name());
                afterIFBB->exit_true = testBB->exit_true;
                afterIFBB->exit_false = testBB->exit_false;
                testBB->exit_true = thenBB;
                testBB->exit_false = elseBB;
                thenBB->exit_true = afterIFBB;
                thenBB->exit_false = NULL;
                elseBB->exit_true = afterIFBB;
                elseBB->exit_false = NULL;
                current_cfg->current_bb=afterIFBB;

            }else if(StructureWHILE* strW = dynamic_cast<StructureWHILE*>(inst)){
                //Coming soon
            }
        }
    }
}

// Transformer Declaration to IR
void BuildIR::DeclarationToIR(vector<Declaration *> declarations) {
    for (auto dec : declarations ){
        for (auto var : dec->getVariables()){
            current_cfg->add_to_symbol_table(var->getNom(), Type::int64);
        }
    }
}

// Transformer Expression to IR
string BuildIR::ExpressionToIR(Expression* exp) {
    if (ExpressionOperateur *expOp = dynamic_cast<ExpressionOperateur *>(exp)) {
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
        if (Tableau *var = dynamic_cast<Tableau *>(aff->getVariableLeft())) {
            string var1 = LValueToIR(aff->getVariableLeft());
            string var2 = ExpressionToIR(aff->getExpressionRight());
            vector<string> params;
            params.push_back(var1);
            params.push_back(var2);
            current_bb->add_IRInstr(IRInstr::Operation::wmem, Type::int64, params);
            return var1;
        } else {
            string var1 = VariableToIR(aff->getVariableLeft());
            string var2 = ExpressionToIR(aff->getExpressionRight());
            vector<string> params;
            params.push_back(var1);
            params.push_back(var2);
            current_bb->add_IRInstr(IRInstr::Operation::copy, Type::int64, params);
            return var1;
        }
    }else if (Variable *var = dynamic_cast<Variable *>(exp)) {
        return VariableToIR(var);
    }else if (Constante *cst = dynamic_cast<Constante *>(exp)) {
        string var1 = cst->getValeur();
        string var2 = current_cfg->create_new_tempvar(Type::int64);
        vector<string> params;
        params.push_back(var2);
        params.push_back(var1);
        current_bb->add_IRInstr(IRInstr::ldconst,Type::int64,params);
        return var2;
    }else if( AppelFonction* apl = dynamic_cast<AppelFonction *>(exp)){
        cout << "Appel Fonction ";
        Parametre* par = apl->getParametre();
        vector<string> params;
        params.push_back(apl->getNomFonction());
        string parIR = ExpressionToIR((Expression*) par);
        params.push_back(parIR);
        current_bb->add_IRInstr(IRInstr::Operation::call,Type::int64, params);
        }

    }


// Transformer Variable to IR
string BuildIR::VariableToIR(Variable*  var) {
        return var->getNom();
}

// Transformer LValue to IR
string BuildIR::LValueToIR(Variable* var) {
    string var1 = current_cfg->create_new_tempvar(Type::int64);
    int offset = current_cfg->get_var_index(var->getNom());
    vector<string> params;
    params.push_back(var1);
    params.push_back(to_string(offset));
    current_bb->add_IRInstr(IRInstr::ldconst,Type ::int64,params);
    params.pop_back();
    params.push_back("!bp");
    params.push_back(var1);
    current_bb->add_IRInstr(IRInstr::add,Type::int64,params);
    return var1;
}

void BuildIR::print() {
    for(auto cfg : this->getCFGs()){
        for(auto bb : cfg->getBbs()){
            for(auto ir : bb->getInstrs()){
                ir->print();
            }
        }

    }
}

void BuildIR::printBB(BasicBlock * bb) {
    for(auto ir : bb->getInstrs()){
        ir->print();
    }
    //print(bb->exit_false) ;

    BasicBlock* bbF = bb->exit_false;
    for(auto ir : bbF->getInstrs()){
        ir->print();
    }
}






