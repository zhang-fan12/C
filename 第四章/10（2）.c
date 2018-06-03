#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int branch;
	int I;//利润
	double bonus;
	double bon1;
	double bon2;
	double bon4;
	double bon6;
	double bon10;
	bon1 = 100000 * 0.1;
	bon2 = bon1 + 100000 * 0.075;
	bon4 = bon2 + 200000 * 0.05;
	bon6 = bon4 + 200000 * 0.03;
	bon10 = bon6 + 400000 * 0.015;
	bonus = bon1 + bon2 + bon4 + bon6 + bon10;

	printf("请输入当月利润");
	scanf("%d\n", &I);
	branch = I / 100000;
	if (branch> 10)branch= 10;
	switch (branch)
	{
	case0: bonus = I*0.1; break;
	case1:bonus = bon1 + (I - 100000)*0.075; break;
	case2:
	case3:bonus = bon2 + (I - 200000)*0.05; break;
	case4:
	case5:bonus = bon4 + (I - 400000)*0.03; break;
	case6:
	case7:
	case8:
	case9:bonus = bon6 + (I - 600000)*0.015; break;
	case10:bonus = bon10 + (I - 1000000)*0.01;
	}
	printf("奖金是%10.2f\n", bonus);
	printf("\n");

	system("pause");
}
