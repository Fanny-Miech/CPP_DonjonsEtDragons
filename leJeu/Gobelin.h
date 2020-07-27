#pragma once
#include "Ennemi.h"
#include "Personnage.h"
#include "Event.h"

class Gobelin :
    public Ennemi,
    public Personnage
    //public Event
{
public :
    Gobelin();
    ~Gobelin();

    virtual void display() const;
    virtual void interact();
};

