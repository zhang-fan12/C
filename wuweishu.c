#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int  main()
{
	int number;
	int gewei;
	int ten;
	int hundred;
	int thousand;
	int ten_thousand;
	int place;
	printf("����һ��������5λ������������");
	scanf("%d\n", &number);
	 if (number>9999)
	{
		place = 5;
	}
	else if(number>999)
	{
		place = 4;
	}
	 else if (number>99)
	 {
		 place = 3;
	 }
	 else if (number>9)
	 {
		 place = 2;
	 }
	 else
	 {
		 place = 1;
	 }
	 printf("λ����%d\n", place);
	 
	 ten_thousand = number / 10000;
	 thousand = (int)(number - ten_thousand * 10000) / 1000;
	 hundred = (int)(number - ten_thousand * 10000 - thousand * 1000) / 100;
	 ten = (int)(number - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
	 gewei = (int)(number - ten_thousand * 10000 - thousand* 1000 - hundred * 100 - ten * 10);
	 printf("%d��λ\n",gewei);
	 printf("%dʮλ\n",ten);
	 printf("%d��λ\n",hundred);
	 printf("%dǧλ\n",thousand);
	 printf("%d��λ\n",ten_thousand);
	 if (place == 5)
	 {
		 printf("ԭ��Ϊ��%d%d%d%d%d\n", ten_thousand, thousand, hundred, ten, hundred);
		 printf("���������%d%d%d%d%d\n", gewei, ten, hundred, thousand, ten_thousand);
	 }
	 if(place==4)
	 {
		 printf("ԭ��Ϊ��%d%d%d%d\n", thousand,hundred,ten,gewei);
		 printf("���������%d%d%d%d\n", gewei, ten, hundred, thousand);

	 }
	 if (place == 3)
	 {
		 printf("ԭ��Ϊ��%d%d%d%\n",hundred, ten, gewei);
		 printf("���������%d%d%d\n", gewei,ten,hundred);
	 }
	if (place == 2)
	 {
		 printf("ԭ��Ϊ��%d%d\n", ten, gewei);
		 printf("���������%d%d\n", gewei,ten );
	 }
	  if (place == 1)
	 {
		 printf("ԭ��Ϊ��%d", gewei);
		 printf("���������%d\n", gewei);
	 }
	printf("\n");

	system("pause");
}
