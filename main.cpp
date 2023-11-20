#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;

int main()
{
    // Création des personnages
    Personnage david("David", "Aiguille", 25),
        goliath("Goliath", "Epée aiguisée", 20),
        mathieu("Mathieu", "Crocobur", 50),
        superman("Superman", "Sabre Laser", 30);

    // Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);
    superman.attaquer(goliath);
    superman.attaquer(david);

    // Temps mort ! Voyons voir la vie de chacun...
    david.afficherEtat();
    goliath.afficherEtat();
    mathieu.afficherEtat();
    superman.afficherEtat();

    // Au combat !
    mathieu.attaqueMagique(david);
    goliath.attaquer(mathieu);
    mathieu.attaquer(david);
    david.changerArme("Sabre Laser", 30);

    // Infos
    david.afficherEtat();
    goliath.afficherEtat();
    mathieu.afficherEtat();
    superman.afficherEtat();

    // Au combat !
    mathieu.attaquer(goliath);
    goliath.boirePotionDeVie(20);
    goliath.attaqueMagique(mathieu);
    mathieu.attaquer(goliath);
    goliath.attaquer(superman);
    goliath.boirePotionDeVie(20);
    superman.boirePotionDeVie(10);
    superman.changerArme("Epée aiguisée", 20);
    superman.attaquer(david);

    // Infos
    david.afficherEtat();
    goliath.afficherEtat();
    mathieu.afficherEtat();
    superman.afficherEtat();

    return 0;
}
