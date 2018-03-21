//
// Created by heyhey on 20/03/2018.
//

#include "ExpressionIncrementale.h"


ExpressionIncrementale::ExpressionIncrementale() {

}

ExpressionIncrementale::ExpressionIncrementale(Variable *variable_,
                                               ExpressionIncrementale::OperateurIncrement operateurIncrement_,
                                               string valeur_) : Expression (valeur_){
    variable = variable_;
    operateurIncrement = operateurIncrement_;
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
