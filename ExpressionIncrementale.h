//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_EXPRESSIONINCREMENTALE_H
#define PLDCOMP_EXPRESSIONINCREMENTALE_H


#include <ostream>
#include "Expression.h"
#include "Variable.h"

class ExpressionIncrementale : public Expression {

public:
    enum OperateurIncrement {PLUSPLUSAVANT, PLUSPLUSAPRES, MOINSMOINSAVANT, MOINSMOINSAPRES};

    ExpressionIncrementale();

    ExpressionIncrementale(Variable *variable, OperateurIncrement operateurIncrement);

    Variable *getVariable() const;
    void setVariable(Variable *variable);
    OperateurIncrement getOperateurINcrement() const;
    void setOperateurINcrement(OperateurIncrement operateurINcrement);

    virtual ~ExpressionIncrementale();

    friend ostream &operator<<(ostream &os, const ExpressionIncrementale &incrementale);

private:
    Variable* variable;
    OperateurIncrement operateurIncrement;

};


#endif //PLDCOMP_EXPRESSIONINCREMENTALE_H
