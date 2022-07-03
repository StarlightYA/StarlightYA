#include "GraduatedStudent.h"
#include <iostream>
using namespace std;
int main()
{


    Person* a[6];

    a[0] = new Person("小胡子", 1111, "德国", Date(1939, 9, 1));
    a[1] = new Person("睡王", 2222, "美国", Date(1953, 7, 27));
    a[2] = new Student("叶卡捷琳娜", 3333, "俄罗斯", Date(1917, 11, 7), "莫斯科", 1213);
    a[3] = new Student("英吉利懂王", 4444, "英国", Date(1941, 12, 8), "伦敦", 7777);
    a[4] = new GraduatedStudent("贝当", 5555, "法国", Date(1940, 6, 22), "巴黎", 9999, "投了", Date(1940, 6, 22));
    a[5] = new GraduatedStudent("裕仁", 2222, "日本", Date(1945, 9, 2), "东京", 8888, "小男孩和胖子", Date(1945, 8, 6));

    for (int i = 0; i < 6; i++)
    {
        cout << "编程设计者  202016070313  杨书奥" << endl;
        cout << "----------No." << i + 1 << "----------" << endl;
        a[i]->print();
        system("pause");
        system("cls");
    }
}