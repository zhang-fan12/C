#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 1000
int main()
{
	int number;
	int a;
	printf("输入一个小于%d的正数:",M);
	scanf("%d\n", &number);
	if (number < M)
	{
		a = sqrt(number);
		printf("%d的平方根的整数部分是：%d\n", number, a);
	}
	else
	{
		printf("请重新输入");
	}
	
	system("pause");
}
