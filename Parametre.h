//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_PARAMETRE_H
#define PLDCOMP_PARAMETRE_H


#include <vector>
#include <string>
#include <ostream>
#include "Variable.h"


using namespace std;
class Parametre {
public:
    enum Type {INT_64, INT_32, CHAR};
    Parametre();
    virtual ~Parametre();
    Expression *getExpression() const;
    void setExpression(Expression *expression);

friend ostream &operator<<(ostream &os, const Parametre &parametre);

private:
    Expression* expression;



};


#endif //PLDCOMP_PARAMETRE_H
