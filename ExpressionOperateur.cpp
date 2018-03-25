//
// Created by heyhey on 20/03/2018.
//

#include "ExpressionOperateur.h"

ExpressionOperateur::ExpressionOperateur() {}

ExpressionOperateur::~ExpressionOperateur() {

}

Expression *ExpressionOperateur::getLeftExpression() const {
    return leftExpression;
}

void ExpressionOperateur::setLeftExpression(Expression *leftExpression) {
    ExpressionOperateur::leftExpression = leftExpression;
}

void ExpressionOperateur::setOperateur(const Operateur &operateur) {
    ExpressionOperateur::operateur = operateur;
}

Expression *ExpressionOperateur::getRightExpression() const {
    return rightExpression;
}

void ExpressionOperateur::setRightExpression(Expression *rightExpression) {
    ExpressionOperateur::rightExpression = rightExpression;
}

const ExpressionOperateur::Operateur &ExpressionOperateur::getOperateur() const {
    return <#initializer#>;
}

ostream &operator<<(ostream &os, const ExpressionOperateur &operateur) {
    os << static_cast<const Expression &>(operateur) << " leftExpression: " << operateur.leftExpression
       << " operateur: " << operateur.operateur << " rightExpression: " << operateur.rightExpression;
    os << endl;
    return os;
}

ExpressionOperateur::ExpressionOperateur(Expression *leftExpression, ExpressionOperateur::Operateur operateur,
                                         Expression *rightExpression) : leftExpression(leftExpression),
                                                                        operateur(operateur),
                                                                        rightExpression(rightExpression) {}
