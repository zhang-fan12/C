#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926f

void main()
{
	float r;
	float area;
	printf("������Բ�İ뾶");
	scanf("%f",&r);
	printf("%f %f\n", PI,r);
	area = PI*r*r;
	printf("Բ�������%f", area);
	printf("\n");

	system("pause");
}
