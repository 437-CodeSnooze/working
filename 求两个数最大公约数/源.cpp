#include<stdio.h>



int C(int x, int y)
{
	int c = (x < y) ? x : y;
	for (;c>0;c--)
	{
		if (x % c == 0 && y % c == 0)
			break;
	}
	return c;
}

int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	int c = C(a, b);
	printf("%d", c);
	return 0;
}