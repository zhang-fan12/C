#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int grade;
	printf("����ѧ���ɼ���");
	scanf("%d\n", &grade);
	if (grade >= 90)
	{
		printf("\'A\'\n");
	}
	else if (grade >= 80)
	{
		printf("\'B\'\n");
	}
	else if (grade >= 70)
	{
		printf("\'C'\n");
	}
	else if (grade >= 60)
	{
		printf("\'D'\n");
	}
	else
	{
		printf("\'E'\n");
	}
	
	//�˴�д�������

	printf("\n");

	system("pause");
}
