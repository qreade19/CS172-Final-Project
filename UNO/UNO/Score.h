#pragma once
#ifndef SCORE_H
#define SCORE_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Entry.h"
using namespace std;
class Score {
private: 
	vector <Entry> entries;
	int score1;
	int score2;
public:
	Score();
	~Score();
	void RulesForScore();
	void TrackScore(Entry& newEntry);
	void RestoreScore();
	void SaveScore();
};
#endif // !SCORE_H
