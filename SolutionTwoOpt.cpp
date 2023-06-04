//
// Created by CHAMPALET on 04/06/2023.
//
#include <cmath>
#include "SolutionTwoOpt.h"

std::vector<Town> SolutionTwoOpt::twoOpt(Solution solution, int x, int y) {
    std::vector<Town> tmpTL = solution.getSoluce();
    while (x < y) {
        std::swap(tmpTL[x], tmpTL[y]);
        x++;
        y--;
    }
    return tmpTL;
}

std::vector<Town> SolutionTwoOpt::two_opt_par_index(Solution solution, int index) {
    float n = (1 + sqrt(1 + 8 * index)) / 2;
    float i = index - (n * (n - 1)) / 2;
    float j = solution.getSoluce().size() - n + i;
    return twoOpt (solution, i, j);
}

std::vector<Town> SolutionTwoOpt::getBetterSolution(Solution s, float x) {
    return two_opt_par_index(s,x);
}
