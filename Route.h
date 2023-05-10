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
    Route(std::vector<Town> TownList);

    Route();

    float ConvertToRadiant(float deg);

    void ReadFile (std::string EntryFile);

    const std::vector<Town> &getListTown() const;


    void setListTown(const std::vector<Town> &listTown);

    const Town &getCurrentTown() const;

    void setCurrentTown(const Town &currentTown);

    const Town &getFirstTown() const;

    void setFirstTown(const Town &firstTown);

    const std::vector<float> getSolution() const;

protected:
    std::vector<Town> ListTown;
    float Pi = 3.141592;
    Town CurrentTown;
    Town FirstTown;
    std::vector<float> Solution;
};


#endif //PROJETPROGRA_ROUTE_H
