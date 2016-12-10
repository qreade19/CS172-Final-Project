#include <iostream>
#include "Cards.h"
#include <vector>
#include <string>
#include "Player.h"
using namespace std;
Cards::Cards() {
	color = "red";
	cardNumber = 0;
}
Cards::Cards(string color, int number)
{
	this->color = color;
	this->cardNumber = number;

}
int Cards::getcardNumber() {
	return cardNumber;
}
void Cards::setcardNumber(int number) {
	cardNumber = number;
}
ostream & operator <<(ostream& out,Cards& cards)
{	
	string changedcolor;
	switch (cards.specialcards)
	{
	case DrawTwo: out << "DrawTwo";
		break;
	case Skip: out << "Skip";
		break;
	case DrawFour:
		cout << "Draw Four";
		for (int  i = 0; i < 4; i++) {
			Player p;
		//	p.addToHand(i);
			cout << "What color would you like the change the pile to? (Red, Blue, Green or Yellow)";
			cin >> changedcolor;
		}
		break;
	case Reverse: out << "Reverse";
		break;
	case Wild : out << "Wild";

			cout << "What color would you like the change the pile to? (Red, Blue, Green or Yellow)";
			cin >> changedcolor;
		break;
	}
	return out;
}