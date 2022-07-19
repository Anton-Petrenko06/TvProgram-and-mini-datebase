#pragma once
#include <iostream>
#include <string>
using namespace std;
class Frames
{
protected:
	string name;
public:
	Frames();
	Frames(string _name);

	void setName(string _name);
	string getName()const;
	void showInfo()const;
};


