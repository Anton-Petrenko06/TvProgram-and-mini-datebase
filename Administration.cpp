#include "Administration.h"

Administration::Administration()
{
    name = "NoName";
    jobTitle = "NotJobTitle";
}

Administration::Administration(string _name, string _jobTitle)
{
    name = _name;
    jobTitle = _jobTitle;
}

void Administration::setJobTitle(string _jobTitle)
{
    jobTitle = _jobTitle;
}

string Administration::getJobTitle() const
{
    return jobTitle;
}

void Administration::showInfo() const
{
    Frames::showInfo();
    cout << "Должность: " << jobTitle << endl;
}
