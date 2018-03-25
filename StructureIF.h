//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_STRUCTUREIF_H
#define PLDCOMP_STRUCTUREIF_H


#include <ostream>
#include "Condition.h"
#include "Bloc.h"
#include "Structure.h"

class StructureIF : public Structure {
public:
    StructureIF();

    StructureIF(Condition *condition, Bloc *bloc);

    virtual ~StructureWHILE();

    friend ostream &operator<<(ostream &os, const StructureIF &anIf);
};


#endif //PLDCOMP_STRUCTUREIF_H
