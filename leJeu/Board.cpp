#include "Board.h"
#include <string>
#include "Event.h"
#include "EventEmpty.h"
#include "Start.h"
#include "Ennemi.h"
#include"Arm.h"
#include "Potion.h"

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
	//for (std::vector<std::unique_ptr<Event>>::iterator it = m_board.begin(); it != Board::m_board.end(); ++it) {
	//	delete m_board.at(it);
	//}
}




std::vector<std::unique_ptr<Event>> Board::m_board()
{	
	std::vector<std::unique_ptr<Event>> m_board;

	initBoard(m_board);
	shuffleBoard(m_board);
	displayBoard(m_board);

	return m_board;
}



void Board::initBoard(std::vector<std::unique_ptr<Event>>& board)
{
	for (int i = 0; i < m_nbCase; ++i) {
		switch (i) {
		case 0:
			board.push_back(std::unique_ptr<Event>(new Start("DEPART")));
			break;
			// cases avec Dragon
		case 45:
		case 52:
		case 56:
		case 62:
			board.push_back(std::unique_ptr<Event>(new Ennemi()));
			break;
			//cases avec Sorcier
		case 10:
		case 20:
		case 25:
		case 32:
		case 35:
		case 36:
		case 37:
		case 40:
		case 44:
		case 47:
			board.push_back(std::unique_ptr<Event>(new Ennemi()));
			break;
			// cases avec Gobelins
		case 3:
		case 6:
		case 9:
		case 12:
		case 15:
		case 18:
		case 21:
		case 24:
		case 27:
		case 30:
			board.push_back(std::unique_ptr<Event>(new Ennemi()));
			break;
			// cases avec Massue
		case 2:
		case 11:
		case 5:
		case 22:
		case 38:
			board.push_back(std::unique_ptr<Event>(new Arm("Massue", 8)));
			break;
			// cases avec Epee
		case 19:
		case 26:
		case 42:
		case 53:
			board.push_back(std::unique_ptr<Event>(new Arm("Epee double-tranchant", 10)));
			break;
			// cases avec Sort "éclair"
		case 1:
		case 4:
		case 8:
		case 17:
		case 23:
			board.push_back(std::unique_ptr<Event>(new Arm("Eclair", 10)));
			break;
			// cases avec Sort "boule de feu"
		case 48:
		case 49:
			board.push_back(std::unique_ptr<Event>(new Arm("Boule de feu", 15)));
			break;
			// cases avec Potions Standard
		case 7:
		case 13:
		case 31:
		case 33:
		case 39:
		case 43:
			board.push_back(std::unique_ptr<Event>(new Potion()));
			break;
			// cases avec Grande Potion
		case 28:
		case 41:
			board.push_back(std::unique_ptr<Event>(new Potion()));
			break;
			// case d'arrivée
		case 64:
			board.push_back(std::unique_ptr<Event>(new Start("ARRIVEE")));
			break;
			// les autres cases du plateau sont vides
		default:
			board.push_back(std::unique_ptr<Event>(new EventEmpty));
		}

	}

}


//=================  Melange aleatoire  ==================
//// générer un nombre aléatoire
int myrandom(int i) { return std::rand() % i; };

void Board::shuffleBoard(std::vector<std::unique_ptr<Event>>& board)
{
	std::srand(unsigned(std::time(0)));
	//// je mélange mon tableau de jeu entre les cases départ et arrivee
	std::random_shuffle(board.begin() + 1, board.end() - 1, myrandom);
}


//================= Afficher le plateau de jeu  ===========

void Board::displayBoard(std::vector<std::unique_ptr<Event>> const& board)
{
	// j'affiche le contenu de mon plateu de jeu
	std::cout << "PLATEAU DE JEU :" << endl;

	//Si je crée un itérateur pour parcourir mon tableau et appeler la méthode interact() -> ça marche pas !?? 
	//for (std::vector<Event>::iterator it = board.begin(); it != board.end(); ++it)
	//it->interact();

	for (int i = 0; i < m_nbCase; ++i)
	{
		std::cout << "Case " << i << " : ";
		board.at(i)->interact();
	}
}