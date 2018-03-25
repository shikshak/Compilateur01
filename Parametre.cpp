//
// Created by heyhey on 20/03/2018.
//

#include "Parametre.h"

Parametre::Parametre() {}

Parametre::~Parametre() {

}

const vector<Expression *> &Parametre::getExpressions() const {
    return expressions;
}

void Parametre::setExpressions(const vector<Expression *> &expressions) {
    Parametre::expressions = expressions;
}

void Parametre::addExpression(Expression *expression) {
    expressions.push_back(expression);
}

ostream &operator<<(ostream &os, const Parametre &parametre) {
    os << "expressions: ";
    for (auto i: parametre.getExpressions())
        os << i << ' ';
    os << std::endl;
    return os;
}

Parametre::Parametre(const vector<Expression *> &expressions) : expressions(expressions) {}
