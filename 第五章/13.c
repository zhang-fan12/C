#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	float a;
	float x0;//初值
	float x1;//x的下一个值
	printf("enter a postive number:");
	scanf("%f", &a);
	x0 = a / 2;
	x1 = (x0 + a / x0) / 2;
	do
	{
		x0 = x1;
		x1 = (x0 + a / x0) / 2;
	} while (fabs(x0 - x1) >= 1e-5);
		printf("The square root of %5.2f is %8.5f\n", a, x1);
	printf("\n");

	system("pause");
}
