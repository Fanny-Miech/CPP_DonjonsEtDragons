#include "playGame.h"
#include <string>
#include <iostream>
#include "display.h"
#include "Personnage.h"
#include "Warrior.h"
#include "Mage.h"
#include "Part.h"

using namespace std;

PlayGame::PlayGame() : m_perso(0)
{
	
}

PlayGame::~PlayGame()
{
}


//========================================================
//				M�thodes
//========================================================

void PlayGame::playGame()
{
	play();
	replay();
}

void PlayGame::play()
{	
	//initialiser un nouveau perso
	initPerso();
	m_perso->display();

	//lancer une partie de jeu
	Part part(m_perso);
	part.part();
}


void PlayGame::replay()
{
	string response;
	cout << "\nVeux-tu rejouer ? (o/n)" << endl;
	cin >> response;

	if (response._Equal("o")) {
		playGame();
	}
	else if (response._Equal("n")) {
		delete m_perso;
	}
	else {
		replay();
	}
}

void PlayGame::initPerso() {
	string warrior("Warrior"), mage("Mage");

	//On demande au joueur quel personnage Guerrier ou Magicien
	cout << "Avec quel personnage veux-tu jouer ? \nGuerrier (1) \nMagicien (2)" << endl;
	string response;
	cin >> response;
	cin.ignore();

	if (response._Equal("1") || response._Equal("2")) {

		//on demande au joueur un nom pour son perso
		cout << "Quel nom veux-tu lui donner ?" << endl;
		string name;
		cin >> name;
		cin.ignore();

		//Selon la r�ponse du joueur on instancie un guerrier ou un magicien
		if (response._Equal("1")) {
			//Warrior warrior(name);
			//&warrior == static_cast<Warrior*>(m_perso);

			m_perso = new Warrior(name);
		}
		else 
			//Mage mage(name);
			//&mage == static_cast<Mage*>(m_perso);

			m_perso = new Mage(name);
		
	}
	else initPerso();

}