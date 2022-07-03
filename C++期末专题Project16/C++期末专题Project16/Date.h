#pragma once
using namespace std;
class Date
{
private:
    int Year;
    int Month;
    int Day;

public:
    Date(int y = 0, int m = 0, int d = 0);
    ~Date() {}
    void setYear(int y);
    void setMonth(int m);
    void setDay(int d);
    int getYear();
    int getMonth();
    int getDay();
    void print();
};

