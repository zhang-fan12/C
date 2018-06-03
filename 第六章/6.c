#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10][10];
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < 10; i++)
	for (j = 1; j < i; j++)
	a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
			printf("%d " , a[i][j] );
		    printf("%d", a[1][1]);
		    printf("\n");
	}


	printf("\n");

	system("pause");
}
