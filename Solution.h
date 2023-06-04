//
// Created by david on 04/06/2023.
//

#ifndef PROJETPROGRA_SOLUTION_H
#define PROJETPROGRA_SOLUTION_H

#include "Route.h"
#include "Town.h"

class Solution {
public:
    Solution(Route R);

    Solution();

    const Route &getR() const;

    const std::vector<Town> &getSoluce() const;

    float getPi() const;

    void setSoluce(const std::vector<Town> &soluce);

    float getRadiusEarth() const;

    virtual void getSolution();

    bool TownDist(Town one, Town two);

    int getCloseTownNumber() const;

    void setCloseTownNumber(int closeTownNumber);

    float getCloseTownDistance() const;

    void setCloseTownDistance(float closeTownDistance);

protected:
    std::vector<Town> soluce;
    Route route;
    float pi = 3.141592;
    float RadiusEarth = 6378.137;
    int CloseTownNumber;
    float CloseTownDistance;
};

#endif //PROJETPROGRA_SOLUTION_H