#include <iostream>
#include <string>
#include "classe.hpp"

using namespace std;

int main() {
    Vehicule scooter;
    scooter.setCouleur("rouge");
    scooter.setVitesse(130);
    cout << "La couleur est " << scooter.getCouleur() << endl;
    cout << "La vitesse est " << scooter.getVitesse() << endl;

    return 0;
}