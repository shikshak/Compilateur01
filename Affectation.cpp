//
// Created by heyhey on 20/03/2018.
//

#include "Affectation.h"

Affectation::~Affectation() {}

Affectation::Affectation(Variable *variableLeft_,
                         Expression *expressionRight_,
                         Affectation::Operateur operateur_,
                         string valeur_) : Expression(valeur_) {
    variableLeft_ = variableLeft;
    expressionRight_ = expressionRight;
    operateur_ = operateur;
}

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
