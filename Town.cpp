//
// Created by david on 14/02/2023.
//

#include "Town.h"
#include <vector>
#include <string>
#include <iostream>
#include <cmath>

Town::Town(std::string name2, float longitude2, float latitude2, float TownNumber){
    setName(name2);
    setLatitude(latitude2);
    setLongitude(longitude2);
    setTownNumber(TownNumber);
    setClosestTownNumber(0);
    setClosesTownDistance(1000000000000);
}

Town::Town(){
    setName("");
    setLatitude(0.0);
    setLongitude(0.0);
}

const std::string &Town::getName() const {
    return name;
}

void Town::setName(const std::string &name) {
    Town::name = name;
}

float Town::getLongitude() const {
    return longitude;
}

void Town::setLongitude(float longitude) {
    Town::longitude = longitude;
}

float Town::getLatitude() const {
    return latitude;
}

void Town::setLatitude(float latitude) {
    Town::latitude = latitude;
}

float Town::getClosestTownNumber() const {
    return ClosestTownNumber;
}

void Town::setClosestTownNumber(float closestTownNumber) {
    ClosestTownNumber = closestTownNumber;
}

void Town::setClosesTownDistance(float closesTownDistance) {
    ClosesTownDistance = closesTownDistance;
}

float Town::getTownNumber() const {
    return townNumber;
}

void Town::setTownNumber(float townNumber) {
    Town::townNumber = townNumber;
}

void Town::toString() const {
    std::cout << "name " << name << ", latitude " << latitude << ", longitude " << longitude << ", TownNumber " << townNumber << std::endl;
}

float Town::getPi() const {
    return pi;
}






