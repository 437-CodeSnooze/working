#include<stdio.h>
#include<string.h>



int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int i = 0;
	memmove(arr1 + 3, arr1, 20);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}