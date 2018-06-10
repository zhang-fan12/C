#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int length(char *p);
	int len;
	char str[30];
	printf("input string:");
	scanf("%s", str);
	len = length(str);
	printf("The length of string is %d.\n", len);
	printf("\n");

	system("pause");
}
int length(char *p)
{
	int n = 0;
	while (*p != '\0')
	{
		n++;
		p++;
	}
	return(n);
}