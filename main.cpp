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

 int main() {
    //std::cout << "Hello, World!" << std::endl;

    std::vector<Town> newList;
    Route route(newList);
    Route route2(newList);
    route.ReadFile("..\\france_10.tsp");
    route2.ReadFile("..\\france_10.tsp");

    route.setFirstTown(route.getListTown()[9]);
    route2.setFirstTown(route2.getListTown()[9]);
    SolutionRandom Sr(route) ;
    SolutionGlouton Sg(route2);
    Sr.getSolution();
    for (int i = 0; i < (int)Sr.getSoluce().size(); i++)
        std::cout<<Sr.getSoluce().at(i).getTownNumber() <<" ";

    std::cout<<std::endl<<"GLOUTON TIME : "<<std::endl;
    Sg.getSolution();
    for (int i = 0; i < (int)Sg.getSoluce().size(); i++)
        std::cout<<Sg.getSoluce().at(i).getTownNumber() <<" ";

    std::cout<<std::endl<<"Swap entre premier et dernier"<<std::endl;
    SolutionVoisin Sv;
    Sv.setSoluce(Sv.echange(Sg,0,9));
     for (int i = 0; i < (int)Sv.getSoluce().size(); i++)
         std::cout<<Sv.getSoluce().at(i).getTownNumber() <<" ";
    return 0;
}
