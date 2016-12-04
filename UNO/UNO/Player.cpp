#include <iostream>
#include "Player.h"
#include <string>
#include <vector>
#include "Cards.h"
using namespace std;
Player::Player(string pName) {
	this->username = pName;
	this->PlayerHand;
}

string Player::getUsername() {
	return username;
}

void Player::addToHand()
{

}

void Player::playFromHand()
{

}

//shows players hand
int Player::getHand() {
	//vector<Cards> cards;
	return PlayerHand;
}