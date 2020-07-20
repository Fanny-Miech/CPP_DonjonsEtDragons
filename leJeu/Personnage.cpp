#include "Personnage.h"
#include <string>

using namespace std;

//===================================================================
//						Constructeurs
//===================================================================

Personnage::Personnage() 
	: m_name("Bibou"), m_arm(0), m_forceMax(10), m_life(3), m_lifeMax(10) // liste d'initialisation des attributs
{
	m_arm = new Arm();
}

Personnage::Personnage(string name) 
	: m_name(name), m_arm(0), m_forceMax(10), m_life(3), m_lifeMax(10)
{
	m_arm = new Arm();
}

Personnage::Personnage(string name, string nameArm, int forceArm)
	: m_name(name), m_arm(0), m_forceMax(10), m_life(3), m_lifeMax(10)
{
	m_arm = new Arm(nameArm, forceArm);
}

Personnage::Personnage(std::string name, Arm arm)
	: m_name(name), m_arm(0), m_forceMax(10), m_life(3), m_lifeMax(10)
{
	m_arm = new Arm(arm); //constructeur de copie -> copie tous les attributs de arm
}

Personnage::Personnage(std::string name, std::string armName, int force, int forceMax, int life, int lifeMax)
	: m_name(name), m_arm(0), m_forceMax(forceMax), m_life(life), m_lifeMax(lifeMax)
{
	m_arm = new Arm(armName, force);
}



//==================	Constructeur de copie	================

Personnage::Personnage(Personnage const& persoCopy)
	: m_name(persoCopy.m_name), m_life(persoCopy.m_life), m_lifeMax(persoCopy.m_lifeMax), m_arm(0)
{
	m_arm = new Arm(*(persoCopy.m_arm)); //on crée un pointeur vers une copie de l'arme
}


//==================	Destructeur		========================

Personnage::~Personnage()
{
	delete m_arm;
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
	cible.loseLife(m_arm->getForce()); //on inflige à la cible les dégâts que cause notre arme
}

void Personnage::winLife(int lifeSupp) {
	m_life += lifeSupp;
	if (m_life > m_lifeMax) {
		m_life = m_lifeMax;
	}
}

void Personnage::changeArm(string nameNewArm, int forceNewArm) {
	delete m_arm;
	m_arm = new Arm(nameNewArm, forceNewArm);
}

void Personnage::changeArm(Arm newArm) {
	delete m_arm;
	m_arm = new Arm(newArm);
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
		<< "\nARME : " << m_arm->getName() 
		<<" (force : " << m_arm->getForce() <<")"
		<< "\n===============================================\n"
		<< endl;
}



Personnage& Personnage::operator=(Personnage const& persoCopy)
{
	if (this != &persoCopy) //On vérifie que l'objet n'est pas le même que celui reçu en argument
	{
		//On copie tous les champs
		m_name = persoCopy.m_name;
		m_life = persoCopy.m_life;
		m_lifeMax = persoCopy.m_lifeMax;
		delete m_arm; //on supprime le pointeur vers l'arme
		m_arm = new Arm(*(persoCopy.m_arm)); // on assigne le pointeur à une copie de l'arme
	}
	return *this; //On renvoie l'objet lui-même
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

Arm* Personnage::getArmPtr() const
{
	return m_arm;
}


