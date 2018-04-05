//
// Created by heyhey on 20/03/2018.
//

#include "Programme.h"
#include <map>

Programme::Programme() {
main = NULL;
}

Programme::~Programme() {

}

const std::vector<Declaration *> &Programme::getDeclarations() const {
            return declarations;
}

void Programme::setDeclarations(const std::vector<Declaration *> &declarations) {
    Programme::declarations = declarations;
}

const std::vector<Fonction *> &Programme::getFonctions() const {
    return fonctions;
}

void Programme::setFonctions(const std::vector<Fonction *> &fonctions) {
    Programme::fonctions = fonctions;
}

Fonction *Programme::getMain() const {
    return main;
}

void Programme::setMain(Fonction *main) {
    Programme::main = main;
}

void Programme::addDeclaration(Declaration *declaration) {
    declarations.push_back(declaration);
}

void Programme::addFonction(Fonction *fonction) {
    fonctions.push_back(fonction);
}

ostream &operator<<(ostream &os, const Programme &programme) {
    os << "declarations: ";
    for (auto i: programme.getDeclarations())
        os << *i << ' ';
    os << " fonctions: ";
    for (auto i: programme.getFonctions())
        os << *i << ' ';
if (programme.getMain() != NULL)
{
    os << " main: " << *programme.getMain();
} 
else {
	os << "main : NULL";
}
   os <<std::endl<< "fin de programme"<<std::endl;
   os.rdbuf(std::cout.rdbuf());
    return os;
}

Programme::Programme(const vector<Declaration *> &declarations, const vector<Fonction *> &fonctions, Fonction *main)
        : declarations(declarations), fonctions(fonctions), main(main) {}

/*void Programme::resoudrePorte() {
    std::map<std::string, vector<Variable *>> myMap;
    std::vector<std::string> pileFonction;

    std::vector<Fonction *> fonctions = getFonctions();

    //Pour chaque fonction

    for (auto i: fonctions){
        std::vector<std::string> pileVariable;
        pileFonction.push_back(i->getNom());

        //Ajouter les Paramètres

        Variable * par = i->getParametre()->getVariable();

            pileVariable.push_back(par->getNom());


        //Ajouter les variables

        std::vector<Declaration *> declarations = i->getDeclarations();
        for (auto dec : declarations ){
            pileVariable.insert(pileVariable.end(),dec->getVariables().begin(),dec->getVariables().end());
        }
        myMap.insert(std::pair<std::string,vector<Variable *>>(i->getNom(),pileVariable));
    }

}

bool Programme::verificationStatic(map<std::string, vector<Variable *>> myMap) {



}
*/
