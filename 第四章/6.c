#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	int y;
	printf(" ‰»Îxµƒ÷µ£∫");
	scanf("%d\n", &x);
	if (x<1)
	{
		y = x;
		printf("x = %d, y = x = %d\n",x,y);
	}
	else if (x<10)
	{
		y =2 * x - 1;
		printf("x=%d,y=2*x-1=%d\n", x, y);
	}
	else
	{
		y =3 * x - 11;
		printf("x=%d,y=3*x-11=%d\n", x, y);
	}
	printf("\n");

	system("pause");
}
