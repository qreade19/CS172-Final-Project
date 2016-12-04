#include <iostream>
#include "Score.h"
#include <fstream>
#include <string>
#include "Player.h"
#include <vector>
using namespace std;
Score::Score() {
	RestoreScore();
}
Score::~Score() {
	SaveScore();
}
void Score::RulesForScore() {

}
void Score::TrackScore() {
	
}
void Score::SaveScore() {
ofstream fout("FinalScore.txt");
	if (!fout) {
		cout << "Error, File does not exist" << endl;
	}
	else {

	}
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
			if (username.length() > 0) {
				//Player p(username, score);
			}
		}
	}
	
}