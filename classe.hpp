// Classe.hpp
#ifndef VEHICULE_HPP
#define VEHICULE_HPP

#include <string>

class Vehicule {
private:
    std::string marque;
    std::string couleur;
    int vitesse;

public:
    Vehicule();   // Constructeur
    Vehicule(const Vehicule &);
    ~Vehicule();  // Destructeur
    void seDeplacer();
    void setVitesse(int vit);
    std::string getCouleur();
    void setMarque(std::string marq);
    void setCouleur(std::string coul);
    std::string getMarque();
    int getVitesse();
};

class scooter : public Vehicule {
private:
    int cylindree;

public:
    scooter(); // Constructeur
    void setCylindree(int nbrcyl);
    int getCylindree();
};

class camion : public Vehicule {
private:
    int poidsCharge;

public:
    camion(); // Constructeur
    void setPoidsCharges(int pdCharge);
    int getPoidsCharges();
};

class Voiture : public Vehicule {
private:
    bool aLaClimatisation;

public:
    Voiture(); // Constructeur
    Voiture(const Voiture & voit);
    ~Voiture(); // Destructeur
    void setALaClim();
    bool getALaClim();
};

#endif // VEHICULE_HPP