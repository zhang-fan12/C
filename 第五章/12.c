#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int day;
	int a;//ժ������
	int b;//�Ե�����
	day = 9;
	b = 1;
	while (day > 0)
	{
		a = (b + 1) * 2;
		b = a;
		day--;
	}
	printf("total=%d\n", a);

	printf("\n");

	system("pause");
}
