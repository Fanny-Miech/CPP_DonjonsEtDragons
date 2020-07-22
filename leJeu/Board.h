#pragma once
#include <vector>
#include <string>
#include "Event.h"
#include <memory>


class Board
{
public :
	Board();
	~Board();

	std::vector<std::unique_ptr<Event>> m_board();

	//Event getEvent(int i);

private :
	int m_nbCase;

};

