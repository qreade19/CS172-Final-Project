#include <iostream>
#include "Player.h"
#include <string>
#include <vector>
#include "Cards.h"
using namespace std;
Player::Player() {
	this->Username;
	this->playerHand;
}

string Player::getUsername() {
	return Username;
}

void Player::addToHand(Cards* addCard)
{
	playerHand[numCards] = addCard;
	numCards++;
}

void Player::playFromHand()
{

}

Player& Player::operator+(Cards* c) {
	cards.push_back(c);
	return *this;
}

Player& Player::operator+=(Cards* c) {
	return *this + c;
}
//shows players hand
Cards* Player::getHand() 
{
	//vector<Cards> cards;
	return playerHand[1];
}

void Player::setVictory()
{
	if (playerHand.size() == 0)
		victory = true;
}