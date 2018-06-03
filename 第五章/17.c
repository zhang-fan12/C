#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char i;//i是a的对手
	char j;//j是b的对手
	char k;//k是c的对手
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
