#include "Education.h"

Education::Education()
{
    name = "NoName";
    time = Time_();
    science = "NoScience";
}

Education::Education(string _name, Time_ _time, string _science)
{
    name = _name;
    time = Time_(_time);
    science = _science;

}

void Education::setScience(string _science)
{
    science = _science;
}

string Education::getScience() const
{
    return science;
}

string Education::toStringEd()
{
   return  "���������: " + this->getName()+ "����� : "+ to_string(time.getHour())+" : "+ to_string(time.getMinutes())+"����� : "+ this->getScience();
}

void Education::showInfo() const
{
    TvProgram::showInfo();
    cout << "�����: " << science << endl;
}
