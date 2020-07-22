#include "Board.h"
#include <string>
#include "Event.h"
#include "EventEmpty.h"
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iostream>

using namespace std;

Board::Board()
	: m_nbCase(65)
{
}

Board::~Board()
{
}

std::vector<std::unique_ptr<Event>> Board::m_board()
{
	std::vector<std::unique_ptr<Event>> m_board;

	for (int i = 0; i < m_nbCase; ++i) {
		m_board.push_back(std::unique_ptr<Event>(new EventEmpty));
		m_board.at(i)->interact();
	}
	
	return m_board;
}

