//
// Created by heyhey on 20/03/2018.
//

#include "StructureIF.h"

Bloc *StructureIF::getBloc() const {
    return bloc;
}

void StructureIF::setBloc(Bloc *bloc) {
    StructureIF::bloc = bloc;
}

Bloc *StructureIF::getBlocElse() const {
    return blocElse;
}

void StructureIF::setBlocElse(Bloc *blocElse) {
    StructureIF::blocElse = blocElse;
}

StructureIF::StructureIF(Condition *condition, Bloc *bloc, Bloc *blocElse) : Structure(condition), bloc(bloc),
                                                                             blocElse(blocElse) {}

ostream &operator<<(ostream &os, const StructureIF &anIf) {
    os << static_cast<const Structure &>(anIf) << " bloc: " << anIf.bloc << " blocElse: " << anIf.blocElse;
    return os;
}

void StructureIF::addIFetELSE(vector vecteur) {
    if(vecteur.size() == 1) {
        setBloc(vecteur[0]);
    }
    else if (vecteur.size() == 2) {
        setBloc(vecteur[0]);
        setBlocElse(vecteur[1]);
    }
}

void StructureIF::setBloc(Instruction *instruction) {
    Bloc* bloc_ = new Bloc();
    bloc_->addInstructions(instruction);
    setBloc(bloc_);
}

void StructureIF::setBlocElse(Instruction *instruction) {
    Bloc* bloc_ = new Bloc();
    bloc_->addInstructions(instruction);
    setBlocElse(bloc_);
}

StructureIF::StructureIF() {

}

StructureIF::~StructureIF() {

}
