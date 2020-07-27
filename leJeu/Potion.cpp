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
	std::cout << "Potion" << std::endl;
}

void Potion::interact()
{
	std::cout << "Je suis une potion" << std::endl;
}
