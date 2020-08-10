#pragma once
#include "Event.h"
class GrandePotion :
    public Event
{
public:
    GrandePotion();
    ~GrandePotion();

    virtual void display() const;
    void interact();
};

