#include "Personnage.h"
#include <string>

using namespace std;

Personnage::Personnage() : m_life(3), m_arm(Arm()), m_lifeMax(10), m_name("Zorro") // liste d'initialisation des attributs
{
}

Personnage::Personnage(string name) : m_life(3), m_arm(Arm()), m_lifeMax(10), m_name(name)
{
}

Personnage::Personnage(string nomArme, int force, string name) : m_life(3), m_arm(nomArme, force), m_lifeMax(10), m_name(name)
{
}

Personnage::Personnage(Arm arm, std::string name) : m_life(3), m_arm(arm), m_lifeMax(10), m_name(name)
{
}

Personnage::~Personnage()
{
}


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
	m_arm.changeArm(nameNewArm, forceNewArm);
}

bool Personnage::isAlive() const {
	return m_life > 0;
}

void Personnage::display() const
{
	cout << m_name << "  /  VIE : " << m_life << "  /  FORCE : " << m_arm.getForce() << endl;
}

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
	return Arm(m_arm);
}


