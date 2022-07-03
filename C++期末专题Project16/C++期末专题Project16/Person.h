#pragma once
#include "Date.h"
#include <iostream>

using namespace std;
class Person
{
private:
    string Name;
    int ID;
    string Address;
    Date Birthday;

public:
    Person(string name = "", int id = 0, string address = "", Date date = Date());
    ~Person() {}
    void setName(string name);
    string getName();
    void setID(int id);
    int getID();
    void setAddress(string address);
    string getAddress();
    void setBirthday(Date d);
    Date getBirthday();
    virtual void print();
};
