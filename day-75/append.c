#include<stdio.h>

int main()
{
    FILE *ptr=NULL;
    ptr=fopen("hello.txt","a+");

    char str[100];
    printf("Enter a text to be append \n");
    scanf("%[^\n]",&str);

    fputs("/n",ptr);
    fputs(str,ptr);

    fclose(ptr);

    return 0;
}