//
// Created by heyhey on 20/03/2018.
//

#include "StructureIF.h"

StructureIF::StructureIF() {
}

ostream &operator<<(ostream &os, const StructureIF &anIf) {
    os << static_cast<const Structure &>(anIf);
    os << endl;
    return os;
}

StructureIF::StructureIF(Condition *condition, Bloc *bloc) : Structure(condition, bloc) {}

