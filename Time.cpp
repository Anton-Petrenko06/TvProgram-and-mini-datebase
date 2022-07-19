#include "Time.h"

Time_::Time_()
{
    struct tm* tim = new tm;
    time_t tt = time(NULL);
    localtime_s(tim, &tt);
    this->hour =  tim->tm_hour;
    this->minutes =  tim->tm_min;
    this->seconds =  tim->tm_sec;

    this->format = new char[strlen("utc") + 1];
    strcpy_s(this->format, strlen("utc") + 1, "utc");
}

Time_::Time_(int hour, int minutes, int seconds, const char* format)
{
    this->hour = hour;
    this->minutes = minutes;
    this->seconds = seconds;
    this->format = new char[strlen(format) + 1];
    strcpy_s(this->format, strlen(format) + 1, format);
}

Time_::Time_(const Time_& obj)
{
    this->hour = obj.hour;
    this->minutes = obj.minutes;
    this->seconds = obj.seconds;
    this->format = new char[strlen(obj.format) + 1];
    strcpy_s(this->format, strlen(obj.format) + 1, obj.format);
}

Time_& Time_::operator=(const Time_& obj)
{
    this->hour = obj.hour;
    this->minutes = obj.minutes;
    this->seconds = obj.seconds;
    this->format = new char[strlen(obj.format) + 1];
    strcpy_s(this->format, strlen(obj.format) + 1, obj.format);
    return *this;
}

Time_::~Time_()
{
    delete[] format;
}

void Time_::setHour(int hour)
{
    if (strcmp(format, "am") == 0 || strcmp(format, "pm") == 0)
    {
        if (hour > 12) { cout << "\n"; }
        else { this->hour = hour; }
    }
    else 
    {
        if (hour <= 23) { this->hour = hour; }
        else { cout << "\n"; }
    }
}

int Time_::getHour() const
{
    return hour;
}

void Time_::setMinutes(int minutes)
{
    if (minutes <= 60) { this->minutes = minutes; }
    else { cout << "\n"; }
}

int Time_::getMinutes() const
{
    return minutes;
}

void Time_::setSeconds(int seconds)
{
    if (seconds <= 60) { this->seconds = seconds; }
    else { cout << "������\n"; }
}

int Time_::getSeconds() const
{
    return seconds;
}

void Time_::setFormat(const char* format)
{
    strcpy_s(this->format, strlen(format) + 1, format);
}

const char* Time_::getFormat() const
{
    return format;
}

bool Time_::valid() const
{
    return false;
}

void Time_::tickTime(int n = 1)
{
    seconds += n;
    if (seconds >= 60) 
    { 
        minutes++;
        seconds = 0;
        if (minutes >= 60) 
        {
            hour++;
            minutes = 0;
            if (hour >= 24) 
            {
                hour = 0;
            }
        }
    }
}

void Time_::untickTime(int n)
{
    seconds -= n;
    if (seconds < 0) 
    {
        seconds = 59;
        minutes--;
        if (minutes < 0) 
        {
            minutes = 59;
            hour--;
            if (hour < 0) 
            {
                hour = 23;
            }
        }
    }
}

void Time_::showTime() const
{
    cout << hour << "/" << minutes << "/" << seconds << endl;
}

bool Time_::operator==(const Time_& obj) const&
{
    if (hour == obj.hour && minutes == obj.minutes && seconds == obj.seconds && strcmp(format, obj.format) == 0) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool Time_::operator!=(const Time_& obj) const&
{
    return !(*this == obj);
}

bool Time_::operator>(const Time_& obj) const&
{
    if (hour > obj.hour && strcmp(format, obj.format) == 0) { return true; }
    else if (hour == obj.hour && minutes > obj.minutes && strcmp(format, obj.format) == 0) { return true; }
    else if (hour == obj.hour && minutes == obj.minutes && seconds > obj.seconds && strcmp(format, obj.format) == 0) { return true; }
    else { return false; }
}

bool Time_::operator<(const Time_& obj) const&
{
    if (hour < obj.hour && strcmp(format, obj.format) == 0) { return true; }
    else if (hour == obj.hour && minutes < obj.minutes && strcmp(format, obj.format) == 0) { return true; }
    else if (hour == obj.hour && minutes == obj.minutes && seconds < obj.seconds && strcmp(format, obj.format) == 0) { return true; }
    else { return false; }
}

bool Time_::operator>=(const Time_& obj) const&
{
    if (hour >= obj.hour && strcmp(format, obj.format) == 0) { return true; }
    else if (hour == obj.hour && minutes >= obj.minutes && strcmp(format, obj.format) == 0) { return true; }
    else if (hour == obj.hour && minutes == obj.minutes && seconds >= obj.seconds && strcmp(format, obj.format) == 0) { return true; }
    else { return false; }
}

bool Time_::operator<=(const Time_& obj) const&
{
    if (hour <= obj.hour && strcmp(format, obj.format) == 0) { return true; }
    else if (hour == obj.hour && minutes <= obj.minutes && strcmp(format, obj.format) == 0) { return true; }
    else if (hour == obj.hour && minutes == obj.minutes && seconds <= obj.seconds && strcmp(format, obj.format) == 0) { return true; }
    else { return false; }
}

Time_& Time_::operator+=(int n)
{
    for (int i = 0; i < n; i++)
    {
        this->tickTime(n);
    }
    return *this;
}

Time_& Time_::operator-=(int n)
{
    for (int i = 0; i < n; i++)
    {
        this->untickTime(n);
    }
    return *this;
}

Time_ Time_::operator+(int n) const&
{
    Time_ tmp = *this;
    for (int i = 0; i < n; i++)
    {
        tmp.tickTime(1);
    }
    return tmp;
}

Time_ Time_::operator-(int n) const&
{
    Time_ tmp = *this;
    for (int i = 0; i < n; i++)
    {
        tmp.untickTime(n);
    }
    return *this;;
}

Time_& Time_::operator--()
{
    this->untickTime(1);
    return *this;
}

Time_ Time_::operator--(int n)
{
    Time_ tmp = *this;
    this->untickTime(n);
    return tmp;
}

Time_& Time_::operator++()
{
    this->tickTime(1);
    return *this;
}

Time_ Time_::operator++(int n)
{
    Time_ tmp = *this;
    this->tickTime(n);
    return tmp;
}

Time_ operator+(int n, Time_ a)
{
    Time_ tmp = a;
    for (int i = 0; i < n; i++)
    {
        tmp.tickTime(n);
    }
    return tmp;
}

Time_ operator-(int n, Time_ a)
{
    Time_ tmp = a;
    for (int i = 0; i < n; i++)
    {
        tmp.untickTime(n);
    }
    return tmp;
}

ostream& operator<<(ostream& os, const Time_& t)
{
    os << t.hour << ":" << t.minutes << ":" << t.seconds;
    return os;
}

istream& operator>>(istream& is, Time_& t)
{
    is >> t.hour;
    cout << "/";
    is >> t.minutes;
    cout << "/";
    is >> t.seconds;
    return is;
}
