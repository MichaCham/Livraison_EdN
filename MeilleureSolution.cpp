//
// Created by david on 04/06/2023.
//
#include "MeilleureSolution.h"

Solution MeilleureSolution::meilleure_ameliorante(Solution solution, InterfaceVoisinage *v) {
    Solution meilleure_solution = solution;
    float meilleure_distance = solution.getAllDist();
    float iterationNbr = (solution.getSoluce().size() * (solution.getSoluce().size() - 1)) / 2;
    for(int i = 0; i < iterationNbr; i++){
        Solution solutionV;
        solutionV.setSoluce(v->getBetterSolution(meilleure_solution,i));
        float meilleureV = solutionV.getAllDist();
        if(meilleureV < meilleure_distance){
            meilleure_solution = solutionV;
            meilleure_distance = meilleureV;
        }
    }
    return meilleure_solution;
}

Solution MeilleureSolution::algorithme_descente(Solution s, InterfaceVoisinage *v) {
    Solution solution = s;
    float distance = solution.getAllDist();
    Solution meilleureSolution;
    float meilleureDistance = 1000000000;
    float iterationNbr = (solution.getSoluce().size() * (solution.getSoluce().size() - 1)) / 2;
    while(meilleureDistance > distance){
        meilleureSolution = solution;
        meilleureDistance = distance;
        solution = meilleure_ameliorante(solution, v);
        distance = solution.getAllDist();
    }
    return meilleureSolution;
}

Solution MeilleureSolution::premiere_ameliorante(Solution solution, InterfaceVoisinage *v) {
    Solution meilleure_solution = solution;
    float meilleure_distance = solution.getAllDist();
    float iterationNbr = (solution.getSoluce().size() * (solution.getSoluce().size() - 1)) / 2;
    for(int i = 0; i < iterationNbr; i++){
        Solution solutionV;
        solutionV.setSoluce(v->getBetterSolution(meilleure_solution,i));
        float meilleureV = solutionV.getAllDist();
        if(meilleureV < meilleure_distance){
            meilleure_solution = solutionV;
            meilleure_distance = meilleureV;
            return meilleure_solution;
        }
    }
    return meilleure_solution;
}

Solution MeilleureSolution::random_premiere_ameliorante(Solution solution, InterfaceVoisinage *v) {
    Solution meilleure_solution = solution;
    float meilleure_distance = solution.getAllDist();
    std::vector<int> tmp;
    float iterationNbr = (solution.getSoluce().size() * (solution.getSoluce().size() - 1)) / 2;
    for(int i = 0; i < iterationNbr; i++) {
        tmp.push_back(i);
    }
    std::random_shuffle(tmp.begin(), tmp.end());
    for(int i : tmp){
        Solution solutionV;
        solutionV.setSoluce(v->getBetterSolution(meilleure_solution,i));
        float meilleureV = solutionV.getAllDist();
        if(meilleureV < meilleure_distance){
            meilleure_solution = solutionV;
            meilleure_distance = meilleureV;
            return meilleure_solution;
        }
    }
    return meilleure_solution;
}