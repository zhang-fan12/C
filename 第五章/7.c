#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sum;
	int k;
	sum = 0;
	for (k = 1; k <= 100; k++)
	{
		sum = sum + k;
	}
	for (k = 1; k <= 50; k++)
	{
		sum = sum + k*k;
	}
	for (k = 1; k <= 10; k++)
	{
		sum = sum + 1 / k;
	}
	printf("sum=%f", sum);
	printf("\n");

	system("pause");
}
