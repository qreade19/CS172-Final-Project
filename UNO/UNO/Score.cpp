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
	vector < char> PlayersHand;
	if (PlayersHand.size() == 1) {
		cout << "UNO!" << endl;
	}

}int Score::getScore() {
	return score;
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
			string u;
			int s;
			fin >> u >> s;
			if (u.length() > 0) 
			{
				Entry e(u, s);
				entries.push_back(e);
			}
			
		}
	}
	fin.close();
}