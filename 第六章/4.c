#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
int n=6,i=0,b=0,temp=0;

   int a[6]={1,2,4,5,8};

   scanf("%d",&b);

   for(i=n-2;i>=0;i--)
   {

       if(a[i]>b)
        {
           a[i+1]=a[i];
        }
        else 
        {
            a[i+1]=b;
            break;
        }


   }


   for(i=0;i<n;i++)
   {
       printf("%d\t",a[i]);            

   }


    system("pause");

   
}
