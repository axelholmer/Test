#include "CardGame.h"
#include "Player.h"
#include "Card.h"
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

CardGame::CardGame()
	
{
	players = { 0, 1, 2, 3 };
	//player1 = 1;

	int kortIndex = 0;
	for (size_t suitCount = 0; suitCount <= 3; ++suitCount) {
		for (size_t faceCount = 0; faceCount <= 7; ++faceCount) {
			Face face1 = static_cast<Face>(faceCount);
			Suit suit1 = static_cast<Suit>(suitCount);
			deck[kortIndex] = Card(suit1, face1);
			++kortIndex;
		}

	}

}


void CardGame::shuffle()
{
	for (size_t kortNr = 0; kortNr < deckSize; ++kortNr) {
		int randomCard = rand() % 32;
		Card temp = deck[randomCard];
		deck[randomCard] = deck[kortNr];
		deck[kortNr] = temp;

	}




}

void CardGame::deal()
{
	/*
	for (int count = 0; count < 8; count++) {
		player1.push_back(deck[count]);
	}
	*/


	for (int count = 0; count < 8; count++) {
		players[0].push_back(deck[count]);
	}

	for (int count = 8; count < 16; count++) {
		players[1].push_back(deck[count]);
	}

	for (int count = 16; count = 24; count++) {
		players[2].push_back(deck[count]);
	}

	for (int count = 24; count = 32; count++) {
		players[3].push_back(deck[count]);
	}

}

void CardGame::play(bool)
{
}

std::string CardGame::showPlayers()
{
	return std::string();
}

std::string CardGame::showResult()
{
	stringstream out1;
	stringstream out2;
	stringstream out3;
	stringstream out4;

	//out1 << player1.toString();
		//players[0].toString();
	//out2 << players[1].toString();
	//out3 << players[2].toString();
	//out4 << players[3].toString();
	string outstream;
	return outstream = out1.str(); // + out2.str() + out3.str() + out4.str();
}

void CardGame::printDeck()
{
	for (int v = 0; v < 32; ++v)
	{

		//cout << deck[v].toString() << endl;

	}
	
	cout << players[0].size();
	//cout << endl << players[0].pop_back() << endl;

}

//CardGame::~CardGame()
//{
//}
