//
// Created by heyhey on 20/03/2018.
//

#include "Programme.h"

Programme::Programme() {
}

Programme::~Programme() {

}

const std::vector<Declaration *> &Programme::getDeclarations() const {
            return declarations;
}

void Programme::setDeclarations(const std::vector<Declaration *> &declarations) {
    Programme::declarations = declarations;
}

const std::vector<Fonction *> &Programme::getFonctions() const {
    return fonctions;
}

void Programme::setFonctions(const std::vector<Fonction *> &fonctions) {
    Programme::fonctions = fonctions;
}

Fonction *Programme::getMain() const {
    return main;
}

void Programme::setMain(Fonction *main) {
    Programme::main = main;
}

void Programme::addDeclaration(Declaration *declaration) {
    declarations.push_back(declaration);
}

void Programme::addFonction(Fonction *fonction) {
    fonctions.push_back(fonction);
}

ostream &operator<<(ostream &os, const Programme &programme) {
    os << "declarations: ";
    for (auto i: programme.getDeclarations())
        os << i << ' ';
    os << " fonctions: ";
    for (auto i: programme.getFonctions())
        os << i << ' ';
    os << " main: " << programme.main;
    os << endl;
    return os;
}

Programme::Programme(const vector<Declaration *> &declarations, const vector<Fonction *> &fonctions, Fonction *main)
        : declarations(declarations), fonctions(fonctions), main(main) {}

