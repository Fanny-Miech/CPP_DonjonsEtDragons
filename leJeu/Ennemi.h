#pragma once
#include "Event.h"
class Ennemi :
    public Event
{
public: 
    Ennemi();
    ~Ennemi();

    virtual void display() const;
    void interact();
};

