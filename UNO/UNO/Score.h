#pragma once
#ifndef SCORE_H
#define SCORE_H
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class Score {
private: 

public:
	Score();
	~Score();
	void RulesForScore();
	void TrackScore();
	void RestoreScore();
	void SaveScore();
};
#endif // !SCORE_H
