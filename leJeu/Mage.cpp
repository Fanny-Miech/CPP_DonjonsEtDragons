#include "Mage.h"
#include <iostream>

using namespace std;

Mage::Mage(string name) : Personnage(name)
{
}

void Mage::display() const
{
	cout << "	MAGICIEN" << endl;
	Personnage::display();
}
