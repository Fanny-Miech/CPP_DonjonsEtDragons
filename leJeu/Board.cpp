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
{
}

Board::~Board()
{
}

//générer un nombre aléatoire
int myrandom(int i) { return std::rand() % i; };

vector<Event> Board::m_board()
{
	std::srand(unsigned(std::time(0)));

	//je remplis mon plateau de jeu
	std::vector<Event> m_board (64);
	for (int i = 0; i < m_board.size(); ++i)
	{
		m_board.at(i) = EventEmpty();
	}


	//je mélange mon tableau de jeu entre les cases départ et arrivee
	std::random_shuffle(m_board.begin() + 1, m_board.end() - 1, myrandom);

	//j'affiche le contenu de mon plateu de jeu
	std::cout << "PLATEAU DE JEU :" << endl;
	for (std::vector<Event>::iterator it = m_board.begin(); it != m_board.end(); ++it)
		it->interact(); // it est un Event => problème de downcasting à résoudre 


	return m_board;
}

//Event Board::getEvent(int i) 
//{
//	return m_board.at(i);
//}
