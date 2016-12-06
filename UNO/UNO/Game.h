#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "Deck.h"
#include "Cards.h"
#include "Player.h"
#include "Score.h"
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class Game {
public:
	int Menu();
	void WhoGoesFirst();
};
#endif // !GAME_H#pragma once
