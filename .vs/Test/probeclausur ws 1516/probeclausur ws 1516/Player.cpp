#include "Player.h"
#include "Card.h"
#include <sstream>
#include <string>
#include <vector>


using namespace std;

Player::Player(int id1)
	: id(id1)
{
	sumOfPoints = 0;
}

void Player::clearPlayerDeck()
{
}

void Player::push_back(Card sa)
{
	playerDeck.push_back(sa);

}

void Player::pop_back()
{
	playerDeck.pop_back();

}

Card Player::back()
{
	return playerDeck.back();
}

int Player::size()
{
	return 0;
}

void Player::clearSumOfPoints()
{
}

void Player::addPoints(int)
{
}

std::string Player::toString()
{
	stringstream out;

	out << playerDeck.back().toString() << endl << playerDeck[1].toString() << endl << playerDeck[2].toString()
		<< endl << playerDeck[3].toString() << endl << playerDeck[4].toString() << endl << playerDeck[5].toString() <<
		endl << playerDeck[6].toString() << playerDeck[7].toString() << endl;
		
	string outstream;

	return outstream = out.str();
}

std::vector<Card> Player::getDeck()
{
	
	return playerDeck;
}


//Player::~Player()
