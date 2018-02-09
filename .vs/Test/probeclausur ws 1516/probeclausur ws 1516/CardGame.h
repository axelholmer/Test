#pragma once

#include "Player.h"
#include "Card.h"
#include <sstream>
#include <string>
#include <vector>
#include <array>
#include <ctime>
#include <stdlib.h>



#ifndef CardGame_H
#define CardGame_H
static const int nrP = 4;
static const int deckSize = 32;

class CardGame
{
public:

	CardGame();
	void shuffle();
	void deal();
	void play(bool);
	std::string showPlayers();
	std::string showResult();

	void printDeck(); //egen
	//~CardGame();
private: 
	//Player player1;
	std::array<Player, nrP> players; 
	std::array<Card, deckSize> deck;

	
};

#endif CardGame_H