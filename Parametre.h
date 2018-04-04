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
    Variable *getVariable() const;
    void setVariable(Variable *variable);

friend ostream &operator<<(ostream &os, const Parametre &parametre);

private:
    Variable* variable;



};


#endif //PLDCOMP_PARAMETRE_H
