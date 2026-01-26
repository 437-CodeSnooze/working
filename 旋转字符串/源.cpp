#include<stdio.h>
#include<string.h>
int main()
{
	char input[100] = { 0 };
	char output[100] = { 0 };
	puts("输入字符串（本程序没有范围修正判定）");
	scanf_s("%s", input,100);
	puts("字符串如下，请选择从第几位左旋");
	printf("%s\n", input);
	int i;
	scanf_s("%d", &i);
	strcpy_s(output, &input[i - 1]);
	strncat_s(output, input, i - 1);
	printf("%s\n", output);
	return 0;
}