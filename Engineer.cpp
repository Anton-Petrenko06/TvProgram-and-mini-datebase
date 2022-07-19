#include "Engineer.h"

Engineer::Engineer()
{
    name = "NoName";
    qualification = "NotQualification";
    subdivision = "NotSubdivision";
}

Engineer::Engineer(string _name, string _qualification, string _subdivision)
{
    name = _name;
    qualification = _qualification;
    subdivision = _subdivision;
}

void Engineer::setQualification(string _qualification)
{
    qualification = _qualification;
}

void Engineer::setSubdivision(string _subdivision)
{
    subdivision = _subdivision;
}

string Engineer::getSubdivision() const
{
    return subdivision;
}

string Engineer::getQualification() const
{
    return qualification;
}

void Engineer::showInfo() const
{
    Frames::showInfo();
    cout << "Квалификация: " << qualification << endl;
    cout << "Подразделение: " << subdivision << endl;
}
