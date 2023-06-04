//
// Created by david on 04/06/2023.
//

#ifndef PROJETPROGRA_SOLUTIONREINSERTION_H
#define PROJETPROGRA_SOLUTIONREINSERTION_H

#include <vector>
#include <string>
#include <iostream>
#include "Solution.h"
#include "InterfaceVoisinage.h"
class SolutionReinsertion : public InterfaceVoisinage {
public:
    //Uses Reinsertion on a solution to return a new Solution
    std::vector<Town> reinsertion(Solution s, int x, int y);

    //Uses Reinsertion to determine a certain number of time the best Solution
    std::vector<Town> reinsertionParIndex(Solution solution, int x);

    //Override, uses ReinsertionParIndex to get bestSolution
    std::vector<Town> getBetterSolution(Solution s, float x) override;
};
#endif //PROJETPROGRA_SOLUTIONREINSERTION_H
