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
class Deck
{
private:
	int topCard;
	vector<Cards*> deck;
public:
	bool empty();
	//Cards cards[108];
	Deck();
	void ShuffleDeck();
	void DiscardPile();
	void DealCards();
	Cards *ptr_deck;
};
#endif // !1