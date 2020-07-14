#include "Arm.h"
#include <string>

using namespace std;

Arm::Arm() : m_name("Couteau suisse"), m_force(5)
{
}

Arm::Arm(std::string armName, int armForce) : m_name(armName), m_force(armForce)
{
}

Arm::~Arm()
{
}

void Arm::changeArm(std::string name, int force)
{
	m_name = name;
	m_force = force;
}

void Arm::display() const
{
	cout << "Arme actuelle : " << m_name << " / Force : " << m_force << endl;
}
