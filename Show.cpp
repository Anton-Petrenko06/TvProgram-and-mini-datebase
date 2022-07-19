#include "Show.h"

Show::Show()
{
    name = "NoName";
    time = Time_();
    teme = "NoTeme";

}

Show::Show(string _name, Time_ _time, string _teme)
{
    name = _name;
    time = Time_(_time);
    teme = _teme;
}

void Show::setTeme(string _teme)
{
    teme = _teme;
}

string Show::getTeme() const
{
    return teme;
}

string Show::toStringSh()
{
    return "Программа: " + this->getName() + "Время : " + to_string(time.getHour()) + " : " + to_string(time.getMinutes()) + "Тема: " + this->getTeme();
}

void Show::showInfoSh() const
{
    TvProgram::showInfo();
    cout << "Тема: " << teme << endl;
} 
