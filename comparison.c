#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter A NUmber:\n");
    scanf("%d",&a);
    printf("Enter B Number:\n");
    scanf("%d",&b);

    if(a>b)
    {
        printf("A Is Bigger:\n");
    }
    else if(a==b)
    {
        printf("Both Numbers Are Same:\n");
    }
    else
    {
        printf("B Is Bigger:");
    }
}