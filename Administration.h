#pragma once
#include "Frames.h"
class Administration :public Frames
{
protected:
	string jobTitle;
public:
	Administration();
	Administration(string _name,string _jobTitle);

	void setJobTitle(string _jobTitle);
	string getJobTitle()const;
	void showInfo()const;
};

