#include<stdio.h>
int main()
{
    int time;
    printf("Enter The Time:");
    scanf("%d",&time);
    switch(time)
    {
        case 7:
                printf("Good Morning");
                break;
        case 12:
                printf("Good Afternoon");
                break;
        case 4:
                printf("Good Evening");
                break;
        case 8:
                printf("Good Night");
                break;
        default :
                printf("You Choose Wrong option");   
    }
}
