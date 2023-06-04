//
// Created by CHAMPALET on 16/05/2023.
//
#include "SolutionVoisine.h"

SolutionVoisine::SolutionVoisine(Route _maRoute) {
    this->maRoute = _maRoute;
}

std::vector<Town> SolutionVoisine::echange(std::vector<Town> listeVille, int x, int y) {
    for (auto ville: listeVille)
        std::cout<< ville.toString() << std::endl;

    std::swap(listeVille[x], listeVille[y]);

    for (int i = 0; i < (int)listeVille.size(); i++)
        std::cout << listeVille.at(i).toString() << std::endl;
    return listeVille;
}

const Route &SolutionVoisine::getMaRoute() const {
    return maRoute;
}

void SolutionVoisine::setMaRoute(const Route &maRoute) {
    SolutionVoisine::maRoute = maRoute;
}
