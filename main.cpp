#include <iostream>
#include "AlgorithmeGlouton.cpp"

int main() {
    std::vector<Town> maListe;
    Town paris("paris", 2.34445, 48.86, 0);
    maListe.push_back(paris);
    Town marseille("marseille", 5.37639, 43.2967, 1);
    maListe.push_back(marseille);
    Town lyon("lyon", 4.84139, 45.7589, 2);
    maListe.push_back(lyon);
    Town toulouse("toulouse", 1.43333, 43.6, 3);
    maListe.push_back(toulouse);
    Town nice("nice", 7.25, 43.7,4);
    maListe.push_back(nice);
    Town nantes("nantes", -1.55, 47.2167, 5);
    maListe.push_back(nantes);
    Town strasbourg("strasbourg", 7.75, 48.5833, 6);
    maListe.push_back(strasbourg);
    Town montpellier("montpellier", 3.88333, 43.6,7);
    maListe.push_back(montpellier);
    Town bordeaux("bordeaux", -0.566667, 44.8333,8);
    maListe.push_back(bordeaux);
    Town lille("lille", 3.06667, 50.6333,9);
    maListe.push_back(lille);

    Route route(maListe);
    glouton(route);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
