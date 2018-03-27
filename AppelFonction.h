//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_APPELFONCTION_H
#define PLDCOMP_APPELFONCTION_H


#include <ostream>
#include "Expression.h"
#include "Parametre.h"

class AppelFonction : public Expression {
public:
    AppelFonction();

    AppelFonction(const string &nomFonction, Parametre *parametre);

    virtual ~AppelFonction();

private:
    string nomFonction;
    Parametre* parametre;
public:
    const string &getNomFonction() const;

    void setNomFonction(const string &nomFonction);

    Parametre *getParametre() const;

    void setParametre(Parametre *parametre);

    friend ostream &operator<<(ostream &os, const AppelFonction &fonction);
};


#endif //PLDCOMP_APPELFONCTION_H
