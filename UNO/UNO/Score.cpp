#include <iostream>
#include "Score.h"
#include <fstream>
#include <string>
#include "Player.h"
#include <vector>
#include "Entry.h"
using namespace std;
Score::Score() {
	RestoreScore();
}
Score::~Score() {
	SaveScore();
}
void Score::RulesForScore() {
	
}
void Score::TrackScore(Entry& newEntry) {
	bool dup = false;
	for (int i = 0; i < entries.size(); i++) {
		Entry e = entries.at(i);
		if (!dup) {
			entries.push_back(newEntry);
		}
	}
}
void Score::SaveScore() {
ofstream fout("FinalScore.txt");
	if (!fout) {
		cout << "Error, File does not exist" << endl;
	}
	else {
		for (int i = 0; i < entries.size(); i++) {
			Entry e = entries.at(i);
			fout << e.username << " " << e.score << endl;
		}
	}
	fout.close();
}
void Score::RestoreScore() {
	ifstream fin("FinalScore.txt");
	if (!fin) {
		cout << "Error, File does not exist" << endl;
	}
	else {
		while (!fin.eof())
		{
			string username;
			int score;
			fin >> username >> score;
			if (username.length() > 0) 
			{
				Entry e(username, score);
				entries.push_back(e);
			}
		}
	}
}