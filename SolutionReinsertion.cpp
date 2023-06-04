//
// Created by david on 04/06/2023.
//
#include "SolutionReinsertion.h"

std::vector<Town> SolutionReinsertion::reinsertion(Solution solution, int x, int y) {
    std::vector<Town> tmpTL = solution.getSoluce();
    /*for (auto ville: solution.getSoluce())
        ville.toString();*/
    Town tmp = tmpTL[x];


    tmpTL.erase(tmpTL.begin()+x);
    tmpTL.insert(tmpTL.begin()+y,tmp);

    /*for (int i = 0; i < (int)tmpTL.size(); i++)
        tmpTL.at(i).toString();*/
    return tmpTL;
}

std::vector<Town> SolutionReinsertion::reinsertionParIndex(Solution solution, int x) {
    int i;
    int y;
    if (x < (solution.getSoluce().size() - 2)){
        i = 0;
        y = x + 1;
    }else{
        int i = (x - 1) / (solution.getSoluce().size() / 2);
        int y = (x - 1) % (solution.getSoluce().size() / 2);
        if (y >= i - 1){
            y = y + 2;
        }
    }
    return reinsertion(solution, i, y);
}