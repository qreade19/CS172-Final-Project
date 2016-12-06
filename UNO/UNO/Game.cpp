#include <iostream>
#include "Game.h"
#include "Deck.h"
#include "Cards.h"
#include "Player.h"
#include "Score.h"
#include <vector>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "Deck.h"
int Game::Menu() {
	string answer;
	cout << "Welcome to the game UNO." << endl;
	//gives the player a decision on whether or not they do want to play UNO
	cout << "Would you like to play? (Yes or No) ";
	cin >> answer;
	if (answer == "Yes")
	{
		cout << "Ok lets begin. " << endl;
		//this is where the main code for the program will be. 
		Deck d;
		d.ShuffleDeck();
		d.DealCards();
	}
	else
	{// this code stays this small
		cout << "See you next time. " << endl;
		return 0;
	}
	return 0;
}
using namespace std;
void Game::WhoGoesFirst(){
	int Computer = 0;
	int MainPlayer = 1;
	srand(time(NULL));
	//2 is equal to number of players
	int turn = rand() % 2;
	cout << "Player " << turn << "goes first. \n";

}