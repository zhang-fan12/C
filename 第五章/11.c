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
	printf("第十次落地时共经过%fm\n", sn);
	printf("第十次反弹%fm\n", hn);
	printf("\n");

	system("pause");
}
