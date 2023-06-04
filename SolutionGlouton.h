//
// Created by david on 04/06/2023.
//

#ifndef PROJETPROGRA_SOLUTIONGLOUTON_H
#define PROJETPROGRA_SOLUTIONGLOUTON_H

#include "Solution.h"
#include "Route.h"

class SolutionGlouton : public Solution {
public:
    SolutionGlouton(Route Ro);
    void getSolution() override;
protected:
};


#endif //PROJETPROGRA_SOLUTIONGLOUTON_H
