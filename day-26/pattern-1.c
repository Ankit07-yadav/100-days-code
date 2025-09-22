/*
Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(int j=n-i;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}


/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-26> gcc pattern-1.c -o ./pattern-1.exe
PS C:\Users\asus\Desktop\100-days-code\day-26>  ./pattern-1.exe
Enter the number of rows5
    5
   45
  345
 2345
12345

*/