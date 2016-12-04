#include <iostream>
#include "Cards.h"
#include <vector>
#include <string>
#include "Player.h"
using namespace std;
Cards::Cards()
{
	TotalNumberOfCards = 108;

	color[0] = "Red";
	color[1] = "Blue";
	color[2] = "Yellow";
	color[3] = "Green";
	color[4] = "Black"; //draw four and color change are the only black cards
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
	vector <Player> hand;
	int wild;
	switch (wild)
	{
	case DrawTwo:
		cout << "Draw Two";
		for (int i = 0; i < 2; i++) {
			
		}
		break;
	case Skip:
		cout << "Skip";
		break;
	case DrawFour:
		cout << "Draw Four";
		for (int i = 0; i < 4; i++) {

		}
		break;
	case Reverse:
		cout << "Reverse";
		break;
	case ChangeColor:
		cout << "Change Color";
		break;
	}
	return NULL;
}