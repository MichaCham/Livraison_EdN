//
// Created by david on 14/02/2023.
//

#ifndef PROJETPROGRA_TOWN_H
#define PROJETPROGRA_TOWN_H
#include <vector>
#include <string>
#include <iostream>

class Town {
public:
    Town(std::string name, float longitude, float latitude, float townNumber);

    Town();

    const std::string &getName() const;

    void setName(const std::string &name);

    float getLongitude() const;

    void setLongitude(float longitude);

    float getLatitude() const;

    void setLatitude(float latitude);

    float getClosestTownNumber() const;

    void setClosestTownNumber(float closestTownNumber);

    float getClosesTownDistance() const;

    void setClosesTownDistance(float closesTownDistance);

    float getTownNumber() const;

    void setTownNumber(float townNumber);

    void toString() const;

    float getPi() const;

    float getRadiusEarth() const;

protected:
    std::string name;
    float longitude;
    float latitude;
    float townNumber;
    float ClosestTownNumber;
    float ClosesTownDistance;
    float pi = 3.141592;
    float RadiusEarth = 6378.137;
};


#endif //PROJETPROGRA_TOWN_H
