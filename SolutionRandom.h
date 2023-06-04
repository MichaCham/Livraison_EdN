//
// Created by david on 04/06/2023.
//

#ifndef PROJETPROGRA_SOLUTIONRANDOM_H
#define PROJETPROGRA_SOLUTIONRANDOM_H

#include "Solution.h"
#include "Route.h"

class SolutionRandom : public Solution {
public:
    SolutionRandom(Route Ro);
    void getSolution() override;
protected:
};

#endif //PROJETPROGRA_SOLUTIONRANDOM_H
