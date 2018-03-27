//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_INSTRUCTION_H
#define PLDCOMP_INSTRUCTION_H


#include <ostream>

class Instruction {
public:
    Instruction();
    virtual ~Instruction();

    friend std::ostream &operator<<(std::ostream &os, const Instruction &instruction);
};


#endif //PLDCOMP_INSTRUCTION_H
