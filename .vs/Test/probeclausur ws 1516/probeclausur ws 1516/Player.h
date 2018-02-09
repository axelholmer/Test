#pragma once


#include "Card.h"
#include <sstream>
#include <string>
#include <vector>


#ifndef Player_H
#define Player_H

class Player
{
public:
	Player(int = 0);
	void clearPlayerDeck();
	void push_back(Card);
	void pop_back();
	Card back();
	int size();
	void clearSumOfPoints();
	void addPoints(int);
	std::string toString();
	std::vector<Card> getDeck();
	//~Player();

private:
	int id; 
	int sumOfPoints;
	std::vector<Card>playerDeck;
};


#endif Player_H