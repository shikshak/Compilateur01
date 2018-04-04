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
}

void IRInstr::gen_asm(ostream &o) {
    string str;
    string operateur;
    switch (this->op) {
        case Operation::ldconst :
            operateur = "movq";
            str= "\n"+operateur+ " $"+ params.at(1) + ", "+to_string(bb->cfg->get_var_index(params.at(0)))+ "(%rbp)";
            o << str;
            break;
        case Operation::sub :
            str = "\nmovq " + to_string(bb->cfg->get_var_index(params.at(2))) + "(%rbp), %rax";
            o << str << endl;
            str = "\nsubq " + to_string(bb->cfg->get_var_index(params.at(1))) + "(%rbp), %rax";
            o << str << endl;
            str = "\nmovq %rax, " + to_string(bb->cfg->get_var_index(params.at(0))) + "(%rbp)";
            o << str << endl;
            break;
        case Operation::add :
            o << "movq " << to_string(bb->cfg->get_var_index(params.at(2))) << "(%rbp), %rax"<< "\n";
            o << "addq" <<  to_string(bb->cfg->get_var_index(params.at(1))) << "(%rbp), %rax"<< endl;
            //cout << str;
            o <<"movq %rax, " << to_string(bb->cfg->get_var_index(params.at(0))) << "(%rbp)"<< endl;
            //cout << str;
            break;
        case Operation::copy :
            operateur = "movq";
            str = "\n"+operateur+" "+ to_string(bb->cfg->get_var_index(params.at(0)))+"(%rbp), %rax";
            o << str ;
            str = "\n"+operateur+" %rax,"+ to_string(bb->cfg->get_var_index(params.at(1)))+"(%rbp)";
            o << str;
            break;
        default:
            break;

    }
}
void IRInstr::print() {
        cout << bb->label + " ";
        if (op == IRInstr::copy){
            cout << "copy " ;
        }else if (op == IRInstr::add){
            cout << "add " ;
        }else if (op == IRInstr::sub){
            cout << "sub " ;
        }else if (op == IRInstr::call){
            cout << "call " ;
        }
        else if (op == IRInstr::ldconst){
            cout << "ldconst " ;
        }
        for (auto par:params){
            cout << par+" ";
        }
        cout << "\n";
}



//*********************CFG***********************************

CFG::CFG(Fonction *ast) {
    this-> ast = ast;
    this-> current_bb = NULL;
    this-> nextTmp=0;
    this-> nextVar=0;
    this-> nextFreeSymbolIndex=-8;
    this-> nextBBnumber =1;
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
    return tmp;
}

void CFG::add_bb(BasicBlock *bb) {
    this->bbs.push_back(bb);
}

string CFG::new_BB_name() {

    string s = "b_"+to_string(nextBBnumber);
    nextBBnumber++;
    return s;
}

void CFG::gen_asm(ostream& o) {
    gen_asm_prologue(o);
    o <<"\n";
    gen_asm_body(o);
    o <<"\n";
    gen_asm_epilogue(o);
}

string CFG::IR_reg_to_asm(string reg) {
    return std::string();
}

void CFG::gen_asm_prologue(ostream& o) {
    o << "\npushq %rbp";
    o << "\nmovq %rsp, %rbp";
    //o.write("\npushq %rbp",50);
    //o.write("\nmovq %rsp, %rbp",50);
    string str = "";
    str = "\nsubq " + to_string(nextVar) + "%rsp";
    o << str <<"\n";
}

void CFG::gen_asm_body(ostream& o){
    for(BasicBlock* bb : getBbs())
    {
        (bb)->gen_asm(o);
    }
}

void CFG::gen_asm_epilogue(ostream& o) {
    cout << "leave" <<"\n";
    cout << "ret" <<"\n";

}

int CFG::get_var_index(string name) {
    return this->SymbolIndex.at(name);
}

Type CFG::get_var_type(string name) {
    return Type::int64;
}

const vector<BasicBlock *> &CFG::getBbs() const {
    return bbs;
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
    for(auto ir : this->getInstrs())
    {
        ir->print();
        (ir)->gen_asm(o);
        cout<<"généré";

    }

}
const vector<IRInstr *> &BasicBlock::getInstrs() const {
    return instrs;
}




