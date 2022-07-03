#pragma once
#include "Student.h"
class GraduatedStudent : public Student
{
private:
    string Thesis;
    Date OralExamDay;

public:
    GraduatedStudent(string, int, string, Date, string, int, string, Date);
    ~GraduatedStudent() {}
    void SetThesis(string);
    void SetOralExamDay(Date);
    string GetThesis();
    Date GetOralExamDay();
    virtual void print();
};
