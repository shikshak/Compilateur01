//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_SIMPLE_H
#define PLDCOMP_SIMPLE_H


#include <ostream>
#include "Variable.h"

class Simple: public Variable {

    Simple();

public:
    Simple(Type type, const string &nom, bool hasValeur, const string &valeur);

private:
    virtual ~Simple();

private:
    string valeur;
public:
    const string &getValeur() const;

    void setValeur(const string &valeur);

    friend ostream &operator<<(ostream &os, const Simple &simple);
};


#endif //PLDCOMP_SIMPLE_H
