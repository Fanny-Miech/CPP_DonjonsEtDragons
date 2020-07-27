#pragma once
#include "Event.h"
class EventEmpty :
    public Event
{
public :
    EventEmpty();
    ~EventEmpty();

    virtual void display() const;
    void interact();

};

