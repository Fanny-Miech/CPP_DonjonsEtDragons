#include "playGame.h"
#include <string>
#include <iostream>
#include "display.h"
#include "Personnage.h"

using namespace std;

void PlayGame::playGame()
{
	play();
	replay();
}

void PlayGame::play()
{
	cout << "Je joue :)\n";
	Personnage *perso = new Personnage();
	perso->display();
	perso->changeArm("Hache double tranchant", 7);
	perso->display();
	delete perso;

	//initPerso();
	//partGo();
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
	}
	else {
		replay();
	}
}