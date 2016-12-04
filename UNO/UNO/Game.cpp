#include <iostream>
#include "Game.h"
#include "Deck.h"
#include "Cards.h"
#include "Player.h"
#include "Score.h"
#include <vector>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;
void Game::WhoGoesFirst(){
	int Computer = 0;
	int MainPlayer = 1;
	srand(time(NULL));
	//2 is equal to number of players
	int turn = rand() % 2;
	cout << "Player " << turn << "goes first. \n";

}