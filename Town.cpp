//
// Created by david on 14/02/2023.
//

#include "Town.h"
#include <vector>
#include <string>
#include <iostream>
#include <cmath>

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

float Town::getClosesTownDistance() const {
    return ClosesTownDistance;
}

void Town::setClosesTownDistance(float closesTownDistance) {
    ClosesTownDistance = closesTownDistance;
}

Town Town::TownDist(Town two){
    float distance = RadiusEarth*acos((sin(latitude)*sin(two.latitude))+(cos(latitude)*cos(two.latitude)*cos(two.longitude - longitude)));
    if(distance < ClosesTownDistance){
        setClosesTownDistance(distance);
        setClosestTownNumber(two.townNumber);
    }
}




