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
	int choice;
	cout << "Choose a card to discard: ";
	cin >> choice;
}

Player& Player::operator+(Cards* c) {
	cards.push_back(c);
	return *this;
}

Player& Player::operator+=(Cards* c) {
	return *this + c;
}
//shows players hand
void Player::getHand() 
{
	cout << "Your hand is:" << endl;
	for (int i = 0; i < playerHand.size(); i++)
	{
		cout << playerHand[i] << ", ";
	}
}

void Player::setVictory()
{
	if (playerHand.size() == 0)
		victory = true;
}