#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a[3][3];
	float sum = 0;
	int i;
	int j;
	printf("please input rectangle element:\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%f", &a[i][j]);
	for (i = 0; i < 3; i++)
		sum = sum + a[i][i];
	printf("dui jiao xian he is%6.2f", sum);

	printf("\n");

	system("pause");
}
