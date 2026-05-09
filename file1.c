#include<stdio.h>
int main()
{
    FILE *a;
    a=fopen("First.txt","r");
    char str[100];

    while(fscanf(a,"%s",str)!=EOF)
    {
        printf("%s ",str);
    }
    fclose(a);
}