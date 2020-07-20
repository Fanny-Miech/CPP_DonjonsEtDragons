#include "Event.h"
#include <iostream>

Event::Event()
{
}

Event::~Event()
{
}

void Event::interact()
{
	std::cout << "je suis un event." << std::endl;
}
