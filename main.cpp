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
    route.ReadFile("..\\france_10.tsp");

    route.setFirstTown(route.getListTown()[1]);
    route.setSolution(route.getRandomSolution());
    for (int i = 0; i < (int)route.getSolution().size(); i++)
        std::cout<< route.getSolution().at(i) <<std::endl;

    return 0;
}
