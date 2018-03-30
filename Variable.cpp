//
// Created by heyhey on 20/03/2018.
//

#include "Variable.h"
#include "Parametre.h"


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

ostream &operator<<(ostream &os, const Variable &variable) {
    os << "type: " << variable.type << " nom: " << variable.nom;
    os << endl;
    return os;
}

void Variable::setType(string type) {
    if(type == "char")
        setType(CHAR);
    else if(type == "int32_t")
        setType(INT_32);
    else if(type == "int64_t")
        setType(INT_64);
}

Variable::Variable() = default;

Variable::Variable(Variable::Type type, const string &nom) {
    setNom(nom);
    setType(type);
}

Variable::~Variable() {

}

bool Variable::isIsUsed() const {
    return isUsed;
}

void Variable::setIsUsed(bool isUsed) {
    Variable::isUsed = isUsed;
}

