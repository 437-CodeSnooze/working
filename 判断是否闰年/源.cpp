#include<stdio.h>
void judge(int x)
{
	int a = 0;
	int b = 0;
	int c = 0;
	a = x % 4;
	if (a == 0)
	{
		b = x % 100;
		c = x % 400;
		if (b == 0 && c == 0)
		{
			puts("闰年");
		}
		else if (b > 0 && c > 0)
		{
			puts("闰年");
		}
		else
		{
			puts("平年");
		}
	}
	else
	{
		puts("平年");
	}
}
int main()
{
	puts("input year to judge");
	int year;
	scanf_s("%d", &year);
	judge(year);
	puts("for the better tommrow,for the free life,for the unfinished working");
	return 0;
}