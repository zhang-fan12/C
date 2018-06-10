#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int upper = 0;
	int lower = 0;
	int digit = 0;
	int space = 0;
	int other = 0;
	int i = 0;
	char *p;
	char s[30];
	printf("input string:");
	while ((s[i] = getchar()) != '\n')
		i++;
	p = s;
	while (*p != '\n')
	{
		if (('A' <= *p) && (*p <= 'Z'))
			++upper;
		else if (('a' <= *p) && (*p <= 'z'))
			++lower;
		else if (*p == ' ')
			++space;
		else if ((*p <= '9') && (*p >= '0'))
			++digit;
		else
			++other;
		p++;
	}
	printf("upper:%d     lower:%d\n", upper, lower);
	printf("space:%d     digit:%d    other:%d", space, digit, other);
	printf("\n");
	system("pause");
}
