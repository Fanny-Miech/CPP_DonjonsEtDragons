#pragma once
#include "Personnage.h"
#include <string>

class Mage :
    public Personnage
{
public :
    Mage(std:: string name);
    void display() const;
};

