#include<stdio.h>
/* int main()
{
    FILE *new;
    new = fopen("Second.txt","w");
    fputc('a',new);
    fclose(new);
} */

/* int main()
{
    FILE *new;
    char c;
    new = fopen("Second.txt","r");
    while ((c=fgetc(new))!=EOF)
    {
        printf("%c",c);
    }
    fclose(new);
    
} */

/* int main()
{
    FILE *new;
    new = fopen("Second.txt","w");
    fputs("I am Vaibhav",new);
    fclose(new);
} */

int main()
{
    FILE *new;
    new = fopen("Second.txt","r");
    char c[300];
    printf("%s",fgets(c,200,new));
    fclose(new);
}