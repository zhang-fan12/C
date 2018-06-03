#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void mofangzhen(int n)
{
	if (n % 2 == 0)
	{
		printf("it do not have a mofangzhen!\n");
		return;
	}
		int p, q;
		int tp, tq;
		int v;
		int a[20][20] = { 0 };

		a[0][n / 2] = 1;
		for (p = 0, q = n / 2, v = 2; v <= n*n; v++)
		{
			tp = p;
			tq = q;

			p = p - 1;
			q = q + 1;
			if (p < 0) p = p + n;
			if (q >= n) q = q - n;
			if (a[p][q] == 0)
				a[p][q] = v;
			else {
				p = tp;
				q = tq;
				p = p + 1;
				if (p >= n)p = p - n;
				a[p][q] = v;
			}
		}
		for (p = 0; p < n; p++)
		{
			for (q = 0; q < n; q++)
				printf("%5d", a[p][q]);
			printf("\n");
		}
	}

void main() {
	int x;
	printf("输入一个数:");
	scanf("%d", &x);
	printf("%d阶魔方阵为：\n",x);
	mofangzhen(x);
	printf("\n");
	system("pause");
}


		
		

