#include<stdio.h>

int main()
{
    int copy=0;
    FILE *ptr1=NULL;
    ptr1=fopen("source.txt","r");

    FILE *ptr2=NULL;
    ptr2=fopen("destination.txt","w");

    char str[100];
    while(fgets(str,sizeof(str),ptr1)!=NULL)
    {
        fputs(str,ptr2);
        copy++;
    }

    if(copy==0)
    {
        printf("File is empty ");
    }
    else
    {
        printf("File copied successfully to destination.txt");
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
