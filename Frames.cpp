#include "Frames.h"

Frames::Frames()
{
    name = "NoName";
}

Frames::Frames(string _name)
{
    name = _name;
}

void Frames::setName(string _name)
{
    name = _name;
}

string Frames::getName() const
{
    return name;
}

void Frames::showInfo() const
{
    cout << "Èìÿ: " << name << endl;
}

