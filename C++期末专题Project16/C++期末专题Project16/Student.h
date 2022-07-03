#pragma once
#include "Person.h"

class Student : public Person

{
private:
    string Department;
    int studentID;

public:
    Student(string = "", int = 0, string = "", Date = Date(), string = "", int = 0);
    ~Student() {}
    void SetDepartment(string);
    void SetStudentID(int);
    string GetDepartment();
    int GetStudentID();
    virtual void print();
};
