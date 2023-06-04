 #include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include "Town.h"
#include "Route.h"
#include "SolutionRandom.h"
#include "SolutionGlouton.h"
#include "SolutionVoisin.h"
#include "SolutionReinsertion.h"
#include "MeilleureSolution.h"
#include "SolutionTwoOpt.h"

 int main() {
     //std::cout << "Hello, World!" << std::endl;

     std::vector<Town> newList;
     Route route(newList);
     Route route2(newList);
     route.ReadFile("..\\france_50.tsp");
     route2.ReadFile("..\\france_50.tsp");

     route.setFirstTown(route.getListTown()[9]);
     route2.setFirstTown(route2.getListTown()[9]);
     SolutionRandom Sr(route);
     SolutionGlouton Sg(route2);
     Sr.getSolution();
     for (int i = 0; i < (int) Sr.getSoluce().size(); i++)
         std::cout << Sr.getSoluce().at(i).getTownNumber() << " ";

     std::cout << std::endl << "GLOUTON TIME : " << std::endl;
     Sg.getSolution();
     for (int i = 0; i < (int) Sg.getSoluce().size(); i++)
         std::cout << Sg.getSoluce().at(i).getTownNumber() << " ";
     std::cout<<std::endl<<"Distance obtenue glouton : "<<Sg.getAllDist()<<std::endl;

     /*std::cout << std::endl << "Swap entre premier et dernier" << std::endl;
     SolutionVoisin Sv;
     Sv.setSoluce(Sv.echange(Sg, 0, 9));
     for (int i = 0; i < (int) Sv.getSoluce().size(); i++)
         std::cout << Sv.getSoluce().at(i).getTownNumber() << " ";*/

     /*std::cout << std::endl << "Insertion du premier a la place du 3eme" << std::endl;
     SolutionReinsertion Sre;
     Sre.setSoluce(Sre.reinsertion(Sg, 0, 2));
     for (int i = 0; i < (int) Sre.getSoluce().size(); i++)
         std::cout << Sre.getSoluce().at(i).getTownNumber() << " ";*/

     Solution finalSolution;
     SolutionVoisin SolV;
     SolutionReinsertion SolR;
     SolutionTwoOpt SolT;
     MeilleureSolution MV;
     finalSolution = MV.meilleure_ameliorante(Sg, &SolV);
     for (int i = 0; i < (int) finalSolution.getSoluce().size(); i++)
         std::cout << finalSolution.getSoluce().at(i).getTownNumber() << " ";
     std::cout<<std::endl<<"Distance obtenue finale meilleure ameliorante : "<<finalSolution.getAllDist()<<std::endl;

     MeilleureSolution MV2;
     finalSolution = MV2.algorithme_descente(Sg, &SolT);
     for (int i = 0; i < (int) finalSolution.getSoluce().size(); i++)
         std::cout << finalSolution.getSoluce().at(i).getTownNumber() << " ";
     std::cout<<std::endl<<"Distance obtenue finale descente : "<<finalSolution.getAllDist()<<std::endl;

     finalSolution = MV2.premiere_ameliorante(Sg, &SolR);
     for (int i = 0; i < (int) finalSolution.getSoluce().size(); i++)
         std::cout << finalSolution.getSoluce().at(i).getTownNumber() << " ";
     std::cout<<std::endl<<"Distance obtenue finale premiere ameliorante : "<<finalSolution.getAllDist()<<std::endl;

     finalSolution = MV2.random_premiere_ameliorante(Sg, &SolR);
     for (int i = 0; i < (int) finalSolution.getSoluce().size(); i++)
         std::cout << finalSolution.getSoluce().at(i).getTownNumber() << " ";
     std::cout<<std::endl<<"Distance obtenue finale random premiere ameliorante : "<<finalSolution.getAllDist()<<std::endl;

     //Question 10, souci de passage de l'override avec le vecteur
     /*std::vector<InterfaceVoisinage> vectorVoisinage;
     vectorVoisinage.push_back(SolR);
     vectorVoisinage.push_back(SolV);
     finalSolution = MV2.recherche_locale_voisinage_variable(Sg, &vectorVoisinage);
     for (int i = 0; i < (int) finalSolution.getSoluce().size(); i++)
         std::cout << finalSolution.getSoluce().at(i).getTownNumber() << " ";
     std::cout<<std::endl<<"Distance obtenue finale Liste Voisinage : "<<finalSolution.getAllDist()<<std::endl;
     return 0;*/
 }
