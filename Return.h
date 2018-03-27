//
// Created by heyhey on 20/03/2018.
//

#ifndef PLDCOMP_RETURN_H
#define PLDCOMP_RETURN_H


#include <ostream>
#include "Instruction.h"
#include "Expression.h"

class Return : public Instruction{

public:
    Return();

    virtual ~Return();

private:
    Expression* expression;
public:
    Expression *getExpression() const;

    void setExpression(Expression *expression);

    friend ostream &operator<<(ostream &os, const Return &aReturn);
};


#endif //PLDCOMP_RETURN_H
