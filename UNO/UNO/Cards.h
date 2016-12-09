#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <string>
using namespace std;

class Cards {
private:
	string color;
	int cardNumber;

public:
	static const int DrawTwo=10;
	static const int Skip=11;
	static const int DrawFour=14;
	static const int Reverse=12;
	static const int ChangeColor=13;
	Cards(string color, int number);
	string setSpecialCards();
};
#endif // !CARDS_H
#pragma once
