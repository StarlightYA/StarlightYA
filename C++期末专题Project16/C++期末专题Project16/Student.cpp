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
    cout << "姓名:" << getName() << endl;
    cout << "身份证（ID）号:" << getID() << endl;
    cout << "住址:" << getAddress() << endl;
    getBirthday().print();
    cout << "宿舍门牌号:" << GetDepartment() << endl;
    cout << "学号:" << GetStudentID() << endl;
}