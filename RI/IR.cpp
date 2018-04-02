//
// Created by Amina on 30/03/2018.
//

#include "IR.h"
#include <iostream>
//***********************IRInstr*******************************
IRInstr::IRInstr(BasicBlock *bb, IRInstr::Operation op, Type t, vector<string> params) {
    this->bb = bb;
    this->op = op;
    this->t = t;
    this->params = params;
    cout << bb->label +" label ";
    if (t == Type::int64)
        cout << "int64 ";
    if (op == IRInstr::wmem){
    cout << "wmem " ;
    }else if (op == IRInstr::add){
        cout << "add " ;
    }else if (op == IRInstr::sub){
        cout << "sub " ;
    }

    for (auto par:params){
        cout << par+" ";
    }
    cout << "\n";
}

void IRInstr::gen_asm(ostream &o) {

}

//*********************CFG***********************************

CFG::CFG(Fonction *ast) {
    this-> ast = ast;
    current_bb = NULL;
    nextFreeSymbolIndex = 0;
    nextBBnumber = 1;
    nextTmp = 0;
    nextVar = 0;
    nbVar = 0;
}

void CFG::add_to_symbol_table(string name, Type t) {
    SymbolType.insert(std::pair<string,Type>(name,t));
    SymbolIndex.insert(std::pair<string,int>(name,nextFreeSymbolIndex));
    nextFreeSymbolIndex-=8;
    nextVar+=1;
}

string CFG::create_new_tempvar(Type t) {

    string tmp = "!tmp"+to_string(nextTmp);
    add_to_symbol_table(tmp,t);
    nextTmp++;
    nbVar++;
    return tmp;
}

void CFG::add_bb(BasicBlock *bb) {
    this->bbs.push_back(bb);
}

string CFG::new_BB_name() {
    string s = "b_"+to_string(nextBBnumber);
    return s;
}

void CFG::gen_asm(ostream &o) {

}

string CFG::IR_reg_to_asm(string reg) {
    return std::string();
}

void CFG::gen_asm_prologue(ostream& o) {
    o.write("pushq %rbp",50);
    o.write("movq %rsp, %rbp",50);
    string str = "";
    str = "subq" + to_string(nbVar) + "%rsp";
    o.write(str.c_str(),50);
}

void CFG::gen_asm_epilogue(ostream& o) {
    o.write("leave",50);
    o.write("ret",50);

}

int CFG::get_var_index(string name) {
    return 0;
}

Type CFG::get_var_type(string name) {
    return Type::int64;
}


//************************** BasicBlock *********************************************

BasicBlock::BasicBlock(CFG *cfg, string label) {
    this->cfg = cfg;
    this->label = label;
}

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params) {
    IRInstr* instIR = new IRInstr(this,op,t,params);
    instrs.push_back(instIR);
}

void BasicBlock::gen_asm(ostream &o) {

}




