//
// Created by CHAMPALET on 10/03/2023.
//

#include <iostream>
#include "Glouton.h"

Glouton::Glouton(int nbVille) {
    boolVilles.assign(nbVille, false );
    //toString();
}
void Glouton::gloutonAlgorithme(Route maRoute) {
    std::vector<float> maSolution;
    maSolution.push_back(maRoute.getCurrentTown().getTownNumber());
    boolVilles[maRoute.getCurrentTown().getTownNumber()] = true;
    //TODO : while (std::find(boolVilles.begin(), boolVilles.end(),))
    toString();
}

const std::vector<bool> &Glouton::getBoolVilles() const {
    return boolVilles;
}

void Glouton::setBoolVilles(const std::vector<bool> &boolVilles) {
    Glouton::boolVilles = boolVilles;
}

void Glouton::toString() const {
    for(int i = 0; i<boolVilles.size(); i++){
        std::cout << "bool :  " << boolVilles[i] << std::endl;
    }

}