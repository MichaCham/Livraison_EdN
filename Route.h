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

    static const std::vector<Town> &getListTown() ;

    void setListTown(const std::vector<Town> &listTown);

    const Town &getCurrentTown() const;

    void setCurrentTown(const Town &currentTown);

    const Town &getFirstTown() const;

    void setFirstTown(const Town &firstTown);

    void addToSolution(Town t);

    const std::vector<int> getSolution() const;

    void getRandomSolution();

protected:
    static std::vector<Town> ListTown;
    Town CurrentTown;
    Town FirstTown;
    std::vector<int> Solution;
};


#endif //PROJETPROGRA_ROUTE_H
