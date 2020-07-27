#include "Arm.h"
#include <string>
#include <iostream>

using namespace std;

//===============================================
//			Constructeurs / Destructeur
//================================================

Arm::Arm() : m_name("Couteau suisse"), m_force(5)
{
}

Arm::Arm(std::string armName, int armForce) : m_name(armName), m_force(armForce)
{
}

Arm::~Arm()
{
}


//=======================================================
//				Méthodes
//=======================================================


void Arm::display() const
{
	std::cout << "ARME : " << m_name << " (force : " << m_force << ")" << endl;
}

void Arm::interact()
{
	std::cout << "ARME : " << m_name <<" (force : " << m_force << ")" << endl;
}


//==============	getter and setter	======================

int Arm::getForce() const
{
	return m_force;
}

std::string Arm::getName() const
{
	return m_name;
}
