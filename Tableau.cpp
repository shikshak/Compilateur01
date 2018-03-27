//
// Created by heyhey on 20/03/2018.
//

#include "Tableau.h"

Tableau::~Tableau() {
    delete(hasValeur);
    delete(valeur);
}

unsigned int Tableau::getTaille() const {
    return taille;
}

void Tableau::setTaille(unsigned int taille) {
    Tableau::taille = taille;
    hasValeur = new bool [taille];
    for (int i = 0 ; i< taille ; i++){
        hasValeur[i]=false;
        isUsed[i]=false;
    }
    valeur = new string [taille];
}

string Tableau::getValeur(int position) const {
    isUsed[position]=true;
    return valeur[position];
}

void Tableau::setValeur(int position, string valeur) {
    Tableau::valeur[position] = valeur;
    setHasValeur(position, true);
}

ostream &operator<<(ostream &os, const Tableau &tableau) {
    os << static_cast<const Variable &>(tableau) << " taille: " << tableau.taille << " valeur: " << tableau.valeur;
    os << endl;
    return os;
}


unsigned int Tableau::getPosition() const {
    return position;
}

void Tableau::setPosition(unsigned int position) {
    Tableau::position = position;
}

Tableau::Tableau() {

}

Tableau::Tableau(Variable::Type type, const string &nom ) : Variable(type, nom) {}

void Tableau::setHasValeur(int position, bool hasValeur) {
    Tableau::hasValeur[position] = hasValeur;
}

bool Tableau::getHasValeur(int position) const {
    return hasValeur[position];
}

void Tableau::setIsUsed(int position,bool isUsed) {
    Tableau::isUsed[position] = isUsed;
}

bool Tableau::getIsUsed() const {
    bool ans = false;
    for (int i = 0; i < taille; i++) {
        ans = ans && isUsed[i];
    }
    return ans;
}

