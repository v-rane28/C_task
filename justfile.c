#include<stdio.h>
/* int main()
{
    FILE *f;
    f=fopen("Vaibhav.txt","w");
    fprintf(f,"My Name is Vaibhav");
    fclose(f);
} */
int main()
{
    FILE *new;
    char ch[13];
    new = fopen("Vaibhav.txt","r");
    
    while((fscanf(new,"%s",ch))!=EOF)
    {
        printf("%s ",ch);
    }
    fclose(new);
}