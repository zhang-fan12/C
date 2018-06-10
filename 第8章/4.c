#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int  main()
{
	void move(int[20], int, int);
	int number[20];
	int n;
	int m;
	int i;
	printf("how many numbers?");
	scanf("%d", &n);
	printf("input %d numbers:\n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &number[i]);
	printf("how many place you want move?");
	scanf("%d", &m);
	move(number, n, m);
	printf("Now,they are:\n");
	for (i = 0; i < n; i++)
		printf("%d ", number[i]);
	printf("\n");
	system("pause");
}
void move(int array[20], int n, int m)
{
	int *p;
	int array_end;
	array_end = *(array + n - 1);
	for (p = array + n - 1; p > array; p--)
	  *p = *(p - 1);
    *array = array_end;
	m--;
	if (m > 0)
		move(array, n, m);
}
