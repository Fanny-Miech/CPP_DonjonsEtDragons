#include "Ennemi.h"
#include <iostream>

Ennemi::Ennemi()
{
}

Ennemi::~Ennemi()
{
}

void Ennemi::display() const
{
	std::cout << "ENNEMI" << std::endl;
}

void Ennemi::interact()
{
	std::cout << "Je suis un ennemi" << std::endl;
}
