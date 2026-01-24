#include"ÉùÃ÷.h"
int main()
{
	srand((unsigned int)time(NULL));
	menu();
	int a = 0;
	scanf_s("%d", &a);
	system("cls");
	do
	{
		if (a == 1)
		{
			choose();
			Sleep(3000);
			system("cls");
		}
		else if (a == 0)
		{
			puts("game over");
			break;
		}
		else
			puts("invailed input");
	} while (1);
	return 0;
}