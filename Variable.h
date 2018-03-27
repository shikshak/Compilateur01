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

    Variable(Type type, const string &nom);

    virtual ~Variable();

    void setType(Type type);

    void setType(string type);

    void setNom(const string &nom);

    const string &getNom() const;

    Type getType() const;

    friend ostream &operator<<(ostream &os, const Variable &variable);

private:
    static Type type;
    static string nom;

};


#endif //PLDCOMP_VARIABLE_H
