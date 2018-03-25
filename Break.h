//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_BREAK_H
#define PLDCOMP_BREAK_H


#include <ostream>
#include "Instruction.h"

class Break : public Instruction {
public:
    Break();

    virtual ~Break();

    friend std::ostream &operator<<(std::ostream &os, const Break &aBreak);
};


#endif //PLDCOMP_BREAK_H
