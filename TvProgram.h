#pragma once
#include <iostream>
#include <string>
#include "Time.h"
class TvProgram
{
protected:
	string name;
	Time_ time;
public:
	TvProgram();
	TvProgram(string _name,Time_ _time);
	void setName(string _name);
	string getName()const;
	void setTime(Time_ _time);
	Time_ getTime();
	void showInfo()const;
};

