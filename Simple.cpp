//
// Created by heyhey on 20/03/2018.
//

#include "Simple.h"

const string &Simple::getValeur() {
    setIsUsed(true);
    return valeur;
}



ostream &operator<<(ostream &os, const Simple &simple) {
    os << static_cast<const Variable &>(simple) << " valeur: " << simple.valeur;
    os << endl;
    return os;
}


Simple::Simple(string type, const string &nom, const string &valeur) : Variable(type, nom), valeur(valeur) , hasValeur(hasValeur){}

void Simple::setValeur(const string &valeur) {
    Simple::valeur = valeur;
    Simple::hasValeur = true;
}

bool Simple::isHasValeur() const {
    return hasValeur;
}

Simple::~Simple() {

}

void Simple::setHasValeur(bool hasValeur) {
    Simple::hasValeur = hasValeur;
}


Simple::Simple() {
    setIsUsed(false);
}
