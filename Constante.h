//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_CONSTANTE_H
#define PLDCOMP_CONSTANTE_H


#include <ostream>
#include "Expression.h"

class Constante : public Expression{
public:
    Constante();

    virtual ~Constante();

    friend ostream &operator<<(ostream &os, const Constante &constante);

};


#endif //PLDCOMP_CONSTANTE_H
