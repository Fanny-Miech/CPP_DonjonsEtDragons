#include "GrandePotion.h"
#include <iostream>

GrandePotion::GrandePotion()
{
}

GrandePotion::~GrandePotion()
{
}

void GrandePotion::display() const
{
	std::cout << "GRANDE Potion : +5 points de vie !" << std::endl;
}

void GrandePotion::interact()
{
	std::cout << "GRANDE Potion : +5 points de vie !" << std::endl;
}

