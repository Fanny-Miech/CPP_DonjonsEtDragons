#pragma once
#include <string>
#include <iostream>
#include "Event.h"

class Arm :
	public Event
{
public :
	//Constructeurs
	Arm();
	Arm(std::string armName, int armForce);

	//Destructeur
	~Arm();

	//Méthodes
	void display() const;

	void interact();

	//Getter and setter
	int getForce() const;
	std::string getName() const;

private :
	//Attributs
	std::string m_name;
	int m_force;
};

