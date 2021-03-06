//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_VARIABLE_H
#define PLDCOMP_VARIABLE_H

#include <string>
#include <ostream>
#include "Expression.h"


using namespace std;

class Variable : public Expression{

public:

    enum Type {INT_64, INT_32, CHAR};

    Variable();

    Variable(string type, const string &nom);

    virtual ~Variable();

    

    void setType(string type);

    void setNom(const string &nom);

    const string &getNom() const;

    Variable::Type getType() const;

    friend ostream &operator<<(ostream &os, const Variable &variable);

private:
    Type type;
    string nom;
    bool isUsed;
//void setType(Type type);
public:
    bool isIsUsed() const;

    void setIsUsed(bool isUsed);

};


#endif //PLDCOMP_VARIABLE_H
