#include<stdio.h>

int main(void)

{	

	int a;
	float b;
	a = 0;
	b = 0;
	printf("请输入水的夸脱数");
	scanf_s("%d", &a);
	b = a * 950 / 3e-23;
	printf("%f", b);


	return 0;
}