/*

Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/


#include<stdio.h>
int main()
{
    int n;
    printf("Enter tha number of rows \n");
    scanf("%d",&n);

    for(int i=1; i<=n; i=i+2)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=n-2; i>=0; i=i-2)
    {
    for(int j=1; j<=i; j++)
    {
        printf("*");
    }
    printf("\n");
    }
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-27> gcc pattern-1.c -o ./pattern-1.exe
PS C:\Users\asus\Desktop\100-days-code\day-27>  ./pattern-1.exe
Enter tha number of rows 
9
*
***
*****
*******
*********
*******
*****
***
*

*/