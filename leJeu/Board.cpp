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

//=================  ( Pour Melange aleatoire )  =========
//// g�n�rer un nombre al�atoire
//int myrandom(int i) { return std::rand() % i; };

vector<Event> Board::m_board()
{
	//============ ( Pour M�lange aleatoire )  ==============
	//std::srand(unsigned(std::time(0)));

	
	
	//===========================================================================
	//						MON PROBLEME
	//
	//J'ai un vector d'Event. Event est une Classe Base. 
	//Je remplis mon vector avec EventEmpty d�riv�e de Event 
	//Je cherche � acceder � la m�thode EventEmpty::interact()
	//mais j'appelle toujours Event::interact() 
	//
	//==========================================================================


	// je remplis mon plateau de jeu avec des EventEmpty
	std::vector<Event> m_board (m_nbCase);
	for (int i = 0; i < m_board.size(); ++i)
	{
		//=============================================================================
		//j'ai essay� la d�rivation de type avec pointeur :
		//Event* event;
		//EventEmpty* eventEmpty;
		//event = eventEmpty;
		//m_board.at(i) = *event;


		m_board.at(i) = EventEmpty();
	}

	//========  ( Pour M�lange al�atoire )  =====================================
	//// je m�lange mon tableau de jeu entre les cases d�part et arrivee
	//std::random_shuffle(m_board.begin() + 1, m_board.end() - 1, myrandom);



	// j'affiche le contenu de mon plateu de jeu
	std::cout << "PLATEAU DE JEU :" << endl;

	//===================================================================================
	// j'ai essay� de cr�er un it�rateur it 
	// et de parcourir mon tableau pour interagir avec chaque case ("affiche la nature de chaque case")

	//for (std::vector<Event>::iterator it = m_board.begin(); it != m_board.end(); ++it)
	//	it->interact(*it); // j'ai aussi essay� de passer par une m�thode interm�diaire dans Event qui renvoie l'interact() de la classe d�riv�e

	// Mais je crois que it est un Event => J'appelle donc la Event::interact();


	//=======================================================================================
	//J'ai donc essay� sans it�rateur
	for (int i = 0; i < m_board.size(); ++i) {
		std::cout << "Case " << i << " : ";

		if (i == 0) {
			std::cout << "DEPART" << std::endl;
		}
		else if (i == m_board.size() - 1)
		{
			std::cout << "ARRIVEE" << std::endl;
		}
		else
		{
			m_board.at(i).interact(); // mais toujours Event::interact()
		}
	}

	//=======================================================================================
	//J'ai aussi essay� de faire de m_board un vector de r�f�rences d'Event....
	//Qu'est-ce que je vois pas ???
	//Je situe le probl�me entre Event, EventEmpty et Board


	//===================================
	//		*   * ***** *     ****
	//		*   * *     *     *   *
	//		***** ****  *     ****
	//		*   * *     *     * 
	//		*   * ***** ***** *
	//===================================
	

	
	
	return m_board;
}

//Event Board::getEvent(int i) 
//{
//	return m_board.at(i);
//}
