// main.cpp

#include "classe.hpp"
#include <iostream>

using namespace std;

int main() {
    Voiture maVoiture;

    cout << "Couleur: " << maVoiture.getCouleur() << endl;
    cout << "Marque: " << maVoiture.getMarque() << endl;
    cout << "Vitesse: " << maVoiture.getVitesse() << " km/h" << endl;

    maVoiture.setMarque("Renault");
    maVoiture.setCouleur("Verte");
    maVoiture.setVitesse(0);

    cout << "\nNouvelles propriétés de la voiture:" << endl;
    cout << "Couleur: " << maVoiture.getCouleur() << endl;
    cout << "Marque: " << maVoiture.getMarque() << endl;
    cout << "Vitesse: " << maVoiture.getVitesse() << " km/h" << endl;

    return 0;
}