// Classe.cpp
#include <iostream>
#include "classe.hpp"

Vehicule::Vehicule() {
    this->vitesse = 0;
    std::cout << "Un véhicule a été créé" << std::endl;
}

// Définition de la méthode seDeplacer
void Vehicule::seDeplacer() {
    std::cout << "Le véhicule se déplace." << std::endl;
}

void Vehicule::setVitesse(int vit) {
    this->vitesse = vit;
}

std::string Vehicule::getCouleur() {
    return this->couleur;
}

void Vehicule::setMarque(std::string marq) {
    this->marque = marq;
}

void Vehicule::setCouleur(std::string coul) {
    this->couleur = coul;
}

std::string Vehicule::getMarque() {
    return this->marque;
}

int Vehicule::getVitesse() {
    return this->vitesse;
}

// Définition des constructeurs et méthodes pour les classes dérivées
scooter::scooter() {
    //this->vitesse = 130;
    std::cout << "Un scooter a été créé" << std::endl;
}

void scooter::setCylindree(int nbrcyl) {
    this->cylindree = nbrcyl;
}

int scooter::getCylindree() {
    return this->cylindree;
}

camion::camion() {
    //this->vitesse = 0;
    std::cout << "Un camion a été créé" << std::endl;
}

void camion::setPoidsCharges(int pdCharge) {
    this->poidsCharge = pdCharge;
}

int camion::getPoidsCharges() {
    return this->poidsCharge;
}

Voiture::Voiture() {
    //this->vitesse = 0;
    std::cout << "Une voiture a été créée" << std::endl;
}

Voiture::~Voiture() {
    std::cout << "La voiture a été détruite" << std::endl;
}

void Voiture::setALaClim() {
    this->aLaClimatisation = true;
}

bool Voiture::getALaClim() {
    return this->aLaClimatisation;
}