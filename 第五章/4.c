#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int letters = 0;
	int space = 0;
	int digit = 0;
	int other = 0;
	char c;
	printf("������һ���ַ���\n");
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
			letters++;
		else  if (c == ' ')
			space++;
		else if (c >= '0'&&c <= '9')
			digit++;
		else
			other++;
	}
printf("��ĸ���� %d\n �ո�����%d\n ������;%d\n �����ַ���%d\n ", letters, space, digit, other);
printf("\n");
system("pause");
}
