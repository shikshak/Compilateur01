//
// Created by Imene Hakem on 3/27/2018.
//

#ifndef PLDCOMP_BASICBLOCK_H
#define PLDCOMP_BASICBLOCK_H


#include <list>
#include "../Instruction.h"



class CFG;
class BasicBlock {

public:
    BasicBlock();

    BasicBlock(list<Instruction *> instructions, CFG *cfg, std::string aLabel = "unknown");

    ~BasicBlock();
};

#endif //PLDCOMP_BASICBLOCK_H