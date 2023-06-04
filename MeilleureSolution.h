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
    //Return the best upgraded Solution
    Solution meilleure_ameliorante(Solution s, InterfaceVoisinage *v);
    //Returns the best upgraded Solution using Local Search
    Solution algorithme_descente(Solution s, InterfaceVoisinage *v);
    //Returns the first upgraded solution
    Solution premiere_ameliorante(Solution s, InterfaceVoisinage *v);
    //Returns the first upgraded solution in random order
    Solution random_premiere_ameliorante(Solution s, InterfaceVoisinage *v);
    //Returns the best soolution using a list of Voisinage
    Solution recherche_locale_voisinage_variable(Solution s, std::vector<InterfaceVoisinage> *v);
protected:
};

#endif //PROJETPROGRA_MEILLEURESOLUTION_H
