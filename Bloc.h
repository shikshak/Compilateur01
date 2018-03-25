//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_BLOC_H
#define PLDCOMP_BLOC_H

#include <vector>
#include <ostream>
#include "Instruction.h"

class Bloc {
public:
    Bloc();

    Bloc(const std::vector<Instruction *> &instructions);

    virtual ~Bloc();

private:
    std::vector<Instruction*> instructions;
public:
    const std::vector<Instruction *> &getInstructions() const;

    void setInstructions(const std::vector<Instruction *> &instructions);

    void addInstructions (Instruction* instruction);

    friend std::ostream &operator<<(std::ostream &os, const Bloc &bloc);
};


#endif //PLDCOMP_BLOC_H
