/*

Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/

#include<stdio.h>

int main()
{
    FILE *ptr=NULL;
    ptr=fopen("info.txt","r");

    char str[50];
    while(fgets(str,sizeof(str),ptr)!=NULL)
    { printf("%s",str);
    }
    fclose(ptr);
    return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-73> ./fgets.exe
Name: ankit
Age: 19


*/