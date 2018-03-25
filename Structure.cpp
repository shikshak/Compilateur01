//
// Created by heyhey on 20/03/2018.
//

#include "Structure.h"

Condition *Structure::getCondition() const {
    return condition;
}

void Structure::setCondition(Condition *condition) {
    Structure::condition = condition;
}

Bloc *Structure::getBloc() const {
    return bloc;
}

void Structure::setBloc(Bloc *bloc) {
    Structure::bloc = bloc;
}

ostream &operator<<(ostream &os, const Structure &structure) {
    os << "condition: " << structure.condition << " bloc: " << structure.bloc;
    os << endl;
    return os;
}

Structure::Structure(Condition *condition, Bloc *bloc) : condition(condition), bloc(bloc) {}
