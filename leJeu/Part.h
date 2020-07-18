#pragma once
#include "Personnage.h"
#include "Board.h"


class Part
{
public :
	Part(Personnage* perso);
	~Part();

	void part();
	int rollDice();
	void move(int nb);
	void interact();

private :
	Personnage* m_perso;
	Board m_board;

};

