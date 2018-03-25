//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_EXPRESSIONUNAIRE_H
#define PLDCOMP_EXPRESSIONUNAIRE_H


#include <ostream>
#include "Expression.h"

class ExpressionUnaire : public Expression {
public:
    ExpressionUnaire();

    virtual ~ExpressionUnaire();

    friend ostream &operator<<(ostream &os, const ExpressionUnaire &unaire);
};


#endif //PLDCOMP_EXPRESSIONUNAIRE_H
