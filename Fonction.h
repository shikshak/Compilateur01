//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_FONCTION_H
#define PLDCOMP_FONCTION_H


#include <ostream>
#include "Parametre.h"
#include "Declaration.h"
#include "Bloc.h"

class Fonction {
public:

    enum Type {CHAR, INT_32, INT_64, VOID, INT};
    Fonction();

    Fonction(Parametre *parametre, const string &nom, Type type, const vector<Declaration *> &declarations, Bloc *bloc);

    virtual ~Fonction();

private:
    Parametre* parametre;
    string nom;
    Type type;
    vector<Declaration*> declarations;
    Bloc* bloc;
public:
    Parametre *getParametre() const;
    void setParametre(Parametre *parametre);
    const vector<Declaration *> &getDeclarations() const;
    void setDeclarations(const vector<Declaration *> &declaration);
    Bloc *getBloc() const;
    void setBloc(Bloc *bloc);

    const string &getNom() const;

    void setNom(const string &nom);

    Type getType() const;

    void setType(Type type);
    void setType(string type);

    void addDeclaration (Declaration* declaration);


};


#endif //PLDCOMP_FONCTION_H
