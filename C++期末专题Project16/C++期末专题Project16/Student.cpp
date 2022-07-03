#include "Student.h"
Student::Student(string name, int id, string address, Date date, string department, int studentid)
{
    setName(name);
    setID(id);
    setAddress(address);
    setBirthday(date);
    Department = department;
    studentID = studentid;
}
void Student::SetDepartment(string D)
{
    Department = D;
}
void Student::SetStudentID(int id)
{
    studentID = id;
}
string Student::GetDepartment()
{
    return Department;
}
int Student::GetStudentID()
{
    return studentID;
}
void Student::print()
{
    cout << endl;
    cout << "����:" << getName() << endl;
    cout << "���֤��ID����:" << getID() << endl;
    cout << "סַ:" << getAddress() << endl;
    getBirthday().print();
    cout << "�������ƺ�:" << GetDepartment() << endl;
    cout << "ѧ��:" << GetStudentID() << endl;
}