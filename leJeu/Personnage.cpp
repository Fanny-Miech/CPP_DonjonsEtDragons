#include "Personnage.h"
#include <string>

using namespace std;

Personnage::Personnage() : m_vie(30), m_force(50), m_nomArme("Poing américain"), m_vieMax(100), m_name("Zorro") // liste d'initialisation des attributs
{
}

Personnage::Personnage(string name) : m_vie(30), m_force(50), m_nomArme("Poing américain"), m_vieMax(100), m_name(name)
{
}

Personnage::Personnage(string nomArme, int force, string name) : m_vie(30), m_force(force), m_nomArme(nomArme), m_vieMax(100), m_name(name)
{
}

Personnage::~Personnage()
{
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

bool Personnage::estVivant() const {
	return m_vie > 0;
}


