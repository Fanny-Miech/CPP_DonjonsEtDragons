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

	//M�thodes
	void changeArm(std::string name, int force);
	void display() const;

private :
	//Attributs
	std::string m_name;
	int m_force;
};

