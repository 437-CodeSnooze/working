#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define A 10

/* 012345678901234567890                        
   1   ***        ***      
   2 *******    *******    
   3********************   
   4********************   
   5 ******************    
   6   **************      
   7     **********        
   8       ******          
   9		 **            
*/
int main()
{
	puts("everydays work make you get to better yourself");
	srand((unsigned int)time(NULL));
	for (;;)
	{
		int i = rand();
		int a = i % 9;
		switch (a)
		{
		case 0:
			puts("");
			printf("    ***        ***");
			Sleep(A);
			system("cls");
			break;
		case 1:
			puts("\n");
			printf("  *******    *******");
			Sleep(A);
			system("cls");
			break;
		case 2:
			puts("\n\n");
			printf(" ********************");
			Sleep(A);
			system("cls");
			break;
		case 3:
			puts("\n\n\n");
			printf(" ********************");
			Sleep(A);
			system("cls");
			break;
		case 4:
			puts("\n\n\n\n");
			printf("  ******************");
			Sleep(A);
			system("cls");
			break;
		case 5:
			puts("\n\n\n\n\n");
			printf("    **************");
			Sleep(A);
			system("cls");
			break;
		case 6:
			puts("\n\n\n\n\n\n");
			printf("      **********");
			Sleep(A);
			system("cls");
			break;
		case 7:
			puts("\n\n\n\n\n\n\n");
			printf("        ******");
			Sleep(A);
			system("cls");
			break;
		case 8:
			puts("\n\n\n\n\n\n\n\n");
			printf("          **");
			Sleep(A);
			system("cls");
			break;

		}
	}
	return 0;
}