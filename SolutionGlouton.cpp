//
// Created by david on 04/06/2023.
//
#include "SolutionGlouton.h"

SolutionGlouton::SolutionGlouton(Route Ro) : Solution(Ro) {

}

void SolutionGlouton::getSolution() {
    std::vector<int> solution;
    bool tmp;
    int cpt;
    solution.push_back(route.getFirstTown().getTownNumber());
    route.setCurrentTown(route.getFirstTown());
    std::vector<Town> tmpLT = route.getListTown();
    tmpLT.erase (tmpLT.begin()+route.getFirstTown().getTownNumber());
    int size = tmpLT.size();
    for (int i = 0; i < size; i++){
        cpt = 200;
        setCloseTownNumber(0);
        setCloseTownDistance(1000000000);
        for(int y = 0; y < tmpLT.size(); y++) {
            if(route.getCurrentTown().getName() != tmpLT[y].getName()){
                tmp = TownDist(route.getCurrentTown(),tmpLT[y]);
                if(tmp){
                    cpt = y;
                }
            }
        }
        solution.push_back(tmpLT[cpt].getTownNumber());
        route.setCurrentTown(tmpLT[cpt]);
        tmpLT.erase (tmpLT.begin()+cpt);
    }
    setSoluce(solution);
}