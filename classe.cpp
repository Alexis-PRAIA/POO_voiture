// classe.cpp

#include "classe.hpp"
using namespace std;

Voiture::Voiture() : couleur("Inconnu"), marque("Inconnu"), vitesse(0) {}

Voiture::Voiture(const string& couleur, const string& marque, int vitesse)
    : couleur(couleur), marque(marque), vitesse(vitesse) {}

string Voiture::getCouleur() const {
    return couleur;
}

string Voiture::getMarque() const {
    return marque;
}

int Voiture::getVitesse() const {
    return vitesse;
}

void Voiture::setCouleur(const string& nouvelleCouleur) {
    couleur = nouvelleCouleur;
}

void Voiture::setMarque(const string& nouvelleMarque) {
    marque = nouvelleMarque;
}

void Voiture::setVitesse(int nouvelleVitesse) {
    vitesse = nouvelleVitesse;
}