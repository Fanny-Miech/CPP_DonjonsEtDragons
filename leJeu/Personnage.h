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
	Personnage(std::string name, std::string nameArm, int forceArm);
	Personnage(std::string name, Arm arm);
	Personnage(std::string name, std::string armName, int force, int forceMax, int life, int lifeMax);

	//Constructeur de copie
	//-> existe par défaut mais ici nécessaire car m_arm est un pointeur
	//on va donc créer un pointeur vers une copie de l'arme
	//en cas de copie : le destructeur delete une copie de l'arme et non la même arme
	Personnage(Personnage const& persoCopy);

	//destructeur -> pour désallouer la mémoire en cas d'allocation dynamique (instanciation d'un objet Personnage via new)
	virtual ~Personnage();



	//===================================================
	//					Méthodes
	//====================================================

	void virtual loseLife(int forceEnnemi);

	void virtual attack(Personnage& cible);

	void virtual winLife(int lifeSupp);

	void virtual changeArm(std::string nameNewArm, int forceNewArm);

	void virtual changeArm(Arm newArm);

	bool virtual isAlive() const;

	void virtual display() const;

	//surcharge de 'operator='	
	//va toujours de pair avec le constructeur de copie !!!
	Personnage& operator=(Personnage const& persoCopy);



	//===============	Getter and setter	======================

	virtual std::string getName() const;
	virtual int getLife() const;
	virtual int getLifeMax() const;
	virtual Arm* getArmPtr() const;



	//================================================================
	//					Atributs
	//================================================================

protected:

	std::string m_name;
	Arm* m_arm;
	int m_forceMax;
	int m_life;
	int m_lifeMax;

};



