#pragma once
#include "Personnage.h"
#include <string>

class Warrior 
	: public Personnage //d�clare la class warrior comme fille de Personnage
{
public:
	Warrior(std::string name);
	void display() const;
};

