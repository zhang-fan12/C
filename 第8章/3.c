#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	void input(int *);
	void max_min_value(int *);
	void output(int *);
	int number[10];
	max_min_value(number);
	input(number);
	output(number);
	printf("\n");
	system("pause");
}
void input(int *number)
{
	int i;
	printf("input 10 number:");
	for (i = 0; i < 10; i++)
		scanf("%d", &number[i]);
}
void max_min_value(int *number)
{
	int *max;
	int *min;
	int *p;
	int temp;
	max = min = number;
	for (p = number + 1; p < number + 10; p++)
		if (*p < *max)max = p;
		else if (*p < *min)min = 0;
		temp = number[0];
		number[0] = *min;
		*min = temp;
		if (max == number)max = min;
		temp = number[9];
		number[9] = *max;
		*max = temp;
}
void output(int *number)
{
	int *p;
	printf("Now,they are: \n");
	for(p = number; p < number + 10; p++)
		printf("%d\n", *p);
}
