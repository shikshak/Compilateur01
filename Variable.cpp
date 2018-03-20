//
// Created by heyhey on 20/03/2018.
//

#include "Variable.h"

Variable::Variable(Type type_, string nom_, string valeur_) {
    type = type_;
    nom = nom_;
    if (!valeur_.empty()) valeur = valeur_;
}

Variable::~Variable() {

}