//
// Created by heyhey on 20/03/2018.
//

#include "StructureWHILE.h"

StructureWHILE::StructureWHILE() {}

Bloc *StructureWHILE::getBloc() const {
    return bloc;
}

void StructureWHILE::setBloc(Bloc *bloc) {
    StructureWHILE::bloc = bloc;
}

ostream &operator<<(ostream &os, const StructureWHILE &aWhile) {
    os << static_cast<const Structure &>(aWhile) << " bloc: " << aWhile.bloc;
    return os;
}

StructureWHILE::~StructureWHILE() {

}
