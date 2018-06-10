#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 5
struct student
{
	char num[10];
	char name[10];
	int score[5];
}stu[N];

int main()
{
	void print(struct student stu[6]);
	int i;
	int j;
	for (i = 0; i < N; i++)
	{
		printf("\ninput score of student %d:\n", i + 1);
		printf("NO.:");
		scanf("%s", stu[i].num);
		printf("name:");
		scanf("%s",stu[i].name);
		for (j = 0; j < 3; j++)
		{
			printf("score%d:", j + 1);
			scanf("%d", &stu[i].score[j]);
		}
		printf("\n");
	}
	print(stu);
	printf("\n");

	system("pause");
}
void print(struct student stu[6])
{
	int i;
	int j;
	printf("\nNO.name score1 score2 score3\n");
	for (i = 0; i < N; i++)
	{
		printf("%5s%10s", stu[i].num, stu[i].name);
		for (j = 0; j < 3; j++)
			printf("%9d", stu[i].score[j]);
		printf("\n");
	}
}


