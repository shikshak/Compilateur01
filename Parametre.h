//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_PARAMETRE_H
#define PLDCOMP_PARAMETRE_H


#include <vector>
#include <ostream>
#include "Expression.h"

class Parametre {
public:
    Parametre();

    Parametre(const vector<Expression *> &expressions);

    virtual ~Parametre();

private:
    vector<Expression*> expressions;
public:
    const vector<Expression *> &getExpressions() const;
    void setExpressions(const vector<Expression *> &expressions);

    void addExpression (Expression* expression);

    friend ostream &operator<<(ostream &os, const Parametre &parametre);
};


#endif //PLDCOMP_PARAMETRE_H
