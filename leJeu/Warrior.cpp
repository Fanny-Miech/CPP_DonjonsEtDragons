#include "Warrior.h"
#include <string>

using namespace std;

Warrior::Warrior(std::string name) : Personnage(name, "Epee rouillee", 5, 10, 5,10)
{
}

void Warrior::display() const
{
	cout << "\n===============================================\nWARRIOR" << endl;
	Personnage::display();
}

