//
// Created by david on 04/06/2023.
//

#include "Solution.h"
#include "Route.h"
#include <cmath>

Solution::Solution(Route Ro) {
    route = Ro;
}

Solution::Solution(){

}

const std::vector<Town> &Solution::getSoluce() const {
    return soluce;
}

void Solution::getSolution() {

}

float Solution::getDistanceTown(Town one, Town two) {
    return RadiusEarth*acos((sin(one.getLatitude())*sin(two.getLatitude()))+(cos(one.getLatitude())*cos(two.getLatitude())*cos(two.getLongitude() - one.getLongitude())));
}

bool Solution::TownDist(Town one, Town two) {
    float distance = getDistanceTown(one,two);
    if(distance < getCloseTownDistance()){
        setCloseTownDistance(distance);
        setCloseTownNumber(two.getTownNumber());
        return true;
    }else{
        return false;
    }
}

void Solution::setSoluce(const std::vector<Town> &soluce) {
    Solution::soluce = soluce;
}

void Solution::setCloseTownNumber(int closeTownNumber) {
    CloseTownNumber = closeTownNumber;
}

float Solution::getCloseTownDistance() const {
    return CloseTownDistance;
}

void Solution::setCloseTownDistance(float closeTownDistance) {
    CloseTownDistance = closeTownDistance;
}

float Solution::getAllDist() {
    float tmp = 0;
    for(int i = 0; i < getSoluce().size()-1; i++){
        tmp += getDistanceTown(getSoluce().at(i),getSoluce().at(i+1));
    }
    return tmp;
}