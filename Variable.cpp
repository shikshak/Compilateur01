//
// Created by heyhey on 20/03/2018.
//

#include "Variable.h"

Variable::Variable(Type type, string nom, string valeur) {
    type = type;
    nom = nom;
    if (!valeur.empty()) valeur = valeur;
}

Variable::~Variable() {

}