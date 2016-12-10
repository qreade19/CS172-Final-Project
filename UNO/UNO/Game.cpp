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
#include <stack>
using namespace std;

int Game::Menu() {
	string answer;
	cout << "Welcome to the game UNO." << endl;
	//gives the player a decision on whether or not they do want to play UNO
	cout << "Would you like to play? (Yes or No) ";
	cin >> answer;
	if (answer == "Yes")
	{
		Deck d;
		Player* player1;
		Player player2;
		
		Cards card1;
	//	player1->addToHand();
		//cout << "Player one plays " << card1 << endl;
		WhoGoesFirst();
		d.ShuffleDeck();
		d.DealCards();
		d.DealCards();
		Score s;
		Entry e("Player 1",10);
		s.TrackScore(e);
		
		return 0;
	}
	else
	{// this code stays this small
		cout << "See you next time. " << endl;
		return 0;
	}
	return 0;
}

void Game::WhoGoesFirst(){
	int Player2 = 0;
	int MainPlayer = 1;
	//2 is equal to number of players
	int turn = rand() % 2;
	//cout << "Player " << turn << " goes first. \n";
	if (turn == 1)
	{
		//this is where the main code for the program will be. 
		cout <<"Player 1 goes first. \n";

		}
	else
	{
		cout << "Player 2 goes first. \n";
	}

}