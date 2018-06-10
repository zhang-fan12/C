#include<stdio.h>
#include <stdlib.h>
int main()
{
	void swap(int *p1, int *p2);
	int n1;
	int n2;
	int n3;
	int *p1;
	int *p2;
	int *p3;
	n1 = 12;
	n2 = 14;
	n3 = 10;
	printf("input three integer:%d,%d,%d", n1, n2, n3);

	p1 = &n1;
	p2 = &n2;
	p3 = &n3;
	if (n1 > n2)swap(p1, p2);
	if (n1 > n3)swap(p1, p3);
	if (n2 > n3)swap(p2, p3);
	printf("\nNow the order is:%d,%d,%d\n", n1, n2, n3);
	system("pause");
}
void swap(int *p1, int *p2)
{
	int p;
	p = *p1;
	*p1 = *p2;
	*p2 = p;
}