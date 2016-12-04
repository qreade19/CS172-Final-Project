#pragma once
#ifndef SCORE_H
#define SCORE_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
class Score {
private: 
	int score1;
	int score2;
public:
	Score();
	~Score();
	void RulesForScore();
	void TrackScore();
	void RestoreScore();
	void SaveScore();
};
#endif // !SCORE_H
