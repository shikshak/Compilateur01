//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_SIMPLE_H
#define PLDCOMP_SIMPLE_H


#include <ostream>
#include "Variable.h"

class Simple: public Variable {



public:

    Simple();

    Simple(string type, const string &nom, const string &valeur="0");

    const string &getValeur();

    bool isHasValeur() const;

    void setValeur(const string &valeur);

    friend ostream &operator<<(ostream &os, const Simple &simple);

    ~Simple() override;

    void setHasValeur(bool hasValeur);

private:
    string valeur;
    bool hasValeur;

};


#endif //PLDCOMP_SIMPLE_H
