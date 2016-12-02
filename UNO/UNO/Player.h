#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;
class Player {
private:
	string username;
	int PlayerHand;
public:
	Player();
	string getUsername();
	int getHand();
};
#endif // !PLAYER_H
#pragma once
