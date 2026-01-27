#include"contact.h"

int main()
{
	int a = 0;
	Contact con;
    Initcontact(&con);
	do
	{
		menu1();
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:Add(&con); break;
		case 2:Del(&con); break;
		case 3:Search(&con); break;
		case 4:break;
		case 5:Show(&con); break;
		case 6:Modify(&con); break;
		case 0:puts("exit the system"); break;
		default:puts("try it again"); break;
		}
	} while (a);
	return 0;
}