//
// Created by heyhey on 20/03/2018.
//

#include "AppelFonction.h"

AppelFonction::AppelFonction() {}

AppelFonction::~AppelFonction() {

}

const string &AppelFonction::getNomFonction() const {
    return nomFonction;
}

void AppelFonction::setNomFonction(const string &nomFonction) {
    AppelFonction::nomFonction = nomFonction;
}

Parametre *AppelFonction::getParametre() const {
    return parametre;
}

void AppelFonction::setParametre(Parametre *parametre) {
    AppelFonction::parametre = parametre;
}

ostream &operator<<(ostream &os, const AppelFonction &fonction) {
    os << static_cast<const Expression &>(fonction) << " nomFonction: " << fonction.nomFonction << " parametre: "
       << fonction.parametre;
    os << endl;
    return os;
}

AppelFonction::AppelFonction(const string &nomFonction, Parametre *parametre) : nomFonction(nomFonction),
                                                                                parametre(parametre) {}
