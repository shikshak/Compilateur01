//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_CONDITION_H
#define PLDCOMP_CONDITION_H


#include "Expression.h"

class Condition : public Expression {

public:
    Condition();
    Condition(Expression* expression, string valeur = NULL);
    virtual ~Condition();

private:
    Expression* expression;
public:
    Expression *getExpression() const;

    void setExpression(Expression *expression);
};


#endif //PLDCOMP_CONDITION_H
