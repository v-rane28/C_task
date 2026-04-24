#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter a Three Number:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1 > num2 && num1 > num3)
    {
        printf("Num1 Is Greater Number");
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("Num2 Is Greater Number");
    }
    else
    {
        printf("Number Three Is Greater Number");
    }
}