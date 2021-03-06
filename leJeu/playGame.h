#pragma once
#include "Personnage.h"

class PlayGame {

public :
	PlayGame();
	~PlayGame();

	/**
	* \brief fonction qui lance le jeu
	*/
	void playGame();

	/**
	* \brief fonction qui lance une partie
	*/
	void play();

	/**
	* \brief fonction qui demande au joueur s'il veut faire une nouvelle partie
	*/
	void replay();

	void initPerso();


private : 
	Personnage *m_perso;

};

