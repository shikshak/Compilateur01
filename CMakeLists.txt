cmake_minimum_required(VERSION 3.9)
project(pldcomp)

set(CMAKE_CXX_STANDARD 11)

include_directories(gen)

add_executable(pldcomp main.cpp Programme.cpp Programme.h Fonction.cpp Fonction.h Declaration.cpp Declaration.h Parametre.cpp Parametre.h Return.cpp Return.h Break.cpp Break.h Instruction.cpp Instruction.h Structure.cpp Structure.h Condition.cpp Condition.h StructureIF.cpp StructureIF.h StructureWHILE.cpp StructureWHILE.h Expression.cpp Expression.h Constante.cpp Constante.h Variable.cpp Variable.h Tableau.cpp Tableau.h Simple.cpp Simple.h ExpressionOperateur.cpp ExpressionOperateur.h Affectation.cpp Affectation.h AppelFonction.cpp AppelFonction.h ExpressionIncrementale.cpp ExpressionIncrementale.h ExpressionUnaire.cpp ExpressionUnaire.h Bloc.cpp Bloc.h Constructor.h RI/IR.cpp RI/IR.h Type.h RI/BuidIR.cpp RI/BuidIR.h)