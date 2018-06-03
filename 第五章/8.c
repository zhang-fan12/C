#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()

{
	int n;//水仙花数
	int a;//个位
	int ten;//十位
	int hundred;//百位
	
	
		for (n = 100; n < 1000;n++)
		{
			hundred = (int)(n / 100);
			ten = (int)(n - hundred * 100) / 10;
			a = (int)(n - hundred * 100 - ten * 10);
			if (n == a*a*a + ten*ten*ten + hundred*hundred*hundred)
			{
				printf("输出水仙花数%d\n", n);

			}
		}
	printf("\n");

	system("pause");
}
