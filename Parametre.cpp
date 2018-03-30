//
// Created by heyhey on 20/03/2018.
//

#include "Parametre.h"

Parametre::Parametre() {}

Parametre::~Parametre() {}

Variable *Parametre::getVariable() const {
    return variable;
}

void Parametre::setVariable(Variable *variable) {
    Parametre::variable = variable;
}


