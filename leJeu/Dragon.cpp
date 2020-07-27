#include "Dragon.h"
#include <ctime>
#include <vector>

Dragon::Dragon() :
	Personnage("Dragon", "Boule de feu", 4, 4, 15, 15)
{
	//int aleatoire;
	//srand(time(0));

	//std::vector<std::string> liste;
	//liste.push_back("Moorwen");
	//liste.push_back("Krokmou");
	//liste.push_back("Draco");
	//liste.push_back("Falkor");
	//liste.push_back("Saphira");

	//aleatoire = rand() % liste.size();

	//m_name = liste[aleatoire];
}

Dragon::~Dragon()
{
}

void Dragon::display() const
{
	Ennemi::display();
	std::cout << Personnage::m_name 
		<< " / Vie : " 
		<< Personnage::m_life 
		<< " (force : " 
		<< Personnage::m_arm.getForce() 
		<< ")" 
		<< std::endl;
}

void Dragon::interact()
{
}
