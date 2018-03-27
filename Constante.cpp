//
// Created by heyhey on 20/03/2018.
//

#include "Constante.h"

Constante::Constante() {}

Constante::~Constante() {

}

ostream &operator<<(ostream &os, const Constante &constante) {
    os << static_cast<const Expression &>(constante);
    os << endl;
    return os;
}
