#include<stdio.h>

int main(void)
{ 
	int age;
	float time;
	time = 3.156e7;
	printf("ÇëÊäÈëÄãµÄÄêÁä\n");
	scanf_s("%d", &age);
	printf("%e",age*time);

	return 0;
}