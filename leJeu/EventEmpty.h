#pragma once
#include "Event.h"
class EventEmpty :
    public Event
{
public :
    EventEmpty();
    ~EventEmpty();

    virtual void interact();

};

