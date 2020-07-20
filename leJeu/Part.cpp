#include "Part.h"
#include <ctime>

Part::Part(Personnage* perso) 
	: m_perso(perso)
{
	Board m_board;
}

Part::~Part()
{
}

void Part::part()
{
	m_board.m_board();
	std::cout << "je commence une partie avec part()" << std::endl;
	int dice = rollDice();
	move(dice);
	interact();
	/*if (m_perso->isAlive()) {
		part();
	}*/
}

int Part::rollDice()
{
	std::srand(time(nullptr));
	int dice = std::rand() % 6 + 1;
	return dice;
}

void Part::move(int nb)
{
}

void Part::interact()
{
	/*	
	switch case
	-> Caisse surprise
		-> getSurprise()
	-> Ennemi
		-> fight()
			-> attack()
			-> beAttacked()
			-> interact()
		-> goAway()
			-> part() //avec nouvelle variable 'boolean goAway' à créer dans perso pour move négatif
	-> default	(EmptyEvent)
	*/
}

