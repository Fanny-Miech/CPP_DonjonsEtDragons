#pragma once
#include <string>
#include <iostream>

class Arm
{
public :
	//Constructeurs
	Arm();
	Arm(std::string armName, int armForce);

	//Destructeur
	~Arm();

	//Méthodes
	void display() const;

	//Getter and setter
	int getForce() const;
	std::string getName() const;

private :
	//Attributs
	std::string m_name;
	int m_force;
};

