#pragma once

#include <array>
#include <string>
#include <vector>

#ifndef Card_H
#define Card_H

enum Face { SIEBEN = 0, ACHT, NEUN, ZEHN, BUBE, DAME, KOENIG, ASS };
enum Suit { KARO = 0, HERZ, PIK, KREUZ };



class Card
{
public:
	
	Card(Suit = KARO, Face = SIEBEN);
	std::string toString();
	//~Card();
	int getPoints();

private:	
	Suit suit;
	Face face;
	int points;


};	


#endif Card_H