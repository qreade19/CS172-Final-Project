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

Deck::Deck() {
	TotalNumberOfCards = 108;
}
void Deck::ShuffleDeck()
{
	srand(time(NULL));
	//shuffle the deck of cards
	for (int i=0; i < TotalNumberOfCards; i++) {
	Cards temp;
	//random_shuffle()
	int a = rand() % TotalNumberOfCards;
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

void Deck::DealCards(stack<Cards*>& deck, Player addToHand[]) {
	//the dealing of seven cards to each player for a new game
	for (int i = 0; i < 7; i++) {
		for (int p = 0; p < 2; p++) {
			if (TotalNumberOfCards < 1) {
				cout << "Ran out of cards.\n";
			}
			else {
				//TotalNumberOfCards--;
				addToHand[p] += deck.top();
				deck.pop();
			}
		}
		
	}
}