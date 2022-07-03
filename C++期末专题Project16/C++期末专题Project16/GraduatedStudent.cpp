#include "GraduatedStudent.h"
GraduatedStudent::GraduatedStudent(string name, int id, string address, Date date, string department, int studentid, string thesis, Date oral)
{
    setName(name);
    setID(id);
    setAddress(address);
    setBirthday(date);
    SetDepartment(department);
    SetStudentID(studentid);
    Thesis = thesis;
    OralExamDay = oral;
}
void GraduatedStudent::SetThesis(string thesis)
{
    Thesis = thesis;
}
void GraduatedStudent::SetOralExamDay(Date d)
{
    OralExamDay = d;
}
string GraduatedStudent::GetThesis()
{
    return Thesis;
}
Date GraduatedStudent::GetOralExamDay()
{
    return OralExamDay;
}
void GraduatedStudent::print()
{
    cout << endl;
    cout << "姓名:" << getName() << endl;
    cout << "身份证（ID）号:" << getID() << endl;
    cout << "住址:" << getAddress() << endl;
    getBirthday().print();
    cout << "门牌号:" << GetDepartment() << endl;
    cout << "学号:" << GetStudentID() << endl;
    cout << "论文:" << GetThesis() << endl;
    GetOralExamDay().print();
}
