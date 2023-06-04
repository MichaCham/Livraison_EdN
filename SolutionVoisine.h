//
// Created by CHAMPALET on 16/05/2023.
//

#ifndef PROJETPROGRA_SOLUTIONVOISINE_H
#define PROJETPROGRA_SOLUTIONVOISINE_H
#include <vector>
#include <string>
#include <iostream>
#include "Route.h"

class SolutionVoisine {
protected:
    Route maRoute;
public:
    SolutionVoisine(Route _maRoute);

    const Route &getMaRoute() const;

    void setMaRoute(const Route &maRoute);

    std::vector<Town> echange(std::vector<Town> listeVille, int x, int y);


};


#endif //PROJETPROGRA_SOLUTIONVOISINE_H
