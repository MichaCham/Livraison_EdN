//
// Created by CHAMPALET on 10/03/2023.
//

#ifndef LIVRAISON_EDN_GLOUTON_H
#define LIVRAISON_EDN_GLOUTON_H


#include <vector>
#include <ostream>
#include "Route.h"

class Glouton {
protected:
    std::vector<bool> boolVilles;

public:
    Glouton(int nbVille);

    void gloutonAlgorithme(Route route);

    const std::vector<bool> &getBoolVilles() const;

    void setBoolVilles(const std::vector<bool> &boolVilles);

    void toString() const;
};


#endif //LIVRAISON_EDN_GLOUTON_H
