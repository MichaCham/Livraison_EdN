//
// Created by CHAMPALET on 10/03/2023.
//

#include <iostream>
#include "Glouton.h"

Glouton::Glouton(int nbVille) {
}
void Glouton::gloutonAlgorithme(Route maRoute) {
    std::vector<int> solution;
    std::vector<Town> maListe =  maRoute.getListTown();
    solution.push_back(maRoute.getFirstTown().getTownNumber());
    maListe.erase(maListe.begin()+maRoute.getFirstTown().getTownNumber());
    while (maListe.size() > 0){
        //TODO: faire une fonction dans ROute pour avoir la ville la plus proche
    }

    toString();
}

void Glouton::toString() const {
}