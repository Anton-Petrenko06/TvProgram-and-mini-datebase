#include "TvProgram.h"

TvProgram::TvProgram()
{
    name = "NoName";
    time=Time_();
}

TvProgram::TvProgram(string _name, Time_ _time)
{
    name = _name;
    time = Time_(_time);
}

void TvProgram::setName(string _name)
{
    name = _name;
}

string TvProgram::getName() const
{
    return name;
}

void TvProgram::setTime(Time_ _time)
{
    time = Time_(_time);
}

Time_ TvProgram::getTime() 
{
    return time;
}

void TvProgram::showInfo() const
{
    cout << "Название программы: " << name << endl;
    cout << "Время начала программы: "<< time << endl;
}