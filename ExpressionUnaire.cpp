//
// Created by heyhey on 20/03/2018.
//

#include "ExpressionUnaire.h"

ExpressionUnaire::ExpressionUnaire() {}

ExpressionUnaire::~ExpressionUnaire() {

}

ostream &operator<<(ostream &os, const ExpressionUnaire &unaire) {
    os << static_cast<const Expression &>(unaire);
    os << endl;
    return os;
}
