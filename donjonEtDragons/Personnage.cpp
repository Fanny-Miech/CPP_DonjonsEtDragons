#include "Personnage.h"

using namespace std;

Personnage::Personnage()
{
	m_vie = 3;
	m_force = 5;
	m_nomArme = "A mains nues";
	m_vieMax = 10;
	m_name = "Zorro";
}

Personnage::Personnage(std::string name)
{
	m_vie = 3;
	m_force = 5;
	m_nomArme = "A mains nues";
	m_vieMax = 10;
	m_name = name;
}

void Personnage::perdreVie(int forceEnnemi) {
	m_vie -= forceEnnemi;

	if (m_vie < 0) {
		m_vie = 0;
	}
}

void Personnage::attaquer(Personnage& cible) {
	cible.perdreVie(m_force); //on inflige à la cible les dégâts que cause notre arme
}

void Personnage::gagnerVie(int pointVieSupp) {
	m_vie += pointVieSupp;
	if (m_vie > m_vieMax) {
		m_vie = m_vieMax;
	}
}

void Personnage::changerArme(string nouvelleArme, int forceNouvelleArme) {
	m_nomArme = nouvelleArme;
	m_force = forceNouvelleArme;
}

bool Personnage::estVivant() {
	return m_vie > 0;
}


