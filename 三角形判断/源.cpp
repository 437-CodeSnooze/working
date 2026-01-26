#include<stdio.h>

int main()
{
	int a, b, c;
	do
	{
		scanf_s("%d %d %d", &a, &b, &c);
		if (a + b <= c || a + c <= b || b + c <= a)
		{
			puts("不是三角形");
		}
		else
		{
			if (a == b || b == c || c == a)
			{
				puts("等腰三角形");
			}
			else if (a == b && a == c)
			{
				puts("等边三角形");
			}
			else
				puts("三角形");
		}
		
		
		
	} while (1);
	return 0;
}