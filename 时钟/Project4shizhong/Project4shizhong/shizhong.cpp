/*Test date and time
  Clock implementation

  Ao-Shu Yang
*/
#include<time.h>
#include<stdio.h>
#include<windows.h>
#pragma warning(suppress : 4996)

int main()
{
    time_t t;
    struct tm* tp;

    int time_temp;

    while (1)
    {
        time_temp = t;
        time(&t);
        if (time_temp == t)
            continue;
        tp = localtime(&t);

        printf("%s", asctime(tp));
    }
}