#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[80];
	char s2[80];
	int i;
	printf("input s2:");
	scanf("%s", s2);
	for (i = 0; i <= strlen(s2); i++)
		s1[i] = s2[i];
	printf("s1:%s\n", s1);
	printf("\n");
	system("pause");
}
