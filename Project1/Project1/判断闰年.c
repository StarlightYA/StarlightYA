#include<stdio.h>

int is_leap_year(int x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		return 1;
}

int main()
{
	for(int i=1000;i<=2022;i++)
		if (is_leap_year(i) == 1)
		{
			printf("%d  ", i);
		}
	return 0;
}