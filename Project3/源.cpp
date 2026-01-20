#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	do
	{
		srand((unsigned int)time(NULL));
		int a = rand();
		printf("%d\n", a);
	} while (true);
	

	return 0;
}