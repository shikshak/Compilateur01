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

private:
    Type type;
public:
    Type getType() const;

    void setType(Type type);

private:
    string nom;
    unsigned int taille;
    string *valeur;

};


#endif //PLDCOMP_TABLEAU_H
