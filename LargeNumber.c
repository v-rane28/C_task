#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter Number A B C:");
    scanf("%d %d %d", &a, &b, &c);

    if(a>=b && a>=c)
    { 
        printf("Largest Number is:%d",a);
    }
    else if(b>=a && b>=c)
    {
        printf("Largest Number is:%d",b);
    }
    else
    {
        printf("Largest Number is:%d ",c);
    }
}