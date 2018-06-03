#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 15

int main()
{
	int i;
	int number;
	int top;
	int bott;
	int mid;
	int loca;
	int a[N];
	int flag = 1;
	int sign;
	char c;
	printf("输入数据：\n");
	scanf("%d", &a[0]);
	i = 1;
	while (i < N)
	{
		scanf("%d", &a[i]);
		if (a[i] >= a[i - 1])
			i++;
		else
			printf("重新输入此数：\n");
	}
	printf("\n");
	for (i = 0; i < N; i++)
		printf("%5d", a[i]);
	printf("\n");
	while (flag)
	{
		printf("要查找哪个数：");
		scanf("%d", &number);
		sign = 0;
		top = 0;
		bott = N - 1;
		if ((number<a[0]) || (number>a[N - 1]))
			loca = -1;
		while ((!sign) && (top <= bott))
		{
			mid = (bott + top) / 2;
			if (number == a[mid])
			{
				loca = mid;
				printf("Has found %d,its position is %d \n", number, loca + 1);
				sign = 1;
			}
			else if (number < a[mid])
				bott = mid - 1;
			else
				top = mid + 1;
		}
		if (!sign || loca == -1)
			printf("找不到%d.\n", number);
		printf("是否继续查找(Y/N)？");
		scanf("%c", &c);
		if (c == 'N' || c == 'n')
			flag = 0;
	}
	printf("\n");

	system("pause");
}
