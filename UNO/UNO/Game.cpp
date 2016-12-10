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
	string name;
	int choice;
	cout << "Welcome to the game UNO." << endl;
	//gives the player a decision on whether or not they do want to play UNO
	cout << "Would you like to play? (Yes or No) ";
	cin >> answer;
	if (answer == "Yes")
	{
		cout << "Would you like to hear the rules? (1 for yes, 2 for no) ";
		cin >> choice;
		if (choice == 1)
		{
			cout << "Normal UNO utilizes a point system where the player to lose all of their cards gains points from the other player's remaining hands." << endl;
			cout << "This game, however, is a sudden-death version of the game where the one to lose all their cards at all wins." << endl;
			cout << "It's much quicker that way. :)" << endl;
			cout << "The game begins with each player having 7 cards and 1 card from the top of the deck on the discard pile." << endl;
			cout << "During your turn you can discard a card from your hand that matches the one on the top of the discard pile in either color or number/symbol." << endl;
			cout << "For example, if a blue 3 is on top of the discard pile, you can either place another blue card or another 3 on top of it." << endl;
			cout << "If you can't discard or choose not to, you must draw from the deck until you can. Either way, your turn is over the moment you discard." << endl;
			cout << "Should you end up with only one card left, you must call 'UNO' by pressing u. Otherwise, you will have to draw 2 more cards." << endl;
			cout << "There are 5 special cards you must watch out for:" << endl;
			cout << "Draw 2: Forces the opponent to draw 2 extra cards." << endl;
			cout << "Wild: Can become the color of your choosing when played." << endl;
			cout << "Wild Draw 4: Same ability as the Wild with the extra bonus of forcing the opponent to draw 4 extra cards." << endl;
			cout << "Skip and Switch: These two would normally skip the opponent's turn, but for the sake of time they act like any other number." << endl;
			cout << "Like the numbers, a special card can only match with another of the same color or type." << endl;
			cout << "When a wild's color is chosen, it remains that way for the next card in line." << endl;
			cout << "Should any of the special cards be chosen for the staring card, it will be shuffled back into the dack and a new card will be chosen." << endl;
			cout << "Got all that? Good. Press 2 to begin the game. ";
			cin >> choice;
		}
		else if (choice == 2)
		{
			cout << "Ok lets begin. " << endl;
			/*cout << "What would you like your username to be? ";
			cin >> name;
			name == "Player 1";
			cout << "Ok, " << name << " lets begin. \n";*/
			//this is where the main code for the program will be. 
			Deck d;
			//stack<Cards*> deck;
			Player players[2];
			//d.ShuffleDeck();
			WhoGoesFirst();
			//d.DealCards(deck,players);
			Score s;
			Entry e(" ", 1);
			s.TrackScore(e);
			return 0;
		}
		else
		{
			cout << "If you think this makes you look rebellious and edgy, stop. It's not working." << endl;
			cout << "Try again.";
			cin >> choice;
		}
	}
	else
	{// this code stays this small
		cout << "See you next time. " << endl;
		return 0;
	}
	return 0;
}
void Game::WhoGoesFirst(){
	int Computer = 0;
	int MainPlayer = 1;
	srand(time(NULL));
	//2 is equal to number of players
	int turn = rand() % 2;
	//cout << "Player " << turn << " goes first. \n";
	if (turn == 1)
	{
		cout <<"Player 1 goes first. \n";

		}
	else
	{
		cout << "Computer goes first. \n";
	}

}