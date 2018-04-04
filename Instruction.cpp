//
// Created by heyhey on 20/03/2018.
//

#include "Instruction.h"

Instruction::Instruction() {}

Instruction::~Instruction() {

}

std::ostream &operator<<(std::ostream &os, const Instruction &instruction) {
    os << "Instruction" << std::endl;
    return os;
}

