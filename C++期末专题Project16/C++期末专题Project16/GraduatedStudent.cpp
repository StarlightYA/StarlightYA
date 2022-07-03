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
    cout << "����:" << getName() << endl;
    cout << "���֤��ID����:" << getID() << endl;
    cout << "סַ:" << getAddress() << endl;
    getBirthday().print();
    cout << "���ƺ�:" << GetDepartment() << endl;
    cout << "ѧ��:" << GetStudentID() << endl;
    cout << "����:" << GetThesis() << endl;
    GetOralExamDay().print();
}
