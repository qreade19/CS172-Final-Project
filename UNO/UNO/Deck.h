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
	vector<Cards*> deck;
	vector<Cards*> discard;
public:
	Deck();
	void ShuffleDeck();
	void DiscardPileStart();
	void DealCards(stack<Cards*>& deck, Player addToHand[]);
};
#endif // !1