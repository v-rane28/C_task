#include<stdio.h>
void bharat()
{
    int a,b;
    printf("\nEnter The Value For A:");
    scanf("%d",&a);
    printf("Enter A Value For B:");
    scanf("%d",&b);
    if(a>=b)
    {
        printf("A Is Big...");
    }
    else
    {
        printf("B Is Big...");
    }   
}
int main()
{
    bharat();
    bharat();
    return 0;

}