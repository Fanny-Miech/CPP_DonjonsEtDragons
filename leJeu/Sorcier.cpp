#include "Sorcier.h"

Sorcier::Sorcier() :
Personnage("Sorcier", "Etoile magique", 2, 2, 9, 9)
{
}

Sorcier::~Sorcier()
{
}

void Sorcier::display() const
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

void Sorcier::interact()
{
}
