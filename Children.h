#pragma once
#include "TvProgram.h"
class Children :public TvProgram
{
	int minAge;
	int maxAge;
public:
	Children();
	Children(string _name, Time_ _time, int _minAge, int _maxAge);
	void setMinAge(int _minAge);
	void setMaxAge(int _maxAge);
	int getMinxAge()const;
	int getMaxAge()const;
	void showInfoCl()const;
	string toStringCl();
};

