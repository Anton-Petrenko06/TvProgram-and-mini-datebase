#pragma once
#include<iostream>
#include<cstring>
#include<ctime>
using namespace std;
class Time_
{
	int hour;
	int minutes;
	int seconds;
	char* format;// am/pm (12-hours), utc (24-hours)

public:
	Time_(); // Current local time
	Time_(int hour, int minutes, int seconds, const char* format = "utc");
	Time_(const Time_& obj);
	Time_& operator = (const Time_& obj);
	~Time_();

	void setHour(int hour);
	int getHour()const;
	void setMinutes(int minutes);
	int getMinutes()const;
	void setSeconds(int seconds);
	int getSeconds()const;
	void setFormat(const char* format); // !!! to update time by the new format: utc to pm
	const char* getFormat()const; //utc/am/pm

	bool valid()const; //time check
	void tickTime(int n); //every tick add one second
	void untickTime(int n); //every tick remove one second

	void showTime()const; //show time by the format

//--------- Comparison operators ---------
	bool operator == (const Time_& obj)const&;
	bool operator != (const Time_& obj)const&;
	bool operator > (const Time_& obj)const&;
	bool operator < (const Time_& obj)const&;
	bool operator >= (const Time_& obj)const&;
	bool operator <= (const Time_& obj)const&;

	//--------- Assignment operators ---------	
	Time_& operator += (int n);
	Time_& operator -= (int n);

	//--------- Arithmetic operators ---------
	Time_ operator + (int n)const&;
	Time_ operator - (int n)const&;

	Time_& operator -- ();
	Time_ operator -- (int n);
	Time_& operator ++ ();
	Time_ operator ++ (int n);

	friend Time_ operator + (int n, Time_ a);
	friend Time_ operator - (int n, Time_ a);

	friend ostream& operator << (ostream& os, const Time_& t);
	friend istream& operator >> (istream& is, Time_& t);

};

