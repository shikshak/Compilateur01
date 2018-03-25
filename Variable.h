//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_VARIABLE_H
#define PLDCOMP_VARIABLE_H

#include <String>
#include <ostream>

using namespace std;

class Variable {

public:

    enum Type {INT_64, INT_32, CHAR};

    Variable();

    Variable(Type type, const string &nom, bool hasValeur);

    virtual ~Variable();

public:
    Type getType() const;
    void setType(Type type);
    const string &getNom() const;
    void setNom(const string &nom);
    bool isHasValeur() const;
    void setHasValeur(bool hasValeur);

    friend ostream &operator<<(ostream &os, const Variable &variable);

private:
    Type type;
    string nom;
    bool hasValeur;
};


#endif //PLDCOMP_VARIABLE_H
