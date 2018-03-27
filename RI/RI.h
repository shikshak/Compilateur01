//
// Created by Imene Hakem on 3/27/2018.
//

#ifndef PLDCOMP_RI_H
#define PLDCOMP_RI_H


#include "../Programme.h"
#include "CFG.h"

class RI {

public:
    RI(Programme *prog);
    virtual ~RI();
    void addCFG(CFG *cfg);


};

#endif //PLDCOMP_RI_H
