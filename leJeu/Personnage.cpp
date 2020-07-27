#include "Personnage.h"
#include <string>

using namespace std;

//===================================================================
//						Constructeurs
//===================================================================

Personnage::Personnage() 
	: m_name("Bibou"), m_arm(), m_forceMax(10), m_life(3), m_lifeMax(10) // liste d'initialisation des attributs
{
}

Personnage::Personnage(string name) 
	: m_name(name), m_arm(), m_forceMax(10), m_life(3), m_lifeMax(10)
{
}

Personnage::Personnage(string name, string nameArm, int forceArm)
	: m_name(name), m_arm(nameArm, forceArm), m_forceMax(10), m_life(3), m_lifeMax(10)
{
}

Personnage::Personnage(std::string name, Arm arm)
	: m_name(name), m_arm(arm), m_forceMax(10), m_life(3), m_lifeMax(10)
{
}

Personnage::Personnage(std::string name, std::string armName, int force, int forceMax, int life, int lifeMax)
	: m_name(name), m_arm(armName, force), m_forceMax(forceMax), m_life(life), m_lifeMax(lifeMax)
{
}



//==================	Destructeur		========================

Personnage::~Personnage()
{
}

//=================================================================
//						Méthodes
//=================================================================


void Personnage::loseLife(int forceEnnemi) {
	m_life -= forceEnnemi;

	if (m_life < 0) {
		m_life = 0;
	}
}

void Personnage::attack(Personnage& cible) {
	cible.loseLife(m_arm.getForce()); //on inflige à la cible les dégâts que cause notre arme
}

void Personnage::winLife(int lifeSupp) {
	m_life += lifeSupp;
	if (m_life > m_lifeMax) {
		m_life = m_lifeMax;
	}
}

void Personnage::changeArm(string nameNewArm, int forceNewArm) {
	m_arm = Arm(nameNewArm, forceNewArm);
}

void Personnage::changeArm(Arm newArm) {
	m_arm = newArm;
}

bool Personnage::isAlive() const {
	return m_life > 0;
}

void Personnage::display() const
{
	cout 
		<< "==============================================="
		<<"\nNOM : " << m_name 
		<< "\nVIE : " << m_life 
		<< "\nARME : " << m_arm.getName() 
		<<" (force : " << m_arm.getForce() <<")"
		<< "\n===============================================\n"
		<< endl;
}




//==============	getter and setter	=====================================


std::string Personnage::getName() const
{
	return std::string(m_name);
}

int Personnage::getLife() const
{
	return m_life;
}

int Personnage::getLifeMax() const
{
	return m_lifeMax;
}

Arm Personnage::getArm() const
{
	return m_arm;
}

int Personnage::getForce() const
{
	return m_arm.getForce();
}

void Personnage::setArm(Arm arm)
{
	m_arm = arm;
}

