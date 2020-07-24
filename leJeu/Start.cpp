#include "Start.h"
#include <iostream>

Start::Start(std::string name) :
	m_name(name)
{
}

Start::~Start()
{
}

void Start::interact()
{
	std::cout << m_name << std::endl;
}
