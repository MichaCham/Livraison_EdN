//
// Created by CHAMPALET on 16/05/2023.
//
#include "SolutionVoisin.h"
/*
SolutionVoisin::SolutionVoisin(Solution _maSolution) {
    this->maSolution = _maSolution;
}
*/
std::vector<Town> SolutionVoisin::echange(Solution solution, int x, int y) {
    std::vector<Town> tmpTL = solution.getSoluce();
    /*for (auto ville: solution.getSoluce())
        ville.toString();*/

    std::swap(tmpTL[x], tmpTL[y]);

    /*for (int i = 0; i < (int)tmpTL.size(); i++)
        tmpTL.at(i).toString();*/
    return tmpTL;
}

/*const Route &SolutionVoisin::getMaRoute() const {
    return maRoute;
}

void SolutionVoisin::setMaRoute(const Route &maRoute) {
    SolutionVoisin::maRoute = maRoute;
}*/
