#include <iostream>
#include <string>

using namespace std;
#include "Classe.h";

int main() {
    Voiture renault1;
    renault1.setCouleur("vert");
    renault1.couleur="rouge";
    cout<<"La couleur est "<<renault1.getCouleur()<<endl;
    cout<<"La vitesse est "<<renault1.getVitesse()<<endl;

    return 0;
}