#include<stdio.h>
int search(int arr[], int x, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x == arr[mid])
		{
			return mid;
		}
		else if (x > arr[mid])
		{
			 left =  mid+1;
         }
		else
		{
			 right = mid-1;
		}
     }
	if (right < left)
		return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	puts("input a number what you want");
	int input = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf_s("%d", &input);
	int out =search(arr, input, sz);
	if (out == -1)
	{
		printf("failed");
	}
	else
	{
		printf("find it\n the number at %d", out);
     }
	return 0;
}