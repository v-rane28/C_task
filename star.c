#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j,k;
 for(i=0;i<=6;i++)
 {
     if(i>=3)
     {
         for(k=3;k<=i;k++)
         {
             printf("*");
         }
        printf("\n");
     }
    else
    {
        for(j=3;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
 }
return 0;
}