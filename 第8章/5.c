#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int k;
	int m;
	int n;
	int num[50];
	int *p;
		printf("\ninput number of person:n=");
		scanf("%d", &n);
		p = num;
		for (i = 0; i < n; i++)
			*(p + i) = i + 1;
		i = 0;
		k = 0;
		m = 0;
		while (m < n - 1)
		{
			if (*(p + i) != 0)
				k++;
			if (k == 3)
			{
				*(p + i)= 0;
				k = 0;
				m++;
			}
			i++;
			if (i == n)i = 0;
		}
		while (*p == 0)
			p++;
		printf("The last one is NO.%d\n", *p);
	printf("\n");
	system("pause");
}

