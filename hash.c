#include <stdio.h>

int main() {
    int i, j;

    for(i=0; i<5; i++) 
    {
        
        for(j=0; j<5; j++) 
        {  
            if(i==1||i==3||j==1||j==3)
            printf("5");
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}