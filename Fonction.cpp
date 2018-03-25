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

ostream &operator<<(ostream &os, const Fonction &fonction) {
    os << "parametre: " << fonction.parametre << " declarations: ";
    for (auto i:fonction.getDeclarations())
        os << i << ' ';
    os << " bloc: " << fonction.bloc;
    os << endl;
    return os;
}

Fonction::Fonction(Parametre *parametre, const vector<Declaration *> &declarations, Bloc *bloc) : parametre(parametre),
                                                                                                  declarations(
                                                                                                          declarations),
                                                                                                  bloc(bloc) {}
