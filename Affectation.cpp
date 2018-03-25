//
// Created by heyhey on 20/03/2018.
//

#include "Affectation.h"

Affectation::~Affectation() {}

Variable *Affectation::getVariableLeft() const {
    return variableLeft;
}

void Affectation::setVariableLeft(Variable *variableLeft) {
    Affectation::variableLeft = variableLeft;
}

Expression *Affectation::getExpressionRight() const {
    return expressionRight;
}

void Affectation::setExpressionRight(Expression *expressionRight) {
    Affectation::expressionRight = expressionRight;
}

Affectation::Operateur Affectation::getOperateur() const {
    return operateur;
}

void Affectation::setOperateur(Affectation::Operateur operateur) {
    Affectation::operateur = operateur;
}

ostream &operator<<(ostream &os, const Affectation &affectation) {
    os << static_cast<const Expression &>(affectation) << " variableLeft: " << affectation.variableLeft
       << " expressionRight: " << affectation.expressionRight << " operateur: " << affectation.operateur;
    os << endl;
    return os;
}

Affectation::Affectation(Variable *variableLeft, Expression *expressionRight, Affectation::Operateur operateur)
        : variableLeft(variableLeft), expressionRight(expressionRight), operateur(operateur) {}
