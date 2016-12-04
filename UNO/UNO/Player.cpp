#include <iostream>
#include "Player.h"
#include <string>
#include <vector>
#include "Cards.h"
using namespace std;
Player::Player(string pName) {
	this->username = pName;
	this->playerHand;
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
char Player::getHand() {
	//vector<Cards> cards;
	return playerHand;
}

void Player::setVictory()
{
	if (playerHand.size == 0)
		victory = true;
}