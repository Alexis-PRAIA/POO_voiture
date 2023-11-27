// Classe.cpp
#include <iostream>
#include "Classe.hpp"

Voiture::Voiture() {
    this->vitesse = 0;
    std::cout << "Un objet a été créé" << std::endl;
}

Voiture::~Voiture() {
    std::cout << "Un objet a été détruit" << std::endl;
}

void Voiture::setMarque(std::string marq) {
    this->marque = marq;
}

void Voiture::setCouleur(std::string coul) {
    this->couleur = coul;
}

void Voiture::setVitesse(int vit) {
    this->vitesse = vit;
}

std::string Voiture::getCouleur() {
    return this->couleur;
}

std::string Voiture::getMarque() {
    return this->marque;
}

int Voiture::getVitesse() {
    return this->vitesse;
}