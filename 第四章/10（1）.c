#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float I;
	float jiangjin;
	printf("请输入利润总数：");
	scanf("%f\n", &I);
	if (I <= 100000)
	{
		jiangjin = I*0.1;
			printf("奖金:%f", jiangjin);
	}
	else if ( I <= 200000)
	{
		jiangjin = (100000 * 0.1 + (I - 100000)*0.075);
		printf("奖金:%f", jiangjin);
	}
	else if (I <= 400000 )
	{
		jiangjin = (100000 * 0.1 + 100000 * 0.075 + (I - 200000)*0.005);
		printf("奖金:%f", jiangjin);
	}
	else if (I <= 600000 )
	{
		jiangjin = (100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (I - 400000)*0.03);
		printf("奖金:%f", jiangjin);
	}
	else if (I <= 1000000 )
	{
		jiangjin = (100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (I - 600000)*0.015);
		printf("奖金：%f", jiangjin);
	}
	else
	{
		jiangjin = (100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (I - 1000000)*0.001);
		printf("奖金:%f", jiangjin);
	}
	printf("\n");

	system("pause");
}
