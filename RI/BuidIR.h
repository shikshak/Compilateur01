//
// Created by Amina on 30/03/2018.
//

#ifndef PLDCOMP_BUIKDIR_H
#define PLDCOMP_BUIKDIR_H

#include <iostream>
#include <vector>

#include "../Programme.h"
#include "../Bloc.h"
#include "IR.h"
#include "../Expression.h"

class BuildIR {

private:
    std::vector<CFG*> CFGs;
public:
    const vector<CFG *> &getCFGs() const;

    CFG *getCurrent_cfg() const;

    BasicBlock *getCurrent_bb() const;

public:
    void setCFGs(const vector<CFG *> &CFGs);

    void setCurrent_cfg(CFG *current_cfg);

    void setCurrent_bb(BasicBlock *current_bb);

private:
    CFG* current_cfg;
    BasicBlock* current_bb;
public:
    BuildIR();
    BuildIR(Programme* prog);
    void programToIR(Programme* prog);
    void blocToIR(Bloc* fct);
    void DeclarationToIR(vector<Declaration*> declarations);
    string ExpressionToIR(Expression *exp);
    string VariableToIR(Variable* var);
    string LValueToIR(Variable* var);

    void print();
    virtual ~BuildIR();


};


#endif //PLDCOMP_BUIKDIR_H
