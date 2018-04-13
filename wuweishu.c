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
	printf("输入一个不多于5位数的正整数：");
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
	 printf("位数：%d\n", place);
	 
	 ten_thousand = number / 10000;
	 thousand = (int)(number - ten_thousand * 10000) / 1000;
	 hundred = (int)(number - ten_thousand * 10000 - thousand * 1000) / 100;
	 ten = (int)(number - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
	 gewei = (int)(number - ten_thousand * 10000 - thousand* 1000 - hundred * 100 - ten * 10);
	 printf("%d个位\n",gewei);
	 printf("%d十位\n",ten);
	 printf("%d百位\n",hundred);
	 printf("%d千位\n",thousand);
	 printf("%d万位\n",ten_thousand);
	 if (place == 5)
	 {
		 printf("原数为：%d%d%d%d%d\n", ten_thousand, thousand, hundred, ten, hundred);
		 printf("逆序输出：%d%d%d%d%d\n", gewei, ten, hundred, thousand, ten_thousand);
	 }
	 if(place==4)
	 {
		 printf("原数为：%d%d%d%d\n", thousand,hundred,ten,gewei);
		 printf("逆序输出：%d%d%d%d\n", gewei, ten, hundred, thousand);

	 }
	 if (place == 3)
	 {
		 printf("原数为：%d%d%d%\n",hundred, ten, gewei);
		 printf("逆序输出：%d%d%d\n", gewei,ten,hundred);
	 }
	if (place == 2)
	 {
		 printf("原数为：%d%d\n", ten, gewei);
		 printf("逆序输出：%d%d\n", gewei,ten );
	 }
	  if (place == 1)
	 {
		 printf("原数为：%d", gewei);
		 printf("逆序输出：%d\n", gewei);
	 }
	printf("\n");

	system("pause");
}
