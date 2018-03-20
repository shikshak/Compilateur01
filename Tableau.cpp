//
// Created by heyhey on 20/03/2018.
//

#include "Tableau.h"

Tableau::Tableau(Variable::Type type_, string nom_, unsigned int taille_, string *valeur_) {

    type = type_;
    nom = nom_;
    taille = taille_;

    for (int i= 0; i<taille; i++)
    {
        if (!valeur_[i].empty()) valeur[i] = valeur_[i];
    }

}

Tableau::~Tableau() {

}


