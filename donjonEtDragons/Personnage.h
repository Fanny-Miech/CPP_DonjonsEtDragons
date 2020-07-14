#pragma once
#include <string>

class Personnage
{
public:
	//Constructeurs
	Personnage();
	Personnage(std::string name);

	//Méthodes
	void perdreVie(int forceEnnemi);

	void attaquer(Personnage& cible);

	void gagnerVie(int pointVieSupp);

	void changerArme(std::string nouvelleArme, int forceNouvelleArme);

	bool estVivant();


	//Atributs
private :

	std::string m_name;
	int m_vie;
	int m_vieMax;
	int m_force;
	std::string m_nomArme;

};

