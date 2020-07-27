#include "Dragon.h"

Dragon::Dragon() :
	 Personnage("Dragon", "Boule de feu", 4, 4, 15, 15)
{
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
