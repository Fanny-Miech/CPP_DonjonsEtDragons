#include "Mage.h"
#include <iostream>

using namespace std;

Mage::Mage(string name) : Personnage(name, "Brouillard enveloppant", 8, 15, 3, 6)
{
}

void Mage::display() const
{
	cout << "\n===============================================\nMAGICIEN" << endl;
	Personnage::display();
}
