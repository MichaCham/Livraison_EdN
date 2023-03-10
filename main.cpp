#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include "Town.h"
#include "Route.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::vector<Town> newList;
    Route route(newList);
    route.ReadFile("C:\\Users\\CHAMPALET\\CLionProjects\\ProjetProgra\\france_10.tsp");
    for (int i = 0; i < route.getListTown().size(); i++){
        route.getListTown()[i].toString();
    }


    return 0;
}
