#ifndef ENTRY_H
#define ENTRY_H
#include <iostream>
#include <string>
using namespace std;
class Entry {
private:
	string username;
	int score;
public:
	Entry(string user, int s);
	string getUsername();
	void setUserName(string user);
	int getScore();
	void setScore(int score);
};
#endif // !ENTRY_H#pragma once
