#include"person.h"
#include <iostream>
Person::Person(string name, int id, string address, Date date)
{
    Name = name;
    ID = id;
    Address = address;
    Birthday = date;
}
void Person::setName(string name)
{
    Name = name;
}
void Person::setID(int id)
{
    ID = id;
}
void Person::setAddress(string address)
{
    Address = address;
}
void Person::setBirthday(Date d)
{
    Birthday = d;
}
string Person::getName()
{
    return Name;
}
int Person::getID()
{
    return ID;
}
string Person::getAddress()
{
    return Address;
}
Date Person::getBirthday()
{
    return Birthday;
}
void Person::print()
{
    cout << endl;
    cout << "����:" << getName() << endl;
    cout << "���֤��ID����:" << getID() << endl;
    cout << "סַ:" << getAddress() << endl;
    Birthday.print();
}