#include "classe.hpp"
#include <iostream>

using namespace std;

int main() {
    Voiture maVoiture;

    cout << "Propriétés initiales de la voiture : \n" << endl;
    cout << "Marque : " << maVoiture.getMarque() << endl;
    cout << "Couleur : " << maVoiture.getCouleur() << endl;
    cout << "Vitesse : " << maVoiture.getVitesse() << " km/h" << endl;

    maVoiture.setMarque("Renault");
    maVoiture.setCouleur("Verte");
    maVoiture.setVitesse(20);

    cout << "\n\nNouvelles propriétés de la voiture : " << endl;
    cout << "Marque : " << maVoiture.getMarque() << endl;
    cout << "Couleur : " << maVoiture.getCouleur() << endl;
    cout << "Vitesse : " << maVoiture.getVitesse() << " km/h" << endl;

    return 0;
}