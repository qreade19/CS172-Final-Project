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

public:
	Cards cards[108];
	Deck();
	void ShuffleDeck();
	void DrawPile();
	void DiscardPile();
	void DealCards();
};
#endif // !1