#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    ptr=fopen("file.txt","r");

    if(ptr==NULL)
    {
        printf("File does not exist ");
    }
    else
    {
    char str[100];
    fgets(str,sizeof(str),ptr);
    printf("%s",str);

     fclose(ptr);
    }
    return 0;
}