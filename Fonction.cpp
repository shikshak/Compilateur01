//
// Created by heyhey on 20/03/2018.
//

#include "Fonction.h"

Fonction::Fonction() {}

Fonction::~Fonction() {

}

Parametre *Fonction::getParametre() const {
    return parametre;
}

void Fonction::setParametre(Parametre *parametre) {
    Fonction::parametre = parametre;
}

const vector<Declaration *> &Fonction::getDeclarations() const {
    return declarations;
}

void Fonction::setDeclarations(const vector<Declaration *> &declaration) {
    Fonction::declarations = declaration;
}

Bloc *Fonction::getBloc() const {
    return bloc;
}

void Fonction::setBloc(Bloc *bloc) {
    Fonction::bloc = bloc;
}

void Fonction::addDeclaration(Declaration *declaration) {
    declarations.push_back(declaration);
}

const string &Fonction::getNom() const {
    return nom;
}

void Fonction::setNom(const string &nom) {
    Fonction::nom = nom;
}

Fonction::Type Fonction::getType() const {
    return type;
}

void Fonction::setType(Fonction::Type type) {
    Fonction::type = type;
}

Fonction::Fonction(Parametre *parametre, const string &nom, Fonction::Type type,
                   const vector<Declaration *> &declarations, Bloc *bloc) : parametre(parametre), nom(nom), type(type),
                                                                            declarations(declarations), bloc(bloc) {}


void Fonction::setType(string type) {
    if(type == "char")
        setType(CHAR);
    else if(type == "int32_t")
        setType(INT_32);
    else if(type == "int64_t")
        setType(INT_64);
    else if(type == "void")
        setType(VOID);
    else if(type == "int")
        setType(INT);
}
