// Classe.hpp
#ifndef VOITURE_HPP
#define VOITURE_HPP

#include <string>

class Voiture {
private:
    std::string marque;
    std::string couleur;
    int vitesse;

public:
    Voiture();   // Constructeur
    ~Voiture();  // Destructeur

    void setMarque(std::string marq);
    void setCouleur(std::string coul);
    void setVitesse(int vit);

    std::string getCouleur();
    std::string getMarque();
    int getVitesse();
};

#endif // VOITURE_HPP