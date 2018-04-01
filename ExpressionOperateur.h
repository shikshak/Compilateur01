//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_EXPRESSIONOPERATEUR_H
#define PLDCOMP_EXPRESSIONOPERATEUR_H


#include <ostream>
#include "Expression.h"

class ExpressionOperateur : public Expression {
public:
    enum Operateur {MULTIPLICATION, DIVISION, MOD, PLUS, MOINS, INFINF, SUPSUP, ET, OU, CHAPEAU, ETET, OUOU, INF, INFEGAL, SUP, SUPEGAL, EGALEGAL, DIFFEGAL};

    ExpressionOperateur();

    ExpressionOperateur(Expression *leftExpression, Operateur operateur, Expression *rightExpression);

    virtual ~ExpressionOperateur();

public:
    Expression* leftExpression;
    Operateur operateur;
    Expression* rightExpression;
public:
    Expression *getLeftExpression() const;
    void setLeftExpression(Expression *leftExpression);
    const Operateur &getOperateur() const;
    void setOperateur(const Operateur &operateur);
    Expression *getRightExpression() const;
    void setRightExpression(Expression *rightExpression);

    friend ostream &operator<<(ostream &os, const ExpressionOperateur &operateur);

};


#endif //PLDCOMP_EXPRESSIONOPERATEUR_H
