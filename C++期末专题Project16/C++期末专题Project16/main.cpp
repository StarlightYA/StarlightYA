#include "GraduatedStudent.h"
#include <iostream>
using namespace std;
int main()
{


    Person* a[6];

    a[0] = new Person("С����", 1111, "�¹�", Date(1939, 9, 1));
    a[1] = new Person("˯��", 2222, "����", Date(1953, 7, 27));
    a[2] = new Student("Ҷ��������", 3333, "����˹", Date(1917, 11, 7), "Ī˹��", 1213);
    a[3] = new Student("Ӣ��������", 4444, "Ӣ��", Date(1941, 12, 8), "�׶�", 7777);
    a[4] = new GraduatedStudent("����", 5555, "����", Date(1940, 6, 22), "����", 9999, "Ͷ��", Date(1940, 6, 22));
    a[5] = new GraduatedStudent("ԣ��", 2222, "�ձ�", Date(1945, 9, 2), "����", 8888, "С�к�������", Date(1945, 8, 6));

    for (int i = 0; i < 6; i++)
    {
        cout << "��������  202016070313  �����" << endl;
        cout << "----------No." << i + 1 << "----------" << endl;
        a[i]->print();
        system("pause");
        system("cls");
    }
}