#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int x;
	float p(n, x);
	printf("\ninput n & x:");
	scanf("%d,%d", &n, &x);
	printf("n=%d,x=%d\n", n, x);
	printf("P%d(%d)=%6.2f\n", n, x, p(n, x));
	printf("\n");
	system("pause");
}
float p(int n,int x)
{
	if (n == 0)
		return(1);
	else if (n == 1)
		return(0);
	else
		return(2 * n - 1)*x*p((n - 1), x) - (n - 1)*p((n - 2), x) / n;


}