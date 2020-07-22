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
//// générer un nombre aléatoire
//int myrandom(int i) { return std::rand() % i; };

vector<Event> Board::m_board()
{
	//============ ( Pour Mélange aleatoire )  ==============
	//std::srand(unsigned(std::time(0)));

	
	
	//===========================================================================
	//						MON PROBLEME
	//
	//J'ai un vector d'Event. Event est une Classe Base. 
	//Je remplis mon vector avec EventEmpty dérivée de Event 
	//Je cherche à acceder à la méthode EventEmpty::interact()
	//mais j'appelle toujours Event::interact() 
	//
	//==========================================================================


	// je remplis mon plateau de jeu avec des EventEmpty
	std::vector<Event> m_board (m_nbCase);
	for (int i = 0; i < m_board.size(); ++i)
	{
		//=============================================================================
		//j'ai essayé la dérivation de type avec pointeur :
		//Event* event;
		//EventEmpty* eventEmpty;
		//event = eventEmpty;
		//m_board.at(i) = *event;


		m_board.at(i) = EventEmpty();
	}

	//========  ( Pour Mélange aléatoire )  =====================================
	//// je mélange mon tableau de jeu entre les cases départ et arrivee
	//std::random_shuffle(m_board.begin() + 1, m_board.end() - 1, myrandom);



	// j'affiche le contenu de mon plateu de jeu
	std::cout << "PLATEAU DE JEU :" << endl;

	//===================================================================================
	// j'ai essayé de créer un itérateur it 
	// et de parcourir mon tableau pour interagir avec chaque case ("affiche la nature de chaque case")

	//for (std::vector<Event>::iterator it = m_board.begin(); it != m_board.end(); ++it)
	//	it->interact(*it); // j'ai aussi essayé de passer par une méthode intermédiaire dans Event qui renvoie l'interact() de la classe dérivée

	// Mais je crois que it est un Event => J'appelle donc la Event::interact();


	//=======================================================================================
	//J'ai donc essayé sans itérateur
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
	//J'ai aussi essayé de faire de m_board un vector de références d'Event....
	//Qu'est-ce que je vois pas ???
	//Je situe le problème entre Event, EventEmpty et Board


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
