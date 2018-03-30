#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926f

void main()
{
	float r;
	float area;
	printf("请输入圆的半径");
	scanf("%f",&r);
	printf("%f %f\n", PI,r);
	area = PI*r*r;
	printf("圆的面积：%f", area);
	printf("\n");

	system("pause");
}
