#include "Potion.h"
#include <iostream>

Potion::Potion()
{
}

Potion::~Potion()
{
}

void Potion::display() const
{
	std::cout << "PETITE Potion : +2 points de vie !" << std::endl;
}

void Potion::interact()
{
	std::cout << "PETITE Potion : + 2 points de vie !" << std::endl;
}
