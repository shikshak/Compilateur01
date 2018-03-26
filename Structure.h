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

    explicit Structure(Condition *condition); //c'est lui qui m'a dit de mettre explicit j'ai pas cherche a comprendre, un truc avec la convertion automatique aski^p

    virtual ~Structure();

private:
    Condition* condition;

public:
    Condition *getCondition() const;

    void setCondition(Condition *condition);

    friend ostream &operator<<(ostream &os, const Structure &structure);
};


#endif //PLDCOMP_STRUCTURE_H
