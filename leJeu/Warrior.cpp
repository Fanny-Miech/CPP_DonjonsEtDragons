#include "Warrior.h"
#include <string>

using namespace std;

Warrior::Warrior(std::string name) : Personnage(name)
{
}

void Warrior::display() const
{
	cout << "		WARRIOR" << endl;
	Personnage::display();
}

