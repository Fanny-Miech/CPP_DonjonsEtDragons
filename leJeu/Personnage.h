#pragma once
#include <string>
#include "Arm.h"

class Personnage
{
public:
	//Constructeurs
	Personnage();
	Personnage(std::string name);
	Personnage(std::string nomArme, int force, std::string name);
	Personnage(Arm arm, std::string name);

	//destructeur -> pour désallouer la mémoire en cas d'allocation dynamique (instanciation d'un objet Personnage via new)
	~Personnage();

	//Méthodes
	void loseLife(int forceEnnemi);

	void attack(Personnage& cible);

	void winLife(int lifeSupp);

	void changeArm(std::string nameNewArm, int forceNewArm);

	bool isAlive() const;

	void display() const;

	//Getter and setter
	std::string getName() const;
	int getLife() const;
	int getLifeMax() const;
	Arm getArm() const;

	//Atributs
private:

	std::string m_name;
	int m_life;
	int m_lifeMax;
	Arm m_arm;

};



