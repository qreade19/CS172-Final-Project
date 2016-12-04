#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;
class Player {
private:
	string username;
	vector<char> playerHand;
	bool victory;
public:
	Player(string pName);
	string getUsername();
	char getHand();
	void addToHand();
	void playFromHand();
	void setVictory();
};
#endif // !PLAYER_H
#pragma once
