//
// Created by heyhey on 20/03/2018.
//

#include "Condition.h"

Condition::Condition() {}

Condition::~Condition() {}

Condition::Condition(Expression* expression_, string valeur_) : Expression(valeur_) {
    expression = expression_;
}

Expression *Condition::getExpression() const {
    return expression;
}

void Condition::setExpression(Expression *expression) {
    Condition::expression = expression;
}

ostream &operator<<(ostream &os, const Condition &condition) {
    os << static_cast<const Expression &>(condition) << " expression: " << condition.expression;
    os << endl;
    return os;
}

Condition::Condition(Expression *expression) : expression(expression) {}
