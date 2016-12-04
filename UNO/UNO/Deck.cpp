#include <iostream>
#include "Deck.h"
#include "Cards.h"
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

void Deck::ShuffleDeck()
{
	srand(time(NULL));
	//shuffle the deck of cards
	for (int i; i < 108; i++) {
	Cards temp;

	int a = rand() % 107;
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
		cards[i];
		
	}
}