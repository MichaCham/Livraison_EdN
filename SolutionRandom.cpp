//
// Created by david on 04/06/2023.
//

#include "SolutionRandom.h"

SolutionRandom::SolutionRandom(Route Ro) : Solution(Ro) {

}

void SolutionRandom::getSolution() {
    std::vector<int> solution;
    solution.push_back(route.getFirstTown().getTownNumber());
    std::vector<Town> TempTL;
    TempTL = route.getListTown();
    TempTL.erase (TempTL.begin()+route.getFirstTown().getTownNumber());
    int size = TempTL.size();
    for (int i = 0; i < size; i++){
        std::srand (time(NULL));
        int rnumber = std::rand() % TempTL.size();
        solution.push_back(TempTL[rnumber].getTownNumber());
        TempTL.erase (TempTL.begin()+rnumber);
    }
    setSoluce(solution);
}