#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int  main()
{
	int i;
	int n = 20;
	double a = 2;
	double b = 1;
	double s = 0;
	double t;
	for (i = 1; i <= n; i++)
	{
		s = s + a / b;
		t = a;
		a = a + b;
		b = t;

	}
	printf("sum=%16.10f\n", s);


	printf("\n");

	system("pause");
}
