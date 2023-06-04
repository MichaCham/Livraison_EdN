//
// Created by david on 14/02/2023.
//

#include "Route.h"
#include "Town.h"
#include <utility>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>


Route::Route(std::vector<Town> TownList){
    ListTown = std::move(TownList);
    CurrentTown = Town("",0,0,0);
    FirstTown = Town("",0,0,0);
}

Route::Route(){
    CurrentTown = Town("",0,0,0);
    FirstTown = Town("",0,0,0);
}

float Route::ConvertToRadiant(float deg){
    return (CurrentTown.getPi() * deg) / 180;
}

void Route::ReadFile (const std::string& EntryFile){
    std::ifstream file(EntryFile);
    int townNumber;
    file >> townNumber;
    std::cout << townNumber << std::endl;
    for (int i = 0; i < townNumber; i++){
        std::string name;
        float latitude;
        float longitude;
        file >> name >> latitude >> longitude;
        std::cout << name << " " << latitude << " " << longitude << " " << i << std::endl;
        ListTown.emplace_back(name, ConvertToRadiant(latitude), ConvertToRadiant(longitude),i);
    }
}

const std::vector<Town> &Route::getListTown() {
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

