//
// Created by david on 04/06/2023.
//

#ifndef PROJETPROGRA_MEILLEURESOLUTION_H
#define PROJETPROGRA_MEILLEURESOLUTION_H

#include <functional>
#include "Solution.h"
#include "InterfaceVoisinage.h"

class MeilleureSolution {
public:
    Solution meilleure_ameliorante(Solution s, InterfaceVoisinage *v);
    Solution algorithme_descente(Solution s, InterfaceVoisinage *v);
protected:
};

#endif //PROJETPROGRA_MEILLEURESOLUTION_H
