#include <string>
#include <iostream>
#include "Classe.h"

using namespace std;

Voiture::Voiture() {
    this->vitesse=0;
    cout << "Un objet a été créé" << endl;
}

Voiture::~Voiture() {
    cout << "Un objet a été détruit" << endl;
}

void Voiture::setMarque(string marq) {
    this->marque = marq;
}

void Voiture::setCouleur(string coul) {
    this->couleur = coul;
}

void Voiture::setVitesse(int vit) {
    this->vitesse = vit;
}

string Voiture::getCouleur() {
    return this->couleur;
}

string Voiture::getMarque() {
    return this->marque;
}

int Voiture::getVitesse() {
    return this->vitesse;
}