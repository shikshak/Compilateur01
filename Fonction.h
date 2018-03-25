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
    Fonction();

    Fonction(Parametre *parametre, const vector<Declaration *> &declarations, Bloc *bloc);

    virtual ~Fonction();

private:
    Parametre* parametre;
    vector<Declaration*> declarations;
    Bloc* bloc;
public:
    Parametre *getParametre() const;
    void setParametre(Parametre *parametre);
    const vector<Declaration *> &getDeclarations() const;
    void setDeclarations(const vector<Declaration *> &declaration);
    Bloc *getBloc() const;
    void setBloc(Bloc *bloc);

    void addDeclaration (Declaration* declaration);

    friend ostream &operator<<(ostream &os, const Fonction &fonction);
};


#endif //PLDCOMP_FONCTION_H
