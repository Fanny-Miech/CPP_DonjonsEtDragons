#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

int main() {
    cout << "DONJON ET DRAGONS" << endl;
    Personnage david("David"), goliath("�p�e �guis�e", 70, "Goliath");
    //Cr�ation de 2 objets de type Personnage : david et goliath

    goliath.attaquer(david);    //goliath attaque david
    david.gagnerVie(20); //david r�cup�re 20 de vie en buvant une potion
    goliath.attaquer(david);    //goliath r�attaque david
    david.attaquer(goliath);    //david contre-attaque... c'est assez clair non ?

    goliath.changerArme("Double hache tranchante v�n�neuse de la mort", 80);
    goliath.attaquer(david);

    string rejouer;
    cout << "Replay ?" << endl;
    cin >> rejouer;

    return 0;
}