//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_TABLEAU_H
#define PLDCOMP_TABLEAU_H


#include <ostream>
#include <vector>
#include "Variable.h"

class Tableau : public Variable {

public:
    Tableau();

    Tableau(string type, const string &nom);

    virtual ~Tableau();

private:
    unsigned int taille;
    unsigned int position;
    string * valeur;
public:
    string *getValeur() ;

private:
    bool * hasValeur;

public:

    void setHasValeur(int position, bool hasValeur);

    bool getHasValeur(int position) const;

    unsigned int getTaille() const;

    void setTaille(unsigned int taille);

    string getValeur(int position);

    void setValeur(int position,string valeur);

    unsigned int getPosition() const;

    void setPosition(unsigned int position);


    friend ostream &operator<<(ostream &os, const Tableau &tableau);
};


#endif //PLDCOMP_TABLEAU_H
