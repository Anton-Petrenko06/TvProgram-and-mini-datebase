#pragma once
#include "TvProgram.h"
class Movie : public TvProgram
{
	string directBox;
	int year;
public:
	Movie();
	Movie(string _name, Time_ _time, string _DirectBox,int _year);
	void setDirectBox(string _directBox);
	void setYear(int _year);
	string getDirectBox()const;
	int getYear()const;
	string toString();
	void showInfo()const;
};

