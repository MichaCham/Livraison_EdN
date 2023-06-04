//
// Created by CHAMPALET on 04/06/2023.
//

#ifndef PROJETPROGRA_SOLUTIONTWOOPT_H
#define PROJETPROGRA_SOLUTIONTWOOPT_H

#include "InterfaceVoisinage.h"

class SolutionTwoOpt : public InterfaceVoisinage {
    std::vector<Town> twoOpt(Solution s, int x, int y);
    std::vector<Town> two_opt_par_index(Solution solution, int index);
    std::vector<Town> getBetterSolution(Solution s, float x) override;
};
#endif //PROJETPROGRA_SOLUTIONTWOOPT_H
