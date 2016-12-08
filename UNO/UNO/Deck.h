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
class Deck
{
private:
	vector<Cards*> deck;
public:
	Player** player;
	Cards** stock;
	unsigned NumStockPile;
	Deck();
	void ShuffleDeck();
	void DiscardPile();
	void DealCards();
};
#endif // !1