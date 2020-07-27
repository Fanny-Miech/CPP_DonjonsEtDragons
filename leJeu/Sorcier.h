#pragma once
#include "Ennemi.h"
#include "Personnage.h"
#include <string>

class Sorcier :
    public Ennemi,
    public Personnage,
    public Event
{
public:
    Sorcier();
    ~Sorcier();

    virtual void display() const;
    virtual void interact();
};


