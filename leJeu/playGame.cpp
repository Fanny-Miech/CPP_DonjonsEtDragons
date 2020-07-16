#include "playGame.h"
#include <string>
#include <iostream>
#include "display.h"

using namespace std;

void PlayGame::playGame()
{
	play();
	replay();
}

void PlayGame::play()
{
	cout << "Je joue :)\n";
	//initPerso();
	//partGo();
}


void PlayGame::replay()
{
	string response;
	cout << "Voulez-vous rejouer ? (o/n)" << endl;
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