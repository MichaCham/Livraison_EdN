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
    //Constructor
    Town(std::string name, float longitude, float latitude, float townNumber);

    //Constructor
    Town();

    //Return name
    const std::string &getName() const;

    //Sets Name
    void setName(const std::string &name);

    //Return Longitude
    float getLongitude() const;

    //Sets Longitude
    void setLongitude(float longitude);

    //Return Latitude
    float getLatitude() const;

    //Sets Latitude
    void setLatitude(float latitude);

    //Return ClosestTownNumber
    float getClosestTownNumber() const;

    //Sets ClosestTownNumber
    void setClosestTownNumber(float closestTownNumber);

    //Sets ClosestTownDistance
    void setClosesTownDistance(float closesTownDistance);

    //Returns TownNumber
    float getTownNumber() const;

    //Sets TownNumber
    void setTownNumber(float townNumber);

    //Display
    void toString() const;

    //Returns Pi
    float getPi() const;

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
