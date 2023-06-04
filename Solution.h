//
// Created by david on 04/06/2023.
//

#ifndef PROJETPROGRA_SOLUTION_H
#define PROJETPROGRA_SOLUTION_H

#include "Route.h"
#include "Town.h"

class Solution {
public:
    //Constructor
    Solution(Route R);

    //Constructor
    Solution();

    //Returns Solution
    const std::vector<Town> &getSoluce() const;

    //Sets Solution
    void setSoluce(const std::vector<Town> &soluce);

    //Sets the Solution and gets the best Solution
    virtual void getSolution();

    //Returns Distance between Two Town
    float getDistanceTown(Town one, Town two);

    //Returns Distance between two Town, if it's smaller than the max one, returns true;
    bool TownDist(Town one, Town two);

    //Sets The closestTownNumber
    void setCloseTownNumber(int closeTownNumber);

    //Gets The ClosesTownDistance
    float getCloseTownDistance() const;

    //Sets the ClosestTownDistance
    void setCloseTownDistance(float closeTownDistance);

    //Returns the Global Dist
    float getAllDist();

protected:
    std::vector<Town> soluce;
    Route route;
    float pi = 3.141592;
    float RadiusEarth = 6378.137;
    int CloseTownNumber;
    float CloseTownDistance;
};

#endif //PROJETPROGRA_SOLUTION_H