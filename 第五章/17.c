#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char i;//i��a�Ķ���
	char j;//j��b�Ķ���
	char k;//k��c�Ķ���
	for (i = 'X'; i <= 'Z'; i++)
		for (j = 'X'; j <= 'Z'; j++)
			if (i != j)
				for (k = 'X'; k <= 'Z'; k++)
					if (i != k && j != k)
						if (i != 'X'&&k != 'X'&& k != 'Z')
							printf("A--%c\nB--%c\nC--%c\n", i, j, k);

	printf("\n");

	system("pause");
}
