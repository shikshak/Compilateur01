//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_DECLARATION_H
#define PLDCOMP_DECLARATION_H


#include <vector>
#include <ostream>
#include "Variable.h"

class Declaration {
public:
    Declaration();

    Declaration(const vector<Variable *> &variables, bool hasDeclaration, const string &valeur);

    virtual ~Declaration();

private:
    vector<Variable*> variables;
    bool hasDeclaration;
    string valeur;
public:
    const vector<Variable *> &getVariables() const;
    void setVariables(const vector<Variable *> &variables);
    bool isHasDeclaration() const;
    void setHasDeclaration(bool hasDeclaration);
    const string &getValeur() const;
    void setValeur(const string &valeur);

    void addVariable (Variable* variable);

    friend ostream &operator<<(ostream &os, const Declaration &declaration);

};


#endif //PLDCOMP_DECLARATION_H
