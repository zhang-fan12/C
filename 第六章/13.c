#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char sl[80]; 
	char s2[40];
	int i = 0;
	int j = 0;
	printf("input string1:");
	scanf("%s", s1);
	printf("input string2:");
	scanf("%s", s2);
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		s1[i++] = s2[j++];
	sl[i] = '\0';
	printf("\nThe new string is :%s\n", s1);
	printf("\n");

	system("pause");
}
