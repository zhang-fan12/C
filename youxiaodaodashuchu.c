#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int  main()
{
	int a;
	int b;
	int c;
	int d;
	int t;
	printf("输入四个整数:");
	scanf("%d,%d,%d,%d\n", &a, &b, &c, &d);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;

	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (a > d)
	{
		t = a;
		a = d;
		d = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	if (b > d)
	{
		t = b;
		b = d;
		d = t;
	}
	if (c > d)
	{
		t = c;
		c = d;
		d = t;
	}
	printf("按从小到大顺序输出" );
	printf("%d,%d,%d,%d\n:", a, b, c, d);
	printf("\n");

	system("pause");
}
