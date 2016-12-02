#include <iostream>
#include "Player.h"
#include <string>
#include <vector>
#include "Cards.h"
using namespace std;
Player::Player() {
	this->username;
	this->PlayerHand;
}
string Player::getUsername() {
	return username;
}
int Player::getHand() {
	vector<Cards> cards;
	return PlayerHand;
}