#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Cards.h"
#include <string>
using namespace std;
class Player {
private:
	Cards** cards;
	int numcards;
	int CurrentCards;
	string username;
	int PlayerHand;
public:
	Player(string pName);
	string getUsername();
	int getHand();
	void addToHand(Cards* addCard);
	void playFromHand();
};
#endif // !PLAYER_H
#pragma once
