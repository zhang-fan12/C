#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int  main()
{
	int sign = 1;
	int count = 0;
	double pi = 0.0;
	double n = 1.0;
	double term = 1.0;
	while (fabs(term) >= 1e-6)
	{
		pi = pi + term;
		n = n + 2;
		sign = -sign;
		term = sign / n;
		count++;
	}
	pi = pi * 4;
	printf("pi=%10.8f\n", pi);
	printf("count=%d\n", count);
	printf("\n");
	system("pause");
}
