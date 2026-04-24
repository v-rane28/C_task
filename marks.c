#include<stdio.h>
int main()
{
    int marks;
    printf("Enter The Marks:");
    scanf("%d",&marks);
    if(marks>=80)
    {
        printf("Best Marks...");
    }
    else if(marks>=70)
    {
        printf("Good Marks...");
    }
    else if(marks>=60)
    {
        printf("Avg Marks...");
    }
    else{
        printf("Your Fail....");
    }

}