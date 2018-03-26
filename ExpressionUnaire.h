//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_EXPRESSIONUNAIRE_H
#define PLDCOMP_EXPRESSIONUNAIRE_H


#include <ostream>
#include "Expression.h"

class ExpressionUnaire : public Expression {
public:
    enum Operateur {VAGUE, PARENTHESE, EXCLAMATION};

    ExpressionUnaire();

    virtual ~ExpressionUnaire();

private:
    Operateur operateur;

public:
    Operateur getOperateur() const;

    void setOperateur(Operateur operateur);

private:
    friend ostream &operator<<(ostream &os, const ExpressionUnaire &unaire);
};


#endif //PLDCOMP_EXPRESSIONUNAIRE_H
