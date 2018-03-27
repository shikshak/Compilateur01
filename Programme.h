//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_PROGRAMME_H
#define PLDCOMP_PROGRAMME_H

#include <vector>
#include <ostream>

#include "Declaration.h"
#include "Fonction.h"

class Programme {
public:
    Programme();

    Programme(const vector<Declaration *> &declarations, const vector<Fonction *> &fonctions, Fonction *main);

    virtual ~Programme();

private:
    std::vector<Declaration*> declarations;
    std::vector<Fonction*> fonctions;
    Fonction* main;

public:
    const std::vector<Declaration *> &getDeclarations() const;
    void setDeclarations(const std::vector<Declaration *> &declarations);
    const std::vector<Fonction *> &getFonctions() const;
    void setFonctions(const std::vector<Fonction *> &fonctions);
    Fonction *getMain() const;
    void setMain(Fonction *main);

    void addDeclaration (Declaration *declaration);
    void addFonction (Fonction* fonction);

    friend ostream &operator<<(ostream &os, const Programme &programme);
};
#endif //PLDCOMP_PROGRAMME_H
