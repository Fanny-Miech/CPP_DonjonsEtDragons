#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;

int main() {
    cout << "DONJON ET DRAGONS" << endl;
    Personnage david("David"), goliath("�p�e �guis�e", 5, "Goliath");
    //Cr�ation de 2 objets de type Personnage : david et goliath

    cout << "Voil� nos 2 champions : " << endl;
    david.display();
    goliath.display();

    cout << "Goliath attaque David." << endl;
    goliath.attack(david);    //goliath attaque david
    david.display();

    cout << "david r�cup�re 2 points de vie !" << endl;
    david.winLife(2); //david r�cup�re 2 de vie en buvant une potion
    david.display();

    cout << "Goliath r�attaque David." << endl;
    goliath.attack(david);    //goliath r�attaque david
    david.display();

    cout << "David contre-attaque !!!" << endl;
    david.attack(goliath);    //david contre-attaque... c'est assez clair non ?
    goliath.display();

    cout << "Goliath change d'arme." << endl;
    goliath.changeArm("Double hache tranchante v�n�neuse de la mort", 7);
    goliath.display();

    cout << "Goliath attaque David." << endl;
    goliath.attack(david);
    david.display();

    string rejouer;
    cout << "Replay ?" << endl;
    cin >> rejouer;

    return 0;
}