//
// Created by heyhey on 20/03/2018.
//

#include "Bloc.h"

Bloc::Bloc() {}

Bloc::~Bloc() {}

Bloc::Bloc(Instruction *instruction_) {
    instruction = instruction_;
}

Instruction *Bloc::getInstruction() const {
    return instruction;
}

void Bloc::setInstruction(Instruction *instruction) {
    Bloc::instruction = instruction;
}
