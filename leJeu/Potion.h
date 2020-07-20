#pragma once
#include "Event.h"
class Potion :
    public Event
{
public:
    Potion();
    ~Potion();

    void interact();
};

