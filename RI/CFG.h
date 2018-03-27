//
// Created by Imene Hakem on 3/27/2018.
//

#ifndef PLDCOMP_CFG_H
#define PLDCOMP_CFG_H


#include "CFG.h"
#include "RI.h"
#include "../Fonction.h"
class RI;
class CFG {

public:
    CFG(Fonction *fonction, RI *ri);

    ~CFG();

};
#endif //PLDCOMP_CFG_H
