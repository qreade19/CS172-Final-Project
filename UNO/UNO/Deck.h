#pragma once
#ifndef DECK_H
#define DECK_H
#include <iostream>
#include "Cards.h"
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>
#include "Player.h"
#include <stack>
class Deck : public Cards {
private:
	vector<char> deck;
	int TotalNumberOfCards;
public:

	unsigned NumStockPile;
	Cards cards[108];
	Deck();
	int getTotalNumberOfCards();
	void setTotalNumberOfCards(int numCards);
	void ShuffleDeck();
	void DiscardPile();
	void DealCards(stack<Cards*>& deck, Player addToHand[]);
};
#endif // !1