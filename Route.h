//
// Created by david on 14/02/2023.
//

#ifndef PROJETPROGRA_ROUTE_H
#define PROJETPROGRA_ROUTE_H

#include "Town.h"
#include <vector>
#include <string>
#include <iostream>


class Route {
public:
    //Constructor
    Route(std::vector<Town> TownList);

    //Constructor
    Route();

    //Convert Degree to Radiant
    float ConvertToRadiant(float deg);

    //Reads file and fills townList
    void ReadFile (const std::string& EntryFile);

    //Returns TownList
    const std::vector<Town> &getListTown() ;

    //Sets List Town
    void setListTown(const std::vector<Town> &listTown);

    //Returns Current Town
    const Town &getCurrentTown() const;

    //Sets Current Town
    void setCurrentTown(const Town &currentTown);

    //Returns First Town
    const Town &getFirstTown() const;

    //Sets First Town
    void setFirstTown(const Town &firstTown);

protected:
    std::vector<Town> ListTown;
    Town CurrentTown;
    Town FirstTown;
    std::vector<int> Solution;
public:
};


#endif //PROJETPROGRA_ROUTE_H
