/*

Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

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
            printf(" ");
        }
        for(int j=n;j>=i;j--)
        {
            printf("*" );
        }
        printf("\n");
    }
    
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-25> gcc pattern-2.c -o ./pattern-2.exe
PS C:\Users\asus\Desktop\100-days-code\day-25>  ./pattern-2.exe                  
Enter the number of rows5
 *****
  ****
   ***
    **
     * 

*/