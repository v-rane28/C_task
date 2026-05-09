#include<stdio.h>
int main()
{
    FILE *new;
    new = fopen("Second.txt","w+");
    fputs("Hello Nayan",new);
    fseek(new,0,SEEK_END);
    //fputs("Vaibhav",new);
    int len = ftell(new);
    printf("Lengthh Of File:%d",len);
    fclose(new);
}