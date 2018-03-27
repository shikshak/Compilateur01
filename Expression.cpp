//
// Created by heyhey on 20/03/2018.
//

#include "Expression.h"

Expression::Expression() {}

Expression::~Expression() {}

const string &Expression::getValeur() const {
    return valeur;
}

void Expression::setValeur(const string &valeur) {
    Expression::valeur = valeur;
}

ostream &operator<<(ostream &os, const Expression &expression) {
    os << "valeur: " << expression.valeur;
    os << endl;
    return os;
}

Expression::Expression(const string &valeur) : valeur(valeur) {}
