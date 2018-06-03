#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[ ]={8 ,6 ,5 ,4 ,1};
	int j;
	int i;
	int temp;
	for (i=0;i<5;i++)
	{
	for(j=0;j<4-i;j++)
	{
		if (a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j]=temp;
			
		}
	}
}
    printf("ƒÊ–Ú≈≈–Ú «£∫");
    for(i=0;i<5;i++)
    {
    	printf("%d\t",a[i]);
	}
	 
    
	return 0;
}
