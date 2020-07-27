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

	void initBoard(std::vector<std::unique_ptr<Event>>& board);

	void shuffleBoard(std::vector<std::unique_ptr<Event>>& board);

	void displayBoard(std::vector<std::unique_ptr<Event>> const& board);

	//Event getEvent(int i);

private :
	int m_nbCase;

};

