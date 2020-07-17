#pragma once
#include <string>
#include "Arm.h"

class Personnage
{
public:
	//===============================================
	//		Constructeurs / Destructeur
	//===============================================

	Personnage();
	Personnage(std::string name);
	Personnage(std::string nomArme, int force, std::string name);
	Personnage(Arm arm, std::string name);

	//Constructeur de copie
	//-> existe par d�faut mais ici n�cessaire car m_arm est un pointeur
	//on va donc cr�er un pointeur vers une copie de l'arme
	//en cas de copie : le destructeur delete une copie de l'arme et non la m�me arme
	Personnage(Personnage const& persoCopy);

	//destructeur -> pour d�sallouer la m�moire en cas d'allocation dynamique (instanciation d'un objet Personnage via new)
	~Personnage();



	//===================================================
	//					M�thodes
	//====================================================

	void loseLife(int forceEnnemi);

	void attack(Personnage& cible);

	void winLife(int lifeSupp);

	void changeArm(std::string nameNewArm, int forceNewArm);

	void changeArm(Arm newArm);

	bool isAlive() const;

	void display() const;

	//surcharge de 'operator='	
	//va toujours de pair avec le constructeur de copie !!!
	Personnage& operator=(Personnage const& persoCopy);



	//===============	Getter and setter	======================

	std::string getName() const;
	int getLife() const;
	int getLifeMax() const;
	Arm* getArmPtr() const;



	//================================================================
	//					Atributs
	//================================================================

private:

	std::string m_name;
	int m_life;
	int m_lifeMax;
	Arm *m_arm;

};



