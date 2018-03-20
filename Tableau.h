//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_TABLEAU_H
#define PLDCOMP_TABLEAU_H


#include "Variable.h"

class Tableau : public Variable {

    Tableau();
    Tableau(Type type, string nom, unsigned int taille, string valeur[] = NULL);

    virtual ~Tableau();

    Type type;
    string nom;
    unsigned int taille;
    string *valeur;

};


#endif //PLDCOMP_TABLEAU_H
