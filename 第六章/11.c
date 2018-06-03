#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[5] = { '*','*','*','*','*' };
	int i;
	int j;
	int k;
	char space = ' ';
	for (i = 0; i < 5; i++)
	{
		printf("\n");
		printf("  ");
		for (j = 1; j <= i; j++)
			printf("%c", space);
		for (k = 0; k < 5; k++)
			printf("%c%c", a[k],space);

	}
	printf("\n");

	system("pause");
}
