#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float solut(float a, float b, float c, float d);
	float a=1;
	float b=2;
	float c=3;
	float d=4;
	printf("x=%10.7f\n", solut(a, b, c, d));
	system("pause");
}
float solut(float a,float b,float c,float d)
{
	float x = 1;
	float x0;
	float f;
	float f1;
	x0 = x;
	do
	{
		x0 = x;
		f = ((a * x0 + b) * x0 + c)* x0 + d;
		f1 = (3 * a * x0 + 2 * b)* x0 + c;
		x = x0 - f / f1;
	} 
	while (fabs(x - x0) >= 1e-3);
	return x;
	printf("\n");
	system("pause");
}
