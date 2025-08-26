/*

Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("ZERO");
    }
    else
    {
        if(n<0)
        {
            printf("NEGATIVE");
        }
        else
        {
            printf("POSITIVE");
        }
    }
}

/*
OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-6> gcc integer.c -o ./integer.exe
PS C:\Users\asus\Desktop\100-days-code\day-6> ./integer.exe
Enter a number 
0
ZERO
PS C:\Users\asus\Desktop\100-days-code\day-6> gcc integer.c
PS C:\Users\asus\Desktop\100-days-code\day-6> ./integer.exe
Enter a number
-5
NEGATIVE
PS C:\Users\asus\Desktop\100-days-code\day-6> gcc integer.c
PS C:\Users\asus\Desktop\100-days-code\day-6> ./integer.exe
Enter a number
10
POSITIVE
*/