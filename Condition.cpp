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
