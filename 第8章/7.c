#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	void copystr(char *, char *, int);
	int m;
	char str1[30];
	char str2[30];
	printf("input string:");
	gets(str1);
	printf("which character that begin to copy?");
	scanf("%d", &m);
	if (strlen(str1) < m)
		printf("input error!");
	else
	{
		copystr(str1, str2, m);
		printf("result:%s\n", str2);
	}
	printf("\n");
	system("pause");
}
void copystr(char *p1, char *p2, int m)
{
	int n = 0;
	while (n < m - 1)
	{
		n++;
		p1++;
	}
	while (*p1 != '\0')
	{
		*p2 = *p1;
		p1++;
		p2++;
	}
	*p2 = '\0';
}
