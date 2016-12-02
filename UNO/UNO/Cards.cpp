#include <iostream>
#include "Cards.h"
using namespace std;
Cards::Cards()
{
	TotalNumberOfCards = 108;
	color[0] = "Red";
	color[1] = "Blue";
	color[2] = "Yellow";
	color[3] = "Green";
	color[4] = "Black";
}

//returns the total number of cards
int Cards::getTotalNumberOfCards()
{
	return TotalNumberOfCards;
}

void Cards::setTotalNumberOfCards(int numCards)
{
	//actual total number of cards in the deck
	TotalNumberOfCards = numCards;
}

//returns the color of the cards
string Cards::getColor(int index)
{
	return color[index];
}

void Cards::setColor(string newColor, int index)
{
	//array of the four main colors and the wild black card
	color[index] = newColor;
}

string Cards::getSpecialCards()
{
	return SpecialCard;
}

string Cards::setSpecialCards()
{
	return NULL;
}