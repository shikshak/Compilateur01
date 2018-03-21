//
// Created by heyhey on 20/03/2018.
//

#include "Expression.h"

Expression::Expression() {}

Expression::~Expression() {}

Expression::Expression(string valeur_) {
    valeur = valeur_;
}

const string &Expression::getValeur() const {
    return valeur;
}

void Expression::setValeur(const string &valeur) {
    Expression::valeur = valeur;
}
