#include <iostream>

//#include <Windows.h>
#include "Variable.h"
#include "Constante.h"
#include "Expression.h"
#include "Affectation.h"
#include "Fonction.h"
#include "ExpressionOperateur.h"
#include "Type.h"
#include "Parametre.h"
#include "Programme.h"
#include "RI/BuidIR.h"
#include "StructureIF.h"
#include "AppelFonction.h"

#pragma execution_character_set("utf-8")

int main(int argc, const char * argv[]) {
    Variable* a =  new Variable(Variable::INT_64,"a");
    Variable* c =  new Variable(Variable::INT_64,"c");
    vector<Variable* > vars ;
    vars.push_back(a);
    vars.push_back(c);
    Declaration* dec = new Declaration(vars,1,"0");
    Constante* b = new Constante();
    b->setValeur("1");
    Constante* aa = new Constante();
    aa->setValeur("a");
    Affectation* aff1 = new Affectation(a,aa,Affectation::EGAL);
    Expression* expr = new ExpressionOperateur(a,ExpressionOperateur::PLUS ,b);
    Affectation* aff2 = new Affectation(a,expr,Affectation::EGAL);
    //AppelFonction* apl = new AppelFonction("putchar",(Parametre*) a);
    vector<Instruction*> insts;
    insts.push_back(aff1);
    insts.push_back(aff2);
    //insts.push_back(apl);
    Bloc* bloc = new Bloc(insts);
    Parametre* par;
    vector<Declaration*> decs;
    decs.push_back(dec);
    //Condition* con = new Condition();
    //con->setExpression(expr);
    //StructureIF* sif = new StructureIF(con,bloc,bloc);
    //insts.push_back(sif);
    //Bloc* bloc2 = new Bloc(insts);
    Fonction* fct = new Fonction(par,"main",Fonction::VOID,decs,bloc);
    vector<Fonction*> fcts;
    decs.pop_back();
    Programme* prog = new Programme(decs,fcts,fct);
    BuildIR* build = new BuildIR(prog);
    build->print();
    cout << "cout";
    for (CFG* cfg : build->getCFGs()){
        cfg->gen_asm(cout);
    }
    return 0;
}
