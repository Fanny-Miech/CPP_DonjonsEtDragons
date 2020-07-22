#pragma once
#include <vector>
#include <string>
#include "Event.h"


class Board
{
public :
	Board();
	~Board();

	std::vector<Event> m_board();

	//Event getEvent(int i);

private :
	int m_nbCase;

};

