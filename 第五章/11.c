#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	double sn = 100;
	double hn = sn / 2;
	int n;
	for (n = 2; n <= 10; n++)
	{
		sn += 2 * hn;
		hn = hn / 2;

	}
	printf("��ʮ�����ʱ������%fm\n", sn);
	printf("��ʮ�η���%fm\n", hn);
	printf("\n");

	system("pause");
}
