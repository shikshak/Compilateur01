//
// Created by heyhey on 20/03/2018.
//

#include "Tableau.h"

Tableau::~Tableau() {

}

unsigned int Tableau::getTaille() const {
    return taille;
}

void Tableau::setTaille(unsigned int taille) {
    Tableau::taille = taille;
}

string *Tableau::getValeur() const {
    return valeur;
}

void Tableau::setValeur(string *valeur) {
    Tableau::valeur = valeur;
    setHasValeur(true);
}

ostream &operator<<(ostream &os, const Tableau &tableau) {
    os << static_cast<const Variable &>(tableau) << " taille: " << tableau.taille << " valeur: " << tableau.valeur;
    os << endl;
    return os;
}

Tableau::Tableau(Variable::Type type, const string &nom, bool hasValeur, unsigned int taille, string *valeur)
        : Variable(type, nom, hasValeur), taille(taille), valeur(valeur) {}

unsigned int Tableau::getPosition() const {
    return position;
}

void Tableau::setPosition(unsigned int position) {
    Tableau::position = position;
}
