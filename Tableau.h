//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_TABLEAU_H
#define PLDCOMP_TABLEAU_H


#include <ostream>
#include "Variable.h"

class Tableau : public Variable {

public:
    Tableau();

    Tableau(Type type, const string &nom, bool hasValeur, unsigned int taille, string *valeur);

    virtual ~Tableau();

private:
    unsigned int taille;
    string *valeur;
public:
    unsigned int getTaille() const;

    void setTaille(unsigned int taille);

    string *getValeur() const;

    void setValeur(string *valeur);

    friend ostream &operator<<(ostream &os, const Tableau &tableau);
};


#endif //PLDCOMP_TABLEAU_H
