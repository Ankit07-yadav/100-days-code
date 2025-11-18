#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    FILE *ptr;
    ptr=fopen("input.txt","r");
    
    if(ptr==NULL)
    {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    FILE *ptr1;
    ptr1=fopen("output.txt","w");
    
    if(ptr1==NULL)
    {
        printf("Error: Could not open output.txt\n");
        fclose(ptr);
        return 1;
    }

    char str[50];
    fgets(str,sizeof(str),ptr);

    for(int i=0; str[i]!='\0'; i++)
        str[i]=toupper(str[i]);

    fputs(str,ptr1);

    printf("Program successful\n");

    fclose(ptr);
    fclose(ptr1);
    
    return 0;
}