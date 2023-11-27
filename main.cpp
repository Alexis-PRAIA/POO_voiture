#include <iostream>
#include <string>

using namespace std;
#include "Classe.hpp"

int main() {
    Voiture renault1;
    renault1.setCouleur("vert");
    renault1.setCouleur("rouge");
    cout<<"La couleur est "<<renault1.getCouleur()<<endl;
    cout<<"La vitesse est "<<renault1.getVitesse()<<endl;

    return 0;
}