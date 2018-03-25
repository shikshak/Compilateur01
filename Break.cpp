//
// Created by heyhey on 20/03/2018.
//

#include "Break.h"

Break::Break() {}

Break::~Break() {

}

std::ostream &operator<<(std::ostream &os, const Break &aBreak) {
    os << static_cast<const Instruction &>(aBreak);
    os << std::endl;
    return os;
}
