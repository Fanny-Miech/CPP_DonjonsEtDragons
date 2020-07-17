#include "playGame.h"
#include <string>
#include <iostream>
#include "display.h"
#include "Personnage.h"
#include "Warrior.h"
#include "Mage.h"

using namespace std;

PlayGame::PlayGame() : m_perso(0)
{
	
}

PlayGame::~PlayGame()
{
}




void PlayGame::playGame()
{
	play();
	replay();
}

void PlayGame::play()
{
	//cout << "Je joue :)\n";
	//Personnage *perso = new Personnage();
	//perso->display();
	//perso->changeArm("Hache double tranchant", 7);
	//perso->display();
	//delete perso;


	//initPerso(); >>>> A creer : méthode dans personnage
	
	//*m_perso = m_perso->initPerso(); // avec initPerso() qui retourne un Perso
	initPerso();
	//m_perso = new Personnage();
	m_perso->display();


	//PartGo(&m_perso);  >>>>> class avec comme attributs un Personnage et un plateau de jeu
}


void PlayGame::replay()
{
	string response;
	cout << "\nVoulez-vous rejouer ? (o/n)" << endl;
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

	cout << "Avec quel personnage veux-tu jouer ? \nGuerrier (1) \nMagicien (2)" << endl;
	int response;
	cin >> response;
	cin.ignore();

	cout << "Quel nom veux-tu lui donner ?" << endl;
	string name;
	cin >> name;
	cin.ignore();

	if (response == 1) {
		m_perso = new Warrior(name);
	}
	else if (response == 2) {
		m_perso = new Mage(name);
	}
	else initPerso();

}