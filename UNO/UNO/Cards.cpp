#include <iostream>
#include "Cards.h"
#include <vector>
#include <string>
#include "Player.h"
using namespace std;

Cards::Cards(string color, int number)
{
	this->color = color;
	this->cardNumber = number;
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
			Player p;
			//p.addToHand(i);
		}
		break;
	case Skip:
		cout << "Skip";
		break;
	case DrawFour:
		cout << "Draw Four";
		for (int i = 0; i < 4; i++) {
			Player p;
		//	p.addToHand(i);

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