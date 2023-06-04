//
// Created by david on 04/06/2023.
//

#ifndef PROJETPROGRA_SOLUTIONREINSERTION_H
#define PROJETPROGRA_SOLUTIONREINSERTION_H

#include <vector>
#include <string>
#include <iostream>
#include "Solution.h"
class SolutionReinsertion : public Solution{
public:
    std::vector<Town> reinsertion(Solution s, int x, int y);
    std::vector<Town> reinsertionParIndex(Solution solution, int x);
};
#endif //PROJETPROGRA_SOLUTIONREINSERTION_H
