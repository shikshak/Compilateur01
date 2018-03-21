//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_STRUCTUREWHILE_H
#define PLDCOMP_STRUCTUREWHILE_H


#include "Structure.h"
#include "Condition.h"
#include "Bloc.h"

class StructureWHILE : public Structure {
public:
    StructureWHILE();
    StructureWHILE(Condition* condition, Bloc* bloc);
    virtual ~StructureWHILE();

private:
    Condition* condition;
public:
    Condition *getCondition() const;

    void setCondition(Condition *condition);

private:
    Bloc* bloc;
};


#endif //PLDCOMP_STRUCTUREWHILE_H
