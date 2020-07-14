#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

int main() {
    cout << "DONJON ET DRAGONS" << endl;
    Personnage david("David"), goliath("épée éguisée", 70, "Goliath");
    //Création de 2 objets de type Personnage : david et goliath

    goliath.attaquer(david);    //goliath attaque david
    david.gagnerVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david);    //goliath réattaque david
    david.attaquer(goliath);    //david contre-attaque... c'est assez clair non ?

    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 80);
    goliath.attaquer(david);

    string rejouer;
    cout << "Replay ?" << endl;
    cin >> rejouer;

    return 0;
}