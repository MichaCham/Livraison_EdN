//
// Created by CHAMPALET on 16/05/2023.
//
#include <valarray>
#include "SolutionVoisin.h"

std::vector<Town> SolutionVoisin::echange(Solution solution, int x, int y) {
    std::vector<Town> tmpTL = solution.getSoluce();
    std::swap(tmpTL[x], tmpTL[y]);
    return tmpTL;
}

std::vector<Town> SolutionVoisin::echange_par_index(Solution solution, int index){
    float n = (1 + sqrt(1 + 8 * index)) / 2;
    float i = index - (n * (n - 1)) / 2;
    float j = solution.getSoluce().size() - n + i;
    return SolutionVoisin::echange (solution, i, j);
}

std::vector<Town> SolutionVoisin::twoOpt(Solution solution, int x, int y) {
    std::vector<Town> tmpTL = solution.getSoluce();
    while(x<y){
        std::swap(tmpTL[x], tmpTL[y]);
        x++;
        y--;
    }
    return tmpTL;
}

std::vector<Town> SolutionVoisin::two_opt_par_index(Solution solution, int index) {
    float n = (1 + sqrt(1 + 8 * index)) / 2;
    float i = index - (n * (n - 1)) / 2;
    float j = solution.getSoluce().size() - n + i;
    return SolutionVoisin::twoOpt (solution, i, j);
}