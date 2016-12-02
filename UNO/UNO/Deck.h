#pragma once
#ifndef DECK_H
#define DECK_H
#include <iostream>
#include "Cards.h"
#include <vector>
class Deck : public Cards {
private:
	vector<Cards> cards;
public:
	void ShuffleDeck(int n);
	void DrawPile();
	void DiscardPile();
};
#endif // !1