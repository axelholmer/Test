#include <iostream>
#include "Card.h"
#include <sstream>
#include "Player.h"
#include "CardGame.h"
#include <ctime>
#include <stdlib.h>



using namespace std;




int main()
{
	
	/*
	Card kort1(PIK, ASS);
	Card kort2(PIK, ASS);
	Card kort3(PIK, DAME);


//	cout << spel.toString() << endl;


	
	Player player1;

	player1.push_back(kort1);
	player1.push_back(kort2);
	player1.push_back(kort3);
	
	cout << player1.toString() << endl;
	*/

	/*
	Card test;

	test = player1.back();
	cout << player1.toString() << endl << test.toString();
	*/
	srand(static_cast<unsigned int>(time(nullptr)));
	
	CardGame beta;
	beta.shuffle();
	
	beta.deal();
	
	beta.showResult();
	
	
	





}