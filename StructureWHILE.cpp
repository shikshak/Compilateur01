//
// Created by heyhey on 20/03/2018.
//

#include "StructureWHILE.h"

StructureWHILE::StructureWHILE() {}

StructureWHILE::~StructureWHILE() {}

StructureWHILE::StructureWHILE(Condition* condition_, Bloc* bloc_) {
    condition = condition_;
    bloc = bloc_;
}

Condition *StructureWHILE::getCondition() const {
    return condition;
}

void StructureWHILE::setCondition(Condition *condition) {
    StructureWHILE::condition = condition;
}
