#pragma once
#include "Event.h"
#include <string>
class Start :
    public Event
{
public:
    Start(std::string name);
    ~Start();

    void interact();
private :
    std::string m_name;
};

