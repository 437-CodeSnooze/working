#include<stdio.h>
int main()
{
	int answer = 0;
	int i = 0;
	int a = 1;
	int n;
	printf("赋值\n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a = a * i;
		answer = answer + a;
	}
	printf("%d\n", answer);
	puts("努力的明天会更好");
	return 0;
}
