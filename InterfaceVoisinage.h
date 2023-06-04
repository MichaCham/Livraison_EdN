//
// Created by david on 04/06/2023.
//

#ifndef PROJETPROGRA_INTERFACEVOISINAGE_H
#define PROJETPROGRA_INTERFACEVOISINAGE_H

#include <vector>
#include "Town.h"
#include "Solution.h"

class InterfaceVoisinage {
public:
    const std::vector<Town> &getSoluce() const;

    void setSoluce(const std::vector<Town> &soluce);

    virtual std::vector<Town> getBetterSolution(Solution s, float x);

    float getTownDist(Town one, Town two);

    float getAllDist();

public:
    std::vector<Town> Soluce;
    float pi = 3.141592;
    float RadiusEarth = 6378.137;
protected:
};


#endif //PROJETPROGRA_INTERFACEVOISINAGE_H
