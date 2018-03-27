//
// Created by heyhey on 20/03/2018.
//

#include "Bloc.h"

Bloc::Bloc() {}

Bloc::~Bloc() {}

void Bloc::addInstructions(Instruction *instruction) {
    instructions.push_back(instruction);
}

const std::vector<Instruction *> &Bloc::getInstructions() const {
    return instructions;
}

void Bloc::setInstructions(const std::vector<Instruction *> &instructions) {
    Bloc::instructions = instructions;
}

std::ostream &operator<<(std::ostream &os, const Bloc &bloc) {
    os << "instructions: ";
    for (auto i: bloc.getInstructions())
        os << i << ' ';
    os << std::endl;
    return os;
}

Bloc::Bloc(const std::vector<Instruction *> &instructions) : instructions(instructions) {}
