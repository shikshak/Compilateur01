//
// Created by heyhey on 20/03/2018.
//

#include "Variable.h"

Variable::~Variable() {

}

Variable::Type Variable::getType() const {
    return type;
}

void Variable::setType(Variable::Type type) {
    Variable::type = type;
}

const string &Variable::getNom() const {
    return nom;
}

void Variable::setNom(const string &nom) {
    Variable::nom = nom;
}

bool Variable::isHasValeur() const {
    return hasValeur;
}

void Variable::setHasValeur(bool hasValeur) {
    Variable::hasValeur = hasValeur;
}

ostream &operator<<(ostream &os, const Variable &variable) {
    os << "type: " << variable.type << " nom: " << variable.nom << " hasValeur: " << variable.hasValeur;
    os << endl;
    return os;
}

Variable::Variable(Variable::Type type, const string &nom, bool hasValeur) : type(type), nom(nom),
                                                                             hasValeur(hasValeur) {}

void Variable::setType(string type) {
    if(type == "char")
        setType(CHAR);
    else if(type == "int32_t")
        setType(INT_32);
    else if(type == "int64_t")
        setType(INT_64);
}

Variable::Variable() {

}

