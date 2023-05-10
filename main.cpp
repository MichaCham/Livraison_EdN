#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include "Town.h"
#include "Route.h"
#include "Glouton.h"

int main() {
    //std::cout << "Hello, World!" << std::endl;

    std::vector<Town> newList;
    Route route(newList);
    route.ReadFile("C:\\Users\\CHAMPALET\\CLionProjects\\Livraison_Edn\\france_10.tsp");

    route.setCurrentTown(route.getListTown()[9]);
    Glouton glouton(route.getListTown().size());
    glouton.gloutonAlgorithme(route);

    return 0;
}
