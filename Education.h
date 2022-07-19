#pragma once
#include "TvProgram.h"
class Education :public TvProgram
{
	string science;
public:
	Education();
	Education(string _name,Time_ _time,string _science);

	void setScience(string _science);
	string getScience()const;
	string toStringEd();
	void showInfo()const;

};

