#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Cards.h"
#include <string>
#include <vector>

using namespace std;
class Player {
private:
	Cards** cards;
	int numCards;
	int currentCards;
	string username;
	vector<char> playerHand;
	bool victory;
public:
	Player(string pName);
	string getUsername();
	char getHand();
	void addToHand(Cards* addCard);
	void playFromHand();
	void setVictory();
};
#endif // !PLAYER_H
#pragma once
