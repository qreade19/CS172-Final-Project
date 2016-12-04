#pragma once
#ifndef DECK_H
#define DECK_H
#include <iostream>
#include "Cards.h"
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>
class Deck : public Cards {
private:
	vector<char> deck;
public:
	Cards cards[108];
	Deck();
	void ShuffleDeck();
	void DiscardPile();
	void DealCards();
};
#endif // !1