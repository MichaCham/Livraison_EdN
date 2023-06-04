//
// Created by CHAMPALET on 16/05/2023.
//

#ifndef PROJETPROGRA_SOLUTIONVOISINE_H
#define PROJETPROGRA_SOLUTIONVOISINE_H

#include <vector>
#include <string>
#include <iostream>
#include "Route.h"
#include "Solution.h"

class SolutionVoisin : public Solution{
protected:
public:

    std::vector<Town> echange(Solution s, int x, int y);
    std::vector<Town> echange_par_index(Solution solution, int index);
    std::vector<Town> twoOpt(Solution s, int x, int y);
    std::vector<Town> two_opt_par_index(Solution solution, int index);

};
#endif //PROJETPROGRA_SOLUTIONVOISINE_H