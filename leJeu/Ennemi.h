#pragma once
#include "Event.h"
//#include "Personnage.h"

class Ennemi :
    public Event
    //public Personnage
{
public: 
    Ennemi();
    ~Ennemi();

    virtual void display() const;
    virtual void interact();
};

