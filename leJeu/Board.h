#pragma once
#include <deque>
#include <string>
#include "Event.h"


class Board
{
public :
	Board();
	~Board();

	std::deque<Event> m_board();

	//Event getEvent(int i);

};

