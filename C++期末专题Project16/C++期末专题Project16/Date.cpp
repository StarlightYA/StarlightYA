#include "Date.h"
#include <iostream>
Date::Date(int y, int m, int d)
{
    Year = y;
    Month = m;
    Day = d;
}
void Date::setYear(int y)
{
    Year = y;
}
void Date::setMonth(int m)
{
    Month = m;
}
void Date::setDay(int d)
{
    Day = d;
}
int Date::getYear()
{
    return Year;
}
int Date::getMonth()
{
    return Month;
}
int Date::getDay()
{
    return Day;
}
void Date::print()
{
    cout << "Äê:" << getYear() << endl;
    cout << "ÔÂ:" << getMonth() << endl;
    cout << "ÈÕ:" << getDay() << endl;
}