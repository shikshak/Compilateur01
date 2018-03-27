//
// Created by heyhey on 20/03/2018.
//

#include "Simple.h"

const string &Simple::getValeur() const {
    return valeur;
}

void Simple::setValeur(const string &valeur) {
    Simple::valeur = valeur;
    setHasValeur(true);
}

ostream &operator<<(ostream &os, const Simple &simple) {
    os << static_cast<const Variable &>(simple) << " valeur: " << simple.valeur;
    os << endl;
    return os;
}

Simple::Simple(Variable::Type type, const string &nom, bool hasValeur, const string &valeur) : Variable(type, nom,
                                                                                                        hasValeur),
                                                                                               valeur(valeur) {}
