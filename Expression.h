//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_EXPRESSION_H
#define PLDCOMP_EXPRESSION_H

#include <string>

using namespace std;

class Expression {
public:
    Expression();
    Expression(string valeur);
    virtual ~Expression();

private:
    string valeur;
public:
    const string &getValeur() const;
    void setValeur(const string &valeur);
};


#endif //PLDCOMP_EXPRESSION_H
