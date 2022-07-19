#include "Movie.h"

Movie::Movie()
{
    name = "NoName";
    time = Time_();
    directBox = "NoDirectBox";
    year = 0;
}

Movie::Movie(string _name, Time_ _time, string _directBox, int _year)
{
    name = _name;
    time = Time_(_time);
    directBox = _directBox;
    year = _year;
}

void Movie::setDirectBox(string _directBox)
{
    directBox = _directBox;
}

void Movie::setYear(int _year)
{
    if (_year>1900)
    {
        year = _year;
    }
}

string Movie::getDirectBox() const
{
    return directBox;
}

int Movie::getYear() const
{
    return year;
}

string Movie::toString()
{
    return "Программа: " + this->getName() + "Время : " + to_string(time.getHour()) + " : " + to_string(time.getMinutes()) + "Direct Box: " + this->getDirectBox() + "Год: " + to_string(year);
}

void Movie::showInfo() const
{
    TvProgram::showInfo();
    cout << "Direct Box" << directBox << endl;
    cout << "Год" << year << endl;
}
