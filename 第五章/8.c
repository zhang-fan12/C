#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()

{
	int n;//ˮ�ɻ���
	int a;//��λ
	int ten;//ʮλ
	int hundred;//��λ
	
	
		for (n = 100; n < 1000;n++)
		{
			hundred = (int)(n / 100);
			ten = (int)(n - hundred * 100) / 10;
			a = (int)(n - hundred * 100 - ten * 10);
			if (n == a*a*a + ten*ten*ten + hundred*hundred*hundred)
			{
				printf("���ˮ�ɻ���%d\n", n);

			}
		}
	printf("\n");

	system("pause");
}
