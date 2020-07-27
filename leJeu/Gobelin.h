#pragma once
#include "Ennemi.h"
#include "Personnage.h"

class Gobelin :
    public Ennemi,
    public Personnage
{
public :
    Gobelin();
    ~Gobelin();

    virtual void display() const;
    virtual void interact();
};

