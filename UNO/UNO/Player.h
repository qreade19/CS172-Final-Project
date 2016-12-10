#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Cards.h"
#include <string>
#include <vector>

using namespace std;
class Player {
private:
	int numCards;
	int currentCards;
	string Username;
	vector<Cards*> playerHand;
	bool victory;
	vector<Cards*> cards;
public:
	Player();
	Player& operator+(Cards* c);
	Player& operator+=(Cards* c);
	string getUsername();
	Cards* getHand();
	void addToHand(Cards* addCard);
	void playFromHand();
	void setVictory();
};
#endif // !PLAYER_H
#pragma once
