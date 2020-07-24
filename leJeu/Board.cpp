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


//=================  ( Pour Melange aleatoire )  =========
//// générer un nombre aléatoire
//int myrandom(int i) { return std::rand() % i; };


std::vector<std::unique_ptr<Event>> Board::m_board()
{
	//============ ( Pour Mélange aleatoire )  ==============
	//std::srand(unsigned(std::time(0)));



	int nbEnnemi(24); // 4 dragons / 10 Sorciers / 10 gobelins
	int nbArm(16); // 5 Massues / 4 Epees / 5 sorts "eclair" / 2 sorts "boule de feu"
	int nbPotion(8); // 6 standards / 2 grandes
	
	std::vector<std::unique_ptr<Event>> m_board;

	
	for (int i = 0; i < m_nbCase; ++i) {
		switch (i) {
		case 0:
			m_board.push_back(std::unique_ptr<Event>(new Start("DEPART")));
			break;
		// cases avec Dragon
		case 45 :
		case 52 :
		case 56 :
		case 62 :
			m_board.push_back(std::unique_ptr<Event>(new Ennemi()));
			break;
		//cases avec Sorcier
		case 10 :
		case 20 :
		case 25 :
		case 32 :
		case 35 :
		case 36 :
		case 37 :
		case 40 :
		case 44 :
		case 47 :
			m_board.push_back(std::unique_ptr<Event>(new Ennemi()));
			break;
		// cases avec Gobelins
		case 3 :
		case 6 :
		case 9 :
		case 12 :
		case 15 :
		case 18 :
		case 21 :
		case 24 :
		case 27 :
		case 30 :
			m_board.push_back(std::unique_ptr<Event>(new Ennemi()));
			break;
		// cases avec Massue
		case 2 :
		case 11 :
		case 5 :
		case 22 :
		case 38 :
			m_board.push_back(std::unique_ptr<Event>(new Arm("Massue",8)));
			break;
		// cases avec Epee
		case 19 :
		case 26 :
		case 42 :
		case 53 :
			m_board.push_back(std::unique_ptr<Event>(new Arm("Epee double-tranchant", 10)));
			break;
		// cases avec Sort "éclair"
		case 1 :
		case 4 :
		case 8 :
		case 17 :
		case 23 :
			m_board.push_back(std::unique_ptr<Event>(new Arm("Eclair", 10)));
			break;
		// cases avec Sort "boule de feu"
		case 48:
		case 49:
			m_board.push_back(std::unique_ptr<Event>(new Arm("Boule de feu", 15)));
			break;
		// cases avec Potions Standard
		case 7:
		case 13:
		case 31:
		case 33:
		case 39:
		case 43:
			m_board.push_back(std::unique_ptr<Event>(new Potion()));
			break;
		// cases avec Grande Potion
		case 28:
		case 41:
			m_board.push_back(std::unique_ptr<Event>(new Potion()));
			break;
		// case d'arrivée
		case 64 :
			m_board.push_back(std::unique_ptr<Event>(new Start("ARRIVEE")));
			break;
		// les autres cases du plateau sont vides
		default:
			m_board.push_back(std::unique_ptr<Event>(new EventEmpty));
		}

		std::cout << "Case " << i << " : ";
		m_board.at(i)->interact();
	}
	

	//========  ( Pour Mélange aléatoire )  =====================================
	//// je mélange mon tableau de jeu entre les cases départ et arrivee
	//std::random_shuffle(m_board.begin() + 1, m_board.end() - 1, myrandom);





	return m_board;
}


