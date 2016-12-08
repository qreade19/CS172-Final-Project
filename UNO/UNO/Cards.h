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
	static const int DrawTwo=20;
	static const int Skip=21;
	static const int DrawFour=22;
	static const int Reverse=23;
	static const int ChangeColor=24;
	Cards(string color, int number);
	string setSpecialCards();
};
#endif // !CARDS_H
#pragma once
