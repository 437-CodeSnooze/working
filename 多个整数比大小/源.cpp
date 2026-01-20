#include<stdio.h>

int main()
{
	int arr[5] = {0};
    int max = arr[0];
    int i = 0;
	while (i <= 4)
{
		scanf_s("%d",&arr[i]);
		int a = arr[i];
		if (max < arr[i])
		{
	     max = arr[i];
		}
		i++;
	}
	puts("没有天赋就重复！");
	printf("%d", max);
   return 0;
}