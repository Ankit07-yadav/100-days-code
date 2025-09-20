/*


Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the numbers of rows \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-23> gcc pattern.c -o ./pattern.exe 
PS C:\Users\asus\Desktop\100-days-code\day-23> ./pattern.exe
Enter the numbers of rows 
5
*****
*****
*****
*****
*****

*/