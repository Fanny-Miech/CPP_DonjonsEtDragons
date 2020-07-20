#pragma once
#include "Event.h"
class Ennemi :
    public Event
{
public: 
    Ennemi();
    ~Ennemi();

    void interact();
};

