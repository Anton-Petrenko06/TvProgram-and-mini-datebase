#pragma once
#include "TvProgram.h"
class Show :public TvProgram
{
	string teme;
public:
	Show();
	Show(string _name, Time_ _time, string _teme);
	void setTeme(string _teme);
	string getTeme()const;
	string toStringSh();
	void showInfoSh()const;

};

