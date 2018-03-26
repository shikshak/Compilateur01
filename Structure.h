//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_STRUCTURE_H
#define PLDCOMP_STRUCTURE_H


#include <ostream>
#include "Condition.h"
#include "Bloc.h"

class Structure : public Instruction {
public:
    Structure();

    Structure(Condition *condition, Bloc *bloc);

    virtual ~Structure();

private:
    Condition* condition;
    Bloc* bloc;
public:
    Condition *getCondition() const;
    void setCondition(Condition *condition);
    Bloc *getBloc() const;
    void setBloc(Bloc *bloc);

    friend ostream &operator<<(ostream &os, const Structure &structure);
};


#endif //PLDCOMP_STRUCTURE_H
