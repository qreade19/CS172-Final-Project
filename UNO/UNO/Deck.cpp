#include <iostream>
#include "Deck.h"
#include "Cards.h"
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;
void Deck::ShuffleDeck(int n)
{
	srand(time(0));
	//shuffle the deck of cards
	for (int i; i < getTotalNumberOfCards(); i++) {
	int temp;
	int a = rand() % getTotalNumberOfCards();
	temp = cards[i];
	cards[i] = cards[a];
	cards[a] = temp;
	}
}
void Deck::DrawPile() {

}
void Deck::DiscardPile() {

}
void Deck::DealCards() {
	//the dealing of seven cards to each player for a new game
	for (int i = 0; i < 7; i++) {
		string color = color[cards[i]];

		cout << color << 
	}
}