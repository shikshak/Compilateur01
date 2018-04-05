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
#include "../AppelFonction.h"
#include "../Tableau.h"
#include "../Return.h"

BuildIR::BuildIR() {}



BuildIR::~BuildIR() {


}

BuildIR::BuildIR(Programme *prog) {
    std::cout << 0 << endl;
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
    std::cout << 1 << endl;
    vector<Fonction*> fonctions;
    std::cout << 2 << endl;
    fonctions.push_back(prog->getMain());
    std::cout << 3 << endl;
    fonctions.insert(fonctions.end(),prog->getFonctions().begin(),prog->getFonctions().end());
    std::cout << 4 << endl;
    for(auto i : fonctions){
        std::cout << 5 << endl;
        CFG* cfg = new CFG((i));
        std::cout << 6 << endl;
        CFGs.push_back(cfg);
        std::cout << 7 << endl;
        current_cfg = cfg;
        std::cout << 8 << endl;
        BasicBlock* bb = new BasicBlock(current_cfg, current_cfg->new_BB_name());
        std::cout << 9 << endl;
        current_bb = bb;
        std::cout << 10 << endl;
        cfg->add_bb(bb);
        std::cout << 11 << endl;
        std::cout << "i" << *i << endl;

        if ((i->getDeclarations()).size() != 0){
            std::cout<<"taille "<< (i->getDeclarations()).size()<< endl;
            for (auto k : i->getDeclarations()) {
                std::cout << k;
            }
            DeclarationToIR((i)->getDeclarations());
        }else{
            std::cout << "11 bis" << endl;
        }

        std::cout << 12 << endl;
        blocToIR((i)->getBloc());

    }



}



// Transformer Bloc to IR

void BuildIR::blocToIR(Bloc* bloc){

    std::cout << 100 << endl;

    vector<Instruction*> instructions = bloc->getInstructions();

    for (auto inst : instructions ){

        if(Expression* exp = dynamic_cast<Expression*>(inst)) {

            ExpressionToIR(exp);

        }else if(Return* rtn = dynamic_cast<Return*>(inst)){

            Expression* exp = rtn->getExpression();
            string var1 = ExpressionToIR(exp);
            vector<string> params;
            params.push_back(var1);
            current_bb->add_IRInstr(IRInstr::Operation::ret,Type::int64, params);
        }else if(Structure* str = dynamic_cast<Structure*>(inst)){

            if(StructureIF* strIF = dynamic_cast<StructureIF*>(inst)){

                Condition* cond = strIF->getCondition();
                Expression* exp = cond->getExpression();
                string conf = ExpressionToIR(exp);
                BasicBlock* testBB = current_bb;
                BasicBlock* save_bb = current_bb;
                BasicBlock* thenBB = new BasicBlock(current_cfg,"Block Then");

                current_bb = thenBB;

                blocToIR(strIF->getBloc());
                current_cfg->add_bb(thenBB);
                BasicBlock* elseBB = new BasicBlock(current_cfg,"Block Else");

                current_bb = elseBB;

                blocToIR(strIF->getBlocElse());

                current_bb = save_bb;

                BasicBlock* afterIFBB = new BasicBlock(current_cfg,"Block EndIf");

                afterIFBB->exit_true = testBB->exit_true;

                afterIFBB->exit_false = testBB->exit_false;

                testBB->exit_true = thenBB;

                testBB->exit_false = elseBB;

                thenBB->exit_true = afterIFBB;

                thenBB->exit_false = afterIFBB;
                elseBB->exit_true = afterIFBB;
                elseBB->exit_false = afterIFBB;
                current_cfg->current_bb=afterIFBB;
                current_cfg->add_bb(afterIFBB);


            }else if(StructureWHILE* strW = dynamic_cast<StructureWHILE*>(inst)){

                //Coming soon

            }

        }

    }

}



// Transformer Declaration to IR

void BuildIR::DeclarationToIR(vector<Declaration *> declarations) {

    std::cout << 200 << endl;

    for (auto dec : declarations ){

        for (auto var : dec->getVariables()){

            current_cfg->add_to_symbol_table(var->getNom(), Type::int64);

        }

    }

}



// Transformer Expression to IR

string BuildIR::ExpressionToIR(Expression* exp) {

    std::cout << 300 << endl;

    if (ExpressionOperateur *expOp = dynamic_cast<ExpressionOperateur *>(exp)) {
std::cout << "300operateur" << endl;

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

        }else if (expOp->getOperateur() == ExpressionOperateur::EGALEGAL) {

            current_bb->add_IRInstr(IRInstr::Operation::cmp_eq, Type::int64, params);

        }else if (expOp->getOperateur() == ExpressionOperateur::INFEGAL) {

            current_bb->add_IRInstr(IRInstr::Operation::cmp_le, Type::int64, params);

        }else if (expOp->getOperateur() == ExpressionOperateur::INF) {

            current_bb->add_IRInstr(IRInstr::Operation::cmp_lt, Type::int64, params);


        }

        return var3;




    } 
else if (ExpressionUnaire *expUn = dynamic_cast<ExpressionUnaire *>(exp)){

std::cout << "300operateurparenthse" << endl;

        string var1 = ExpressionToIR(expUn->getExpression());

        return var1;

}

else if (Affectation *aff = dynamic_cast<Affectation *>(exp)) {


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

        cout << "Appel Fonction " << endl;

        Parametre* par = apl->getParametre();
        vector<string> params;
        params.push_back(apl->getNomFonction());

        std::cout << "????????" << *par << endl;

        string parIR = ExpressionToIR(par->getExpression());

        std::cout << "????????fin" << endl;

        params.push_back(parIR);

        current_bb->add_IRInstr(IRInstr::Operation::call,Type::int64, params);

    }


std::cout << "300fin" << endl;


}





// Transformer Variable to IR

string BuildIR::VariableToIR(Variable*  var) {

    std::cout << 1000 << endl;

    return var->getNom();

}



// Transformer LValue to IR

string BuildIR::LValueToIR(Variable* var) {

    std::cout << 50000 << endl;

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

    std::cout << 800000 << endl;

    for(auto cfg : this->getCFGs()){

        for(auto bb : cfg->getBbs()){

            printBB(bb);
        }

    }

}



void BuildIR::printBB(BasicBlock * bb) {

    std::cout << 90000 << endl;

    for(auto ir : bb->getInstrs()){

        ir->print();

    }

    if(bb->exit_false!= nullptr) {
        cout << bb->exit_false->label << endl;
        printBB(bb->exit_false);
    }
    if(bb->exit_true!= nullptr) {
        cout << bb->exit_true->label << endl;
        printBB(bb->exit_true);
    }


    for(auto ir : bbF->getInstrs()){

        ir->print();


}


}
