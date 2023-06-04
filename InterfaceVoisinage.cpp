//
// Created by david on 04/06/2023.
//
#include "InterfaceVoisinage.h"
#include <cmath>
const std::vector<Town> &InterfaceVoisinage::getSoluce() const {
    return Soluce;
}

void InterfaceVoisinage::setSoluce(const std::vector<Town> &soluce) {
    Soluce = soluce;
}

std::vector<Town> InterfaceVoisinage::getBetterSolution(Solution s, float x) {
    return Soluce;
}

float InterfaceVoisinage::getTownDist(Town one, Town two) {
    return RadiusEarth*acos((sin(one.getLatitude())*sin(two.getLatitude()))+(cos(one.getLatitude())*cos(two.getLatitude())*cos(two.getLongitude() - one.getLongitude())));
}

float InterfaceVoisinage::getAllDist() {
    float tmp2 = 0;
    for(int i = 0; i < getSoluce().size()-1; i++){
        tmp2 += getTownDist(getSoluce().at(i),getSoluce().at(i+1));
    }
    return tmp2;
}