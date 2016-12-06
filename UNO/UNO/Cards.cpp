#include <iostream>
#include "Cards.h"
#include <vector>
#include <string>
#include "Player.h"
using namespace std;
Cards::Cards()
{
	color[0] = "Red";
	color[1] = "Blue";
	color[2] = "Yellow";
	color[3] = "Green";
	color[4] = "Black"; //draw four and color change are the only black cards
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
	string changedcolor;
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
		cout << "What color would you like the change the pile to? (Red, Blue, Green or Yellow)";
		cin >> changedcolor;

		break;
	}
	return NULL;
}