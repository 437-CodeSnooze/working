#include"contact.h"
void menu1()
{
	puts("**************************************");
	puts("*****1. Add new information      *****");
	puts("*****2. Delete information       *****");
	puts("*****3. Search the information   *****");
	puts("*****4. Modify the information   *****");
	puts("*****5. Display the information  *****");
	puts("*****6. qsort the information    *****");
	puts("*****0. Exit the system          *****");
	puts("**************************************");

	puts("select the function ");

}
void Initcontact(Contact* p)
{
	assert(p);
	p->count = 0;
	memset(p->data, 0, sizeof(p->data));
}
void Add(Contact* p)
{
	assert(p);
	if (p->count == max)
	{
		puts("space dont enough");
		return;
	}
	puts("Please input the name");
	scanf_s("%s", p->data[p->count].name,10);
	puts("Please input age ");
	scanf_s("%d", &(p->data[p->count].age));
	puts("Please input sex");
	scanf_s("%s", p->data[p->count].sex,10);
	puts("Please input telephone");
	scanf_s("%s", p->data[p->count].phone,12);
	puts("Please input address");
	scanf_s("%s", p->data[p->count].add,30);
	(p->count)++;

	puts("Add sucsessfully");
	Show(p);
}

void Show(const Contact* p)
{
	int i = 0;
	for (i = 0; i < (p->count); i++)
	{
		printf("NO.%d\n", i);
		printf("name: %s\n", p->data[i].name);
		printf("age: %d\n", p->data[i].age);
		printf("sex: %s\n", p->data[i].sex);
		printf("phone number: %s\n", p->data[i].phone);
		printf("address: %s\n\n\n", p->data[i].add);
       
	}
}

void Del(Contact* p)
{
	assert(p);
	printf("Please input NO. you want to delete \n");
	int input;
	scanf_s("%d", &input);
	if (input >= (p->count))
	{
		printf("the NO.%d non-exitent",input);
		return;
	}
	memset(p->data+input, 0, sizeof(p->data[input]));
	int i;
	puts("Delete sucessful");
	for (i = input; i < p->count - 1; i++)
	{
		p->data[i] = p->data[i + 1];
	}
	p->count--;
	Show(p);

}

void Search(const Contact* p)
{
	puts("input NO. you want to search");
	int input = 0;
	scanf_s("%d", &input);
	Showaccurate(p,input);
	puts("search sucsessfully");
}

void Showaccurate(const Contact* p,int i)
{
	printf("NO.%d\n", i);
	printf("name: %s\n", p->data[i].name);
	printf("age: %d\n", p->data[i].age);
	printf("sex: %s\n", p->data[i].sex);
	printf("phone number: %s\n", p->data[i].phone);
	printf("address: %s\n\n\n", p->data[i].add);
}

void Modify(Contact* p)
{
	int input;
	puts("input NO you want to modify");
	scanf_s("%d", input);
	puts("the formal information");
	Showaccurate(p, input);

	puts("Please input the name");
	scanf_s("%s", p->data[input].name, 10);
	puts("Please input age ");
	scanf_s("%d", &(p->data[input].age));
	puts("Please input sex");
	scanf_s("%s", p->data[input].sex, 10);
	puts("Please input telephone");
	scanf_s("%s", p->data[input].phone, 12);
	puts("Please input address");
	scanf_s("%s", p->data[input].add, 30);
	puts("Modify sucsessful");
	Show(p);
}