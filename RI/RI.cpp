//
// Created by Imene Hakem on 3/27/2018.
//

#include "RI.h"
#include <map>
#include <list>


RI::RI(Programme *prog) {
    //vector<Declaration*> vDcl = prog->getDeclarations();

    vector <Fonction *> vFct = prog->getFonctions();
    vector<Fonction *>::iterator fct;

    for(fct = vFct.begin() ; fct != vFct.end() ; ++fct)
    {
        CFG *bf = new CFG(*fct,this);
        this->addCFG(bf);
    }
}


RI::~RI() {

}

//list<CFG*> cfgs;
void RI::addCFG(CFG *cfg) {
    list<CFG*> cfgs;
    cfgs.push_back(cfg);
}



