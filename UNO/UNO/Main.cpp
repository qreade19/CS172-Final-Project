#include <iostream>
#include "Cards.h"
#include "Deck.h"
#include "Score.h"
#include "Player.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include "Game.h"
using namespace std;


int main()
{
	string answer;
	cout << "Welcome to the game UNO." << endl;
	//gives the player a decision on whether or not they do want to play UNO
	cout << "Would you like to play? (Yes or No) ";
	cin >> answer;
	if (answer == "Yes")
	{
		cout << "Ok lets begin. " << endl;
		//this is where the main code for the program will be. 
		Game* UnoGame = new Game;
		//UnoGame.WhoGoesFirst();
		delete UnoGame;
		return 0;
	}
	else
	{// this code stays this small
		cout << "See you next time. " << endl;
		return 0;
	}
	return 0;
}

