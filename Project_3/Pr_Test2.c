#include<stdio.h>

int main(void)
{
	int a;
	a = 0;

	printf("请输入一个ASCII码值\n");
	scanf_s("%d", &a);
	printf("%c", a);
	
	return 0;

}