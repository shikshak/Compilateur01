//
// Created by heyhey on 20/03/2018.
//

#include "ExpressionIncrementale.h"


ExpressionIncrementale::ExpressionIncrementale() {

}

ExpressionIncrementale::~ExpressionIncrementale() {

}

Variable *ExpressionIncrementale::getVariable() const {
    return variable;
}

void ExpressionIncrementale::setVariable(Variable *variable) {
    ExpressionIncrementale::variable = variable;
}

ExpressionIncrementale::OperateurIncrement ExpressionIncrementale::getOperateurINcrement() const {
    return operateurIncrement;
}

void ExpressionIncrementale::setOperateurINcrement(ExpressionIncrementale::OperateurIncrement operateurINcrement) {
    ExpressionIncrementale::operateurIncrement = operateurINcrement;
}

ostream &operator<<(ostream &os, const ExpressionIncrementale &incrementale) {
    os << static_cast<const Expression &>(incrementale) << " variable: " << incrementale.variable
       << " operateurIncrement: " << incrementale.operateurIncrement;
    os << endl;
    return os;
}

ExpressionIncrementale::ExpressionIncrementale(Variable *variable,
                                               ExpressionIncrementale::OperateurIncrement operateurIncrement)
        : variable(variable), operateurIncrement(operateurIncrement) {}
