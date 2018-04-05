//
// Created by heyhey on 20/03/2018.
//

#include "Parametre.h"

Parametre::Parametre() {}

Parametre::~Parametre() {}

Expression *Parametre::getExpression() const {
    return expression;
}

void Parametre::setExpression(Expression *expression) {
    Parametre::expression = expression;
}


ostream &operator<<(ostream &os, const Parametre &parametre) {

    os << "expression: " << parametre.expression;

    return os;
}

