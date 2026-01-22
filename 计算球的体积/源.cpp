#include <stdio.h>
int main()
{
	puts("输入半径");
	float r;
	scanf_s("%f", &r);
	float Π = 3.1415926;
	float V;
	V = 4 / 3.0 * r * r * r * Π;
	printf("球的体积为   %.3f\n", V);
    puts("DONt give up because daily troubles");
	return 0;
}