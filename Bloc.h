//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_BLOC_H
#define PLDCOMP_BLOC_H


#include "Instruction.h"

class Bloc {
public:
    Bloc();
    Bloc(Instruction* instruction);
    virtual ~Bloc();




private:
    Instruction* instruction;
public:
    Instruction *getInstruction() const;

    void setInstruction(Instruction *instruction);
};


#endif //PLDCOMP_BLOC_H
