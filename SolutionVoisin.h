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
#include "InterfaceVoisinage.h"

class SolutionVoisin : public InterfaceVoisinage {
protected:
public:
    //Uses Voisin on a solution to return a new Solution
    std::vector<Town> echange(Solution s, int x, int y);

    //Uses Voisin to determine a certain number of time the best Solution
    std::vector<Town> echange_par_index(Solution solution, int index);

    //Override, Uses Voisin to get best Solution
    std::vector<Town> getBetterSolution(Solution s, float x) override;
};
#endif //PROJETPROGRA_SOLUTIONVOISINE_H