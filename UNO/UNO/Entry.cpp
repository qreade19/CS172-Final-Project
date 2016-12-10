#include <iostream>
#include <string>
#include "Entry.h"
using namespace std;

	Entry::Entry(string user, int s) {
		username = user;
		score = s;
	}

	string Entry::getUsername()
	{
		return username;
	}

	void Entry::setUserName(string user)
	{
		username = user;
	}

	int Entry::getScore()
	{
		return score;
	}

	void Entry::setScore(int score)
	{
		this->score = score;
	}