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

    std::vector<Town> ReadFile (std::string EntryFile);

    void WriteFile (std::string TownList);

    const std::vector<Town> &getListTown() const;

    void setListTown(const std::vector<Town> &listTown);

    const Town &getCurrentTown() const;

    void setCurrentTown(const Town &currentTown);

    const Town &getFirstTown() const;

    void setFirstTown(const Town &firstTown);

protected:
    std::vector<Town> ListTown;
    Town CurrentTown;
    Town FirstTown;
};


#endif //PROJETPROGRA_ROUTE_H
