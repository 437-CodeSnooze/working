#include<stdio.h>
int main()
{
	int n;
	int i;
	long long int x=1;
	puts("please put a number");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		x = x * i;
	}
	printf("%d\n", x);
	puts("so easy");
	return 0;
}