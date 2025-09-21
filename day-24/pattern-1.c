/*

Q47: Write a program to print the following pattern:
*
**
***
****
*****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* " );
        }
        printf("\n");
    }
    
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-24> gcc pattern-1.c -o ./pattern-1.exe
PS C:\Users\asus\Desktop\100-days-code\day-24> ./pattern-1.exe
Enter the number of rows5
* 
* *
* * *
* * * *
* * * * *


*/