//
// Created by heyhey on 20/03/2018.
//

#include "StructureWHILE.h"

StructureWHILE::StructureWHILE() {}

ostream &operator<<(ostream &os, const StructureWHILE &aWhile) {
    os << static_cast<const Structure &>(aWhile);
    os << endl;
    return os;
}

StructureWHILE::StructureWHILE(Condition *condition, Bloc *bloc) : Structure(condition, bloc) {}
