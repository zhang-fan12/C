#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int i;
	int s = 0;
	int t = 1;

	for (int i = 1; i <= 20; i++) {
		t *= i;
		s += t;
	}
	printf("Êä³öºÍ%d", s);
	printf("\n");

	system("pause");
}
