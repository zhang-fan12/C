#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 1000
int main()
{
	int number;
	int a;
	printf("����һ��С��%d������:",M);
	scanf("%d\n", &number);
	if (number < M)
	{
		a = sqrt(number);
		printf("%d��ƽ���������������ǣ�%d\n", number, a);
	}
	else
	{
		printf("����������");
	}
	
	system("pause");
}
