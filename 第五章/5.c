#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int n;
	int i;
	int sum = 0;
	int term = 0;
	printf(" ‰»Îa:");
	scanf("%d", &a);
	printf(" ‰»În:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		term = term * 10 + a;
		sum = sum + term;
	}
	printf("a+aa+aaa+°≠+a°≠a=%d\n", sum);
	printf("\n");

	system("pause");
}
