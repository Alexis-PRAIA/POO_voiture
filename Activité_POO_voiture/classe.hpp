// classe.hpp

#ifndef VOITURE_H
#define VOITURE_H

using namespace std;

#include <string>

class Voiture {
private:
    string couleur;
    string marque;
    int vitesse;

public:
    Voiture();
    Voiture(const string& couleur, const string& marque, int vitesse);

    string getCouleur() const;
    string getMarque() const;
    int getVitesse() const;

    void setCouleur(const string& nouvelleCouleur);
    void setMarque(const string& nouvelleMarque);
    void setVitesse(int nouvelleVitesse);
};

#endif // VOITURE_H