#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <string>
using namespace std;

class Cards {
private:
	string cardNames;
	string color[5];
	int cardNumber;
	string SpecialCard;
	int TotalNumberOfCards;

public:
	Cards();
	int getTotalNumberOfCards();
	void setTotalNumberOfCards(int numCards);
	string getColor(int index);
	void setColor(string newColor, int index);
	string getSpecialCards();
	string setSpecialCards();

};
#endif // !CARDS_H
#pragma once
