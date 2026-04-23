#include<stdio.h>
#include<conio.h>
int main()
{
    int num,origal,rem,rev=0;

    printf("Enter a number:");
    scanf("%d",&num);

    origal=num;

    while (num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(origal==rev)
    {
        printf("The Number Is Palindrome...");
    }
    else
    {
        printf("The Number Is not Palindrome...");
    }
    return 0;
}