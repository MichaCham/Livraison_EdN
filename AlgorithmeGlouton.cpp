//
// Created by CHAMPALET on 07/03/2023.
//

#include "Route.h"
#include <vector>       // std::vector

void displaySolution(std::vector<int> &v)
{
    for(int i; i<v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << "\n" << std::endl;
}


void glouton(Route maRoute){
    std::vector<int> maSolution;
    std::vector<Town> maListe;
    maListe.erase(maListe.begin()+2);
    maSolution.erase()
    maSolution.push_back(maRoute.getCurrentTown().getTownNumber());
    maRoute.getListTown().erase(maListe.begin()+2);


    while (!maRoute.getListTown().empty()){
        Town maVille = maRoute.getCurrentTown();
        int pos = 0;
        for(int i = 0; i < maRoute.getListTown().size(); i++ ){
            if(maVille.TownDist(maRoute.getListTown()[i]))
                pos = i;
        }

    }

}

