#include <iostream>
#include "Deck.h"
#include "Cards.h"
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

Deck::Deck() 
{
	for (int i = 0; i < 4; i++)
	{
		string temp[4] = { "Red", "Blue", "Green", "Yellow" };
		Cards* c = new Cards(temp[i], 0);
		deck.push_back(c);
		delete c;
	}
	for (int i = 1; i < 13; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			string temp[4] = { "Red", "Blue", "Green", "Yellow" };
			Cards* c = new Cards(temp[j], i);
			for (int k = 0; k < 2; k++)
			{
				deck.push_back(c);
			}
			delete c;
		}
	}
	for (int i = 13; i < 15; i++)
	{
		Cards* c = new Cards("Black", i);
		for (int j = 0; j < 4; j++)
		{
			deck.push_back(c);
		}
		delete c;
	}
}
void Deck::ShuffleDeck()
{
	srand(time(NULL));
	//shuffle the deck of cards
	for (int i=0; i < 108; i++) {
	Cards* temp;
	//random_shuffle()
	int a = rand() % 108;
	temp = deck[i];
	deck[i] = deck[a];
	deck[a] = temp;
	}
}
//returns the total number of cards

void Deck::DiscardPileStart() 
{
	Cards* temp = deck.back;
	discard.push_back(temp);
}

void Deck::DealCards(stack<Cards*>& deck, Player addToHand[]) {
	//the dealing of seven cards to each player for a new game
	for (int i = 0; i < 7; i++) {
		for (int p = 0; p < 2; p++) {
		/*	if (TotalNumOfCards < 1) {
				cout << "Ran out of cards.\n";
			}*/
			//NumStockPile--;
			addToHand[p] + deck.top();
			deck.pop();
		}
		
	}
}