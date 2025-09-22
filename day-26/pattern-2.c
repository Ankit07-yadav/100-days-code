/*

Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i=i+2)
    {
        for(int j=1;j<=i;j++)
        {
        printf("*\n");
        }
        printf("\n");
    }
    for(int i=3;i>=1;i=i-2)
    {
        for(int j=1;j<=i;j++)
        {
        printf("*\n");
        }
        printf("\n");
    }
     return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-26> gcc pattern-2.c -o ./pattern-2.exe
PS C:\Users\asus\Desktop\100-days-code\day-26>  ./pattern-2.exe
*

*
*
*

*
*
*
*
*

*
*
*

*


*/