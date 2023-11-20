// classe.cpp

#include "classe.hpp"

Voiture::Voiture() : couleur("Inconnu"), marque("Inconnu"), vitesse(0) {}

Voiture::Voiture(const std::string& couleur, const std::string& marque, int vitesse)
    : couleur(couleur), marque(marque), vitesse(vitesse) {}

std::string Voiture::getCouleur() const {
    return couleur;
}

std::string Voiture::getMarque() const {
    return marque;
}

int Voiture::getVitesse() const {
    return vitesse;
}

void Voiture::setCouleur(const std::string& nouvelleCouleur) {
    couleur = nouvelleCouleur;
}

void Voiture::setMarque(const std::string& nouvelleMarque) {
    marque = nouvelleMarque;
}

void Voiture::setVitesse(int nouvelleVitesse) {
    vitesse = nouvelleVitesse;
}