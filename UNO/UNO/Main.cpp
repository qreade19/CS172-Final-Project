#include <iostream>
#include "Cards.h"
#include "Deck.h"
#include "Score.h"
#include "Player.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include "Game.h"
using namespace std;

int main()
{
	Game* UnoGame = new Game;
	UnoGame->Menu();

	delete UnoGame;
	return 0;
}

