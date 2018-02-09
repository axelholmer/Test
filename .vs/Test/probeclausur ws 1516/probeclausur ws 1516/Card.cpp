#include "Card.h"
#include <sstream>
#include <string>

using namespace std;

Card::Card(Suit suit1, Face face1)
	: suit(suit1), face(face1)
{

	if(face == SIEBEN) 
		points = 0;
	
	if (face == ACHT)
		points = 0;

	if (face == NEUN)
		points = 0;

	if (face == ZEHN)
		points = 10;

	if (face == BUBE)
		points = 2;

	if (face == DAME)
		points = 3;

	if (face == KOENIG)
		points = 4;

	if (face == ASS)
		points = 11;

}

std::string Card::toString()
{
	stringstream out;

	out << suit << ", " << face << " points: " << points;
	
	string outstream;
	
	return outstream = out.str();
}



int Card::getPoints()
{
	return points;
}

//Card::~Card()
//{
//}