#include <string>
using namespace std;


class Voiture
{
private:
    string marque;
    int vitesse;
    
public:
    Voiture();
    ~Voiture();
    void setMarque(string marq);
    void setCouleur(string coul);
    void setVitesse(int vit);
    string getMarque();
    string getCouleur();
    int getVitesse();
    string couleur;


};