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
	TotalNumberOfCards = 108;
}
void Deck::ShuffleDeck()
{
	srand(time(NULL));
	//shuffle the deck of cards
	for (int i; i < 108; i++) {
	Cards temp;
	//random_shuffle()
	int a = rand() % 108;
	temp = cards[i];
	cards[i] = cards[a];
	cards[a] = temp;
	}
}
//returns the total number of cards
int Deck::getTotalNumberOfCards()
{
	return TotalNumberOfCards;
}

void Deck::setTotalNumberOfCards(int numCards)
{
	//actual total number of cards in the deck
	TotalNumberOfCards = numCards;
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