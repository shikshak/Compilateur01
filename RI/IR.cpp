//
// Created by Amina on 30/03/2018.
//

#include "IR.h"

//***********************IRInstr*******************************
IRInstr::IRInstr(BasicBlock *bb_, IRInstr::Operation op, Type t, vector<string> params) {
    this->bb = bb_;
    this->op = op;
    this->t = t;
    this->params = params;
}

void IRInstr::gen_asm(ostream &o) {

}

//*********************CFG***********************************

CFG::CFG(Fonction *ast) {
    this-> ast = ast;
    current_bb = NULL;
    nextFreeSymbolIndex = -8;
    nextBBnumber = 1;
    nextTmp = 0;
    nextVar = 0;
}

void CFG::add_to_symbol_table(string name, Type t) {
    SymbolType.insert(std::pair<string,Type>(name,t));
    SymbolIndex.insert(std::pair<string,int>(name,nextFreeSymbolIndex));
    nextFreeSymbolIndex-=8;
    nextVar+=1;
}

string CFG::create_new_tempvar(Type t) {

    string tmp = "!tmp"+nextTmp;
    add_to_symbol_table(tmp,t);
    nextTmp++;
    return tmp;
}

void CFG::add_bb(BasicBlock *bb) {
    this->bbs.push_back(bb);
}

string CFG::new_BB_name() {
    return "b_"+to_string(nextBBnumber);
}

void CFG::gen_asm(ostream &o) {

}

string CFG::IR_reg_to_asm(string reg) {
    return std::string();
}

void CFG::gen_asm_prologue(ostream &o) {

}

void CFG::gen_asm_epilogue(ostream &o) {

}

int CFG::get_var_index(string name) {
    return 0;
}

Type CFG::get_var_type(string name) {
    return Type::int64;
}


//************************** BasicBlock *********************************************

BasicBlock::BasicBlock(CFG *cfg, string entry_label) {
    this->cfg = cfg;
    this->label = label;
}

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params) {
    IRInstr* instIR = new IRInstr(this,op,t,params);
    instrs.push_back(instIR);
}

void BasicBlock::gen_asm(ostream &o) {

}




