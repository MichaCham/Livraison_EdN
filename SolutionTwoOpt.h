//
// Created by CHAMPALET on 04/06/2023.
//

#ifndef PROJETPROGRA_SOLUTIONTWOOPT_H
#define PROJETPROGRA_SOLUTIONTWOOPT_H

#include "InterfaceVoisinage.h"

class SolutionTwoOpt : public InterfaceVoisinage {
    //Uses TwoOpt on a solution to return a new Solution
    std::vector<Town> twoOpt(Solution s, int x, int y);

    //Uses TwoOpt to determine a certain number of time the best Solution
    std::vector<Town> two_opt_par_index(Solution solution, int index);

    //Override, Uses TwoOpt to get best Solution
    std::vector<Town> getBetterSolution(Solution s, float x) override;
};
#endif //PROJETPROGRA_SOLUTIONTWOOPT_H
