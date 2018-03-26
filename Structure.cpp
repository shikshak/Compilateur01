//
// Created by heyhey on 20/03/2018.
//

#include "Structure.h"

Structure::Structure() {

}

Structure::Structure(Condition *condition) : condition(condition) {}

Condition *Structure::getCondition() const {
    return condition;
}

void Structure::setCondition(Condition *condition) {
    Structure::condition = condition;
}

ostream &operator<<(ostream &os, const Structure &structure) {
    os << static_cast<const Instruction &>(structure) << " condition: " << structure.condition;
    return os;
}

Structure::~Structure() {

}
