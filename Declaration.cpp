//
// Created by heyhey on 20/03/2018.
//

#include "Declaration.h"

Declaration::Declaration() {}

Declaration::~Declaration() {

}

const vector<Variable *> &Declaration::getVariables() const {
    return variables;
}

void Declaration::setVariables(const vector<Variable *> &variables) {
    Declaration::variables = variables;
}

bool Declaration::isHasDeclaration() const {
    return hasDeclaration;
}

void Declaration::setHasDeclaration(bool hasDeclaration) {
    Declaration::hasDeclaration = hasDeclaration;
}

const string &Declaration::getValeur() const {
    return valeur;
}

void Declaration::setValeur(const string &valeur) {
    Declaration::valeur = valeur;
}

void Declaration::addVariable(Variable *variable) {
    variables.push_back(variable);
}

ostream &operator<<(ostream &os, const Declaration &declaration) {
    os << "variables: ";
    for (auto i: declaration.getVariables())
        os << i << ' ';
    os << " hasDeclaration: " << declaration.hasDeclaration << " valeur: "
       << declaration.valeur;
    os << endl;
    return os;
}

Declaration::Declaration(const vector<Variable *> &variables, bool hasDeclaration, const string &valeur) : variables(
        variables), hasDeclaration(hasDeclaration), valeur(valeur) {}
