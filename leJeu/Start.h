#pragma once
#include "Event.h"
#include <string>
class Start :
    public Event
{
public:
    Start(std::string name);
    ~Start();

    virtual void display() const;
    void interact();
private :
    std::string m_name;
};

