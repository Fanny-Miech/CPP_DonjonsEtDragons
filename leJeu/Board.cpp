#include "Board.h"
#include <deque>
#include <string>
#include "Event.h"
#include "EventEmpty.h"

using namespace std;

Board::Board()
{
}

Board::~Board()
{
}

deque<Event> Board::m_board()
{
	std::deque<Event> m_board (64);
	for (int i = 0; i < m_board.size(); ++i)
	{
		m_board.at(i) = EventEmpty();
	}

	return m_board;
}

Event Board::getEvent(int i) 
{
	return m_board.at(i);
}
