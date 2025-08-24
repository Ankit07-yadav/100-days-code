/*
Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the sum limit \n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum=%d",sum);
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-4> gcc sum.c -o ./sum.exe
PS C:\Users\asus\Desktop\100-days-code\day-4> ./sum.exe
Enter the sum limit 
5
Sum=15
PS C:\Users\asus\Desktop\100-days-code\day-4> gcc sum.c             
PS C:\Users\asus\Desktop\100-days-code\day-4> ./sum.exe 
Enter the sum limit 
10
Sum=55
*/