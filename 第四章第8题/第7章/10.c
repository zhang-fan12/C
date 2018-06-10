#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int alp(char);
	int longest(char);
	int i;
	char line[100];
	printf("input one line:\n");
	gets(line);
	printf("The longest word is:\n");
	for (i = longest(line); alp(line[i]); i++)
		printf("%c", line[i]);
	printf("\n");
	system("pause");
}
int alp(char c)
{
	if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'z'))
		return(1);
	else
		return(0);
}
	int longest(char string[])
	{
		int len = 0;
		int i;
		int length = 0;
		int flag = 1;
		int place = 0;
		int point;
		for (i = 0; i <= strlen(string); i++)
			if (alp(string[i]))
				if (flag)
				{
					point = i;
					flag = 0;
				}
				else
					len++;
		    else
		    	{ 
					flag = 1;
					if (len >= length)
					{
						length = len;
						place = point;
						len = 0;
					}
			}
		return(place);
	}

