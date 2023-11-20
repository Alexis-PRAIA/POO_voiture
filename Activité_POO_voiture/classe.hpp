#ifndef VOITURE_H
#define VOITURE_H

#include <string>

class Voiture {
private:
    std::string couleur;
    std::string marque;
    int vitesse;

public:
    Voiture();
    Voiture(const std::string& couleur, const std::string& marque, int vitesse);

    std::string getCouleur() const;
    std::string getMarque() const;
    int getVitesse() const;

    void setCouleur(const std::string& nouvelleCouleur);
    void setMarque(const std::string& nouvelleMarque);
    void setVitesse(int nouvelleVitesse);
};

#endif