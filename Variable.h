//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_VARIABLE_H
#define PLDCOMP_VARIABLE_H


#include <winnt.h>
#include <String>

using namespace std;

class Variable {

public:

    enum Type {INT_64, INT_32, CHAR};

    Variable(Type type, string nom, string valeur = NULL);

    virtual ~Variable();

    Type type;
    string nom;
    string valeur;
};


#endif //PLDCOMP_VARIABLE_H
