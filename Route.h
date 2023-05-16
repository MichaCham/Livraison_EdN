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

    void ReadFile (const std::string& EntryFile);

    const std::vector<Town> &getListTown() ;

    void setListTown(const std::vector<Town> &listTown);

    const Town &getCurrentTown() const;

    void setCurrentTown(const Town &currentTown);

    const Town &getFirstTown() const;

    void setFirstTown(const Town &firstTown);

    void addToSolution(Town t);

    const std::vector<int> getSolution() const;

    std::vector<int> getRandomSolution();

    std::vector<int> getGloutonSolution();

protected:
    std::vector<Town> ListTown;
    Town CurrentTown;
    Town FirstTown;
    std::vector<int> Solution;
public:
    void setSolution(const std::vector<int> &solution);
};


#endif //PROJETPROGRA_ROUTE_H
