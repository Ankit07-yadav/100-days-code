/*Q1: Write a program to input two numbers and display their sum.


Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum of two numbers= %d",sum);
}


/*
PS C:\Users\asus\Desktop\100-days-code\day-1> gcc program1.c
PS C:\Users\asus\Desktop\100-days-code\day-1> ./program1.exe
Enter two numbers 
3 4
sum of two numbers= 7
PS C:\Users\asus\Desktop\100-days-code\day-1> gcc program1.c
PS C:\Users\asus\Desktop\100-days-code\day-1> ./program1.exe
Enter two numbers 
-1 20
sum of two numbers= 19
*/