#include "Worker.h"

Worker::Worker() 
{
    name = "NoName";
    speciality = "NoWorker";
    shop = "0";
}

Worker::Worker(string _name, string _speciality, string _shop)
{
    name = _name;
    speciality = _speciality;
    shop = _shop;
}

void Worker::setSpeciality(string _speciality)
{
    speciality = _speciality;
}

void Worker::setShop(string _shop)
{
    shop = _shop;
}

string Worker::getShop() const
{
    return shop;
}

string Worker::getSpeciality() const
{
    return speciality;
}

void Worker::showInfo() const
{
    Frames::showInfo();
    cout << "Спецыальность: " << speciality << endl;
    cout << "Цех: " << shop << endl;
}
