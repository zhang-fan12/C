#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m;
	int n;
	int r;
	printf("输入两个正整数m和n:");
	scanf("%d%d", &m, &n);
	
		r = m%n;
		while (r != 0) 
		{
			m = n;
			n = r;
			r = m%n;
         }
	printf("GBS:%d\n", m);
	printf("GYS:%d\n", m*n / m);
	
	printf("\n");

	system("pause");
}
