#include "Gobelin.h"
Gobelin::Gobelin() :
	Personnage("Gobelin", "Coup de poing", 1, 1, 6, 6)
{
}

Gobelin::~Gobelin()
{
}


void Gobelin::display() const
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

void Gobelin::interact()
{
}
