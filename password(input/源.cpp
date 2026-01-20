#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char key[100] = { 0 };
	puts("design your key password for your safe");
	scanf_s("%s", key, sizeof(key));
	system("cls");
	{
		char input[100] = { 0 };
		puts("confirm your password");
		scanf_s("%s", input, sizeof(input));
		if (strcmp(input, key) == 0)
		{
			puts("password correct");
			printf("your password is %s", key);
		}
		else
		{
			puts("warning please try it again");
		}
	}
	
    return 0;
}