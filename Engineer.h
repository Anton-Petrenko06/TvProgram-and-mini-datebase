#pragma once
#include "Frames.h"
class Engineer : public Frames
{
protected:
	string qualification;
	string subdivision;
public:
	Engineer();
	Engineer(string _name,string _qualification,string _subdivision);
	
	void setQualification(string _qualification);
	void setSubdivision(string _subdivision);
	string getSubdivision()const;
	string getQualification()const;
	void showInfo()const;
};

