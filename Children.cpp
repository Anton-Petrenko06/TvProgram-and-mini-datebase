#include "Children.h"

Children::Children()
{
    name = "NoName";
    time = Time_();
    minAge = 0;
    maxAge = 0;
}

Children::Children(string _name, Time_ _time, int _minAge, int _maxAge)
{
    name = _name;
    time = Time_(_time);
    minAge = _minAge;
    maxAge = _maxAge;
}

void Children::setMinAge(int _minAge)
{
    if (_minAge <= maxAge) minAge = _minAge;
}

void Children::setMaxAge(int _maxAge)
{
    maxAge = _maxAge;
}

int Children::getMinxAge() const
{
    return minAge;
}

int Children::getMaxAge() const
{
    return maxAge;
}

void Children::showInfoCl() const
{
    TvProgram::showInfo();
    cout << "����������� �������: " << minAge << endl;
    cout << "������������ �������: " << maxAge << endl;
}

string Children::toStringCl()
{
    return  "���������: " + this->getName() + "����� : " + to_string(time.getHour()) + " : " + to_string(time.getMinutes()) + "����������� �������: " + to_string(minAge) + "������������ �������: " + to_string(maxAge);
}
