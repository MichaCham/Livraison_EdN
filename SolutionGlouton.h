//
// Created by david on 04/06/2023.
//

#ifndef PROJETPROGRA_SOLUTIONGLOUTON_H
#define PROJETPROGRA_SOLUTIONGLOUTON_H

#include "Solution.h"
#include "Route.h"

class SolutionGlouton : public Solution {
public:
    //Constructor
    SolutionGlouton(Route Ro);

    //Overrided version, to get best solutuion using Glouton
    void getSolution() override;
protected:
};


#endif //PROJETPROGRA_SOLUTIONGLOUTON_H
