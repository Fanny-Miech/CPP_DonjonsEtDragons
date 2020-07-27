#pragma once
#include "Ennemi.h"
#include "Personnage.h"
#include "Event.h"
#include <string>

class Dragon :
    public Ennemi,
    public Personnage
    //public Event
{
public:
    Dragon();
    ~Dragon();

    virtual void display() const;
    virtual void interact();

private :
    int derived;
};

