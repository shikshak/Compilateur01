//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_AFFECTATION_H
#define PLDCOMP_AFFECTATION_H

#include <ostream>
#include "Expression.h"
#include "Variable.h"

class Affectation : public Expression{
public:

    enum Operateur {EGAL, ETEGAL, OUEGAL, PLUSEGAL, MOINSEGAL, FOISEGAL, DIVEGAL, POURCENTAGEEGAL, INFEGAL, SUPEGAL};

    Affectation();

    Affectation(Variable *variableLeft, Expression *expressionRight, Operateur operateur);

    virtual ~Affectation();

private:
    Variable* variableLeft;
    Expression* expressionRight;
    Operateur operateur;
public:
    Variable *getVariableLeft() const;

    void setVariableLeft(Variable *variableLeft);

    Expression *getExpressionRight() const;

    void setExpressionRight(Expression *expressionRight);

    Operateur getOperateur() const;

    void setOperateur(Operateur operateur);

    friend ostream &operator<<(ostream &os, const Affectation &affectation);

};


#endif //PLDCOMP_AFFECTATION_H
