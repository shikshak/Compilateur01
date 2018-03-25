//
// Created by heyhey on 20/03/2018.
//

#include "Return.h"

Expression *Return::getExpression() const {
    return expression;
}

void Return::setExpression(Expression *expression) {
    Return::expression = expression;
}

ostream &operator<<(ostream &os, const Return &aReturn) {
    os << static_cast<const Instruction &>(aReturn) << " expression: " << aReturn.expression;
    os << endl;
    return os;
}

Return::Return(Expression *expression) : expression(expression) {}
