//
// Created by david on 14/02/2023.
//

#include "Route.h"
#include "Town.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>


Route::Route(std::vector<Town> TownList){
    setListTown(TownList);
    CurrentTown = ListTown[0];
    FirstTown = ListTown[1];
}

std::vector<Town> ReadFile (std::string EntryFile){
    std::ifstream file (EntryFile);
    std::string text;
    int line = 0;
    while(getline (file, text)){
        if(line != 0) {
            std::cout << text;
        }
    }
}

const std::vector<Town> &Route::getListTown() const {
    return ListTown;
}

void Route::setListTown(const std::vector<Town> &listTown) {
    ListTown = listTown;
}

const Town &Route::getCurrentTown() const {
    return CurrentTown;
}

void Route::setCurrentTown(const Town &currentTown) {
    CurrentTown = currentTown;
}

const Town &Route::getFirstTown() const {
    return FirstTown;
}

void Route::setFirstTown(const Town &firstTown) {
    FirstTown = firstTown;
}

const int *Route::getSolution() const {
    return Solution;
}
