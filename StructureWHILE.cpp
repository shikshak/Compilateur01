//
// Created by heyhey on 20/03/2018.
//

#include "StructureWHILE.h"

StructureWHILE::StructureWHILE() {}

StructureWHILE::StructureWHILE(Condition *condition, Bloc *bloc) : Structure(condition, bloc) {}

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

void StructureWHILE::setBloc(Instruction *instruction) {
    Bloc* bloc_ = new Bloc;
    bloc_->addInstructions(instruction);
    setBloc(bloc_);
}

StructureWHILE::~StructureWHILE() {

}
