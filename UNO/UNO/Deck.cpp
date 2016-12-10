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
	//shuffle the deck of cards
	for (int i=0; i < 108; i++) {
	Cards* temp;
	int a = rand() % 107;
	temp = deck[i];
	deck[i] = deck[a];
	deck[a] = temp;
	}

}
//returns the total number of cards
bool Deck::empty() {
	return topCard<=0;
}
void Deck::DiscardPile() 
{
	
}

void Deck::DealCards() {
	vector <char> ddeck;
	//the dealing of seven cards to each player for a new game
	for (int i = 0; i < 7; i++) {	
		Player d;
		//d.addToHand(i);
		ddeck.push_back(i);
		
	}
}