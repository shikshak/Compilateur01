//
// Created by Amina on 30/03/2018.
//
#include <string>
#include <iostream>
#include "BuildIR.h"
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
#include "../Simple.h"
#include "../Tableau.h"
#include "../Return.h"

BuildIR::BuildIR() {}

BuildIR::~BuildIR() {


}
BuildIR::BuildIR(Programme *prog) {
std::cout << "je suis dans BuildIR::BuildIR(Programme *prog)" << endl;
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
std::cout << "je suis dans void BuildIR::programToIR(Programme *prog)" << endl;
    vector<Fonction*> fonctions;
std::cout << "je suis dans void BuildIR::programToIR(Programme *prog) apres vector<Fonction*> fonctions;" << endl;
    fonctions.push_back(prog->getMain());
std::cout << "je suis dans BuildIR::BuildIR(Programme *prog) apres fonctions.push_back(prog->getMain());" << endl;
    fonctions.insert(fonctions.end(),prog->getFonctions().begin(),prog->getFonctions().end());
std::cout << "je suis dans BuildIR::BuildIR(Programme *prog) apres fonctions.insert(fonctions.end(),prog->getFonctions().begin(),prog->getFonctions().end());" << endl;
    for(vector<Fonction*>::iterator i= fonctions.begin() ; i != fonctions.end() ; i++){
std::cout << "je suis dans BuildIR::BuildIR(Programme *prog) apres dans le debut du for" << endl;
        CFG* cfg = new CFG(((Fonction*)*i));
std::cout << "je suis dans BuildIR::BuildIR(Programme *prog) apres CFG* cfg = new CFG(((Fonction*)*i));" << endl;
        CFGs.push_back(cfg);
std::cout << "je suis dans BuildIR::BuildIR(Programme *prog) apres CFGs.push_back(cfg);" << endl;
        current_cfg = cfg;
std::cout << "je suis dans BuildIR::BuildIR(Programme *prog) aprescurrent_cfg = cfg;" << endl;
        BasicBlock* bb = new BasicBlock(current_cfg, current_cfg->new_BB_name());
std::cout << "je suis dans BuildIR::BuildIR(Programme *prog) apres BasicBlock* bb = new BasicBlock(current_cfg, current_cfg->new_BB_name());" << endl;
        current_bb = bb;
std::cout << "je suis dans BuildIR::BuildIR(Programme *prog) apres current_bb = bb;" << endl;
        cfg->add_bb(bb);
std::cout << 1 << endl;
        DeclarationToIR(((Fonction*)*i)->getDeclarations());
std::cout << 2 << endl;
        blocToIR(((Fonction*)*i)->getBloc());
std::cout << 3 << endl;
    }

}

// Transformer Bloc to IR
void BuildIR::blocToIR(Bloc* bloc){
std::cout << 4 << endl;
    vector<Instruction*> instructions = bloc->getInstructions();
std::cout << 5 << endl;
    for (auto inst : instructions ){
std::cout << 6 << endl;
        if(Expression* exp = dynamic_cast<Expression*>(inst)) {
            std::cout << 7 << endl;
            ExpressionToIR(exp);
            std::cout << 8 << endl;
        }else if(Return* rtn = dynamic_cast<Return*>(inst)){
            Expression* exp = rtn->getExpression();
            string var1 = ExpressionToIR(exp);
            vector<string> params;
            params.push_back(var1);
            current_bb->add_IRInstr(IRInstr::Operation::ret,Type::int64, params);
        }else if(Structure* str = dynamic_cast<Structure*>(inst)){
std::cout << 9 << endl;           
 if(StructureIF* strIF = dynamic_cast<StructureIF*>(str)){
std::cout << 10 << endl;      
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
std::cout << 11 << endl;
            }else if(StructureWHILE* strW = dynamic_cast<StructureWHILE*>(inst)){
                //Coming soon
            }
        }else{

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
std::cout << 45 << *exp << endl;
    if (ExpressionOperateur *expOp = dynamic_cast<ExpressionOperateur *>(exp)) {
std::cout << 46 << endl;
        string var1 = ExpressionToIR(expOp->getLeftExpression());
        string var2 = ExpressionToIR(expOp->getRightExpression());
        string var3 = current_cfg->create_new_tempvar(Type::int64);
        vector<string> params;
        params.push_back(var1);
        params.push_back(var2);
        params.push_back(var3);
        if (expOp->getOperateur() == ExpressionOperateur::PLUS) {
std::cout << 47 << endl;
            current_bb->add_IRInstr(IRInstr::Operation::add, Type::int64, params);
        } else if (expOp->getOperateur() == ExpressionOperateur::MOINS) {
std::cout << 48 << endl;
            current_bb->add_IRInstr(IRInstr::Operation::sub, Type::int64, params);
        } else if (expOp->getOperateur() == ExpressionOperateur::MULTIPLICATION) {
std::cout << 49 << endl;
            current_bb->add_IRInstr(IRInstr::Operation::mul, Type::int64, params);
        }
std::cout << 50 << endl;
        return var3;

    } else if (Affectation *aff = dynamic_cast<Affectation *>(exp)) {
std::cout << 51 << endl;
        if(Tableau* var = dynamic_cast<Tableau *>(aff->getVariableLeft())){
            string var1 = LValueToIR(aff->getVariableLeft());
            string var2 = ExpressionToIR(aff->getExpressionRight());
            vector<string> params;
            params.push_back(var1);
            params.push_back(var2);
            current_bb->add_IRInstr(IRInstr::Operation::wmem, Type::int64, params);
std::cout << 52 << endl;
            return var1;
        }else {
std::cout << 53 << endl;
            string var1 = VariableToIR(aff->getVariableLeft());
std::cout << "53var1" << endl;
            string var2 = ExpressionToIR(aff->getExpressionRight());
std::cout << "53var2" << endl;            
vector<string> params;
            params.push_back(var1);
            params.push_back(var2);
            current_bb->add_IRInstr(IRInstr::Operation::copy, Type::int64, params);
std::cout << 54 << endl;
            return var1;
        }
    }else if (Variable *var = dynamic_cast<Variable *>(exp)) {
std::cout << 55 << endl;
        return VariableToIR(var);
    }else if (Constante *cst = dynamic_cast<Constante *>(exp)) {
std::cout << 56 << endl;
        string var1 = cst->getValeur();
        string var2 = current_cfg->create_new_tempvar(Type::int64);
        vector<string> params;
        params.push_back(var1);
        params.push_back(var2);
        current_bb->add_IRInstr(IRInstr::ldconst,Type::int64,params);
std::cout << 57 << endl;
        return var2;
    }else if(ExpressionIncrementale *expI = dynamic_cast<ExpressionIncrementale *>(exp)){
std::cout << 58 << endl;
    }
std::cout << 59 << endl;
}

// Transformer Variable to IR
string BuildIR::VariableToIR(Variable*  var) {
std::cout << 78 << endl;
        return var->getNom();
}

// Transformer LValue to IR
string BuildIR::LValueToIR(Variable* var) {
std::cout << 79 << endl;
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
std::cout << 80 << endl;
    for(auto cfg : this->getCFGs()){
        for(auto bb : cfg->getBbs()){
            for(auto ir : bb->getInstrs()){
                ir->print();
            }
        }

    }
}

void BuildIR::printBB(BasicBlock * bb) {
std::cout << 81 << endl;
    for(auto ir : bb->getInstrs()){
        ir->print();
    }
    //print(bb->exit_false) ;

    BasicBlock* bbF = bb->exit_false;
    for(auto ir : bbF->getInstrs()){
        ir->print();
    }
}






