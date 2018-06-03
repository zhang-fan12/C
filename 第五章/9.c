#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N  1000
int main()
{
	
	int a= 0;
	int i;
	int j;
	
	for (i = N; i >= 1; i--)
	{
		a = 0;

		for (j = i - 1; j >= 1; j--)
		{
			if (i%j == 0)
				a += j;
			if (a == i)
			{
				printf("\n%d its factors are", i);
				for (j = i - 1; j >= 1; j--)
					if (a%j == 0)
						printf("%5d", j);
			}
		}
	}
	printf("\n");

	system("pause");
}
