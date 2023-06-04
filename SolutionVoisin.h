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
    /*SolutionVoisin(Solution _maSolution);

    const Route &getMaRoute() const;

    void setMaRoute(const Route &maRoute);*/

    std::vector<Town> echange(Solution s, int x, int y);


};
#endif //PROJETPROGRA_SOLUTIONVOISINE_H