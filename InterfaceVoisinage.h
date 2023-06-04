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
    //Returns Soluce
    const std::vector<Town> &getSoluce() const;

    //Sets Soluce
    void setSoluce(const std::vector<Town> &soluce);

    //Gives out the new Solution According to Calculation Type (Voisin, Two_OPT)
    virtual std::vector<Town> getBetterSolution(Solution s, float x);

    //Calculate Dist between Two Towns
    float getTownDist(Town one, Town two);

    //Return Global Dist
    float getAllDist();

public:
    std::vector<Town> Soluce;
    float pi = 3.141592;
    float RadiusEarth = 6378.137;
protected:
};


#endif //PROJETPROGRA_INTERFACEVOISINAGE_H
