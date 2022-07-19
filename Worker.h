#pragma once
#include "Frames.h"
class Worker :public Frames
{
protected:
	string speciality;
	string shop;
public:
	Worker();
	Worker(string _name, string _speciality, string _shop);
	void setSpeciality(string _speciality);
	void setShop(string _shop);
	string getShop()const;
	string getSpeciality()const;
	void showInfo()const;
};

