#pragma once
#include "Event.h"
class Potion :
    public Event
{
public:
    Potion();
    ~Potion();

    virtual void display() const;
    void interact();
};

