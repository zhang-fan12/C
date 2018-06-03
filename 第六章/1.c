#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n = 0;
	int i;
	int j;
	for (i = 2; i <= 100; i++)
	{
		for (j = 2; j < i;j++)
		if (i%j == 0)break;
		if (j >= i)
		{
			printf("%-4d", i);
			n++;
		}
		if (n % 10 == 0)
			printf("\n");
	}
	
	printf("\n");

	system("pause");
}
