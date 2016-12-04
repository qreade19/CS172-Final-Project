#include <iostream>
#include "Deck.h"
#include "Cards.h"
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

Deck::Deck() {
	stock = 0;
	NumStockPile = 0;
}
void Deck::ShuffleDeck()
{
	srand(time(NULL));
	//shuffle the deck of cards
	for (unsigned int i; i < 108; i++) {
	Cards temp;
	//random_shuffle()
	int a = rand() % 108;
	temp = cards[i];
	cards[i] = cards[a];
	cards[a] = temp;
	}
}

void Deck::DiscardPile() {

}

void Deck::DealCards() {
	//the dealing of seven cards to each player for a new game
	for (int i = 0; i < 7; i++) {
		for (int p = 0; p < 2; p++) {
			if (NumStockPile < 1) {
				cout << "Ran out of cards.\n";
			}
			NumStockPile--;
			player[p]->addToHand(stock[NumStockPile]);
			cards[NumStockPile];
		}
		
	}
}