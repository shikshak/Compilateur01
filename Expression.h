//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_EXPRESSION_H
#define PLDCOMP_EXPRESSION_H

#include <string>
#include <ostream>
#include "Instruction.h"
using namespace std;

class Expression : public Instruction {
public:
    Expression();

    Expression(const string &valeur);

    virtual ~Expression();

private:
    string valeur; //?? pas sur qu'on en est besoin  ¯\_(ツ)_/¯
public:
    const string &getValeur() const;
    void setValeur(const string &valeur);

    friend ostream &operator<<(ostream &os, const Expression &expression);
};


#endif //PLDCOMP_EXPRESSION_H
