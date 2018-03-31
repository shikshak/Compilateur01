//
// Created by Amina on 30/03/2018.
//

#include "BuidIR.h"
#include "IR.h"
#include "../Fonction.h"
#include "../Instruction.h"

BuildIR::BuildIR() {}

BuildIR::~BuildIR() {


}

void BuildIR::programToIR(Programme *prog) {

    vector<Fonction*> fonctions = prog->getFonctions();
    for(vector<Fonction*>::iterator i= fonctions.begin() ; i != fonctions.end() ; i++){
        CFG* cfg = new CFG(((Fonction*)*i));
        CFGs.push_back(cfg);
        current_cfg = cfg;
        BasicBlock* bb = new BasicBlock(current_cfg, current_cfg->new_BB_name());
        current_bb = bb;
        cfg->add_bb(bb);
        blocToIR(((Fonction*)*i)->getBloc());
    }

}
void BuildIR::blocToIR(Bloc* bloc){
    vector<Instruction*> instructions = bloc->getInstructions();
    for (auto inst : instructions ){
       /* if(typeid(inst *).name() == ""){

        }*/
    }
    }
