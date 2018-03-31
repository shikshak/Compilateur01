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
class BuildIR {

private:
    std::vector<CFG*> CFGs;
    CFG* current_cfg;
    BasicBlock* current_bb;
public:
    BuildIR();

    void programToIR(Programme* prog);
    void blocToIR(Bloc* fct);

    virtual ~BuildIR();
};


#endif //PLDCOMP_BUIKDIR_H
