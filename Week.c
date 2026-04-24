#include<stdio.h>
int main()
{
    int choice;
    printf("Choose the day From Below:\n");
    printf("1.Sunday\n2.Monday\n3.tuesday\n4.Wensday\n5.Thursday\n6.Friday\n7.Saturday\n");
    printf("Chooose Any:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
                printf("Sunday...");
                break;
        case 2:
                printf("Monday...");
                break;
        case 3:
                printf("tuesday...");
                break;
        case 4:
                printf("Wensday...");
                break;
        case 5:
                printf("Thursday...");
                break;
        case 6:
                printf("Friday...");
                break;
        case 7:
                printf("Saturday...");
                break;
        default :
                printf("Your Choice is Wrong...");
    }
}