/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include<stdio.h>
int main()
{
    int a,b,sum=0,diff=0,pro=0,quo=0;
    printf("enter two numbers \n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    quo=a/b;
    printf("sum=%d, ",sum );
    printf("Diff=%d,",diff);
    printf("Product=%d, ",pro);
    printf("Quotient=%d",quo);
}

/*


PS C:\Users\asus\Desktop\100-days-code\day-1> gcc program2.c -o ./program2.exe
PS C:\Users\asus\Desktop\100-days-code\day-1> ./program2.exe
enter two numbers 
10 2
sum=12, Diff=8,Product=20, Quotient=5
PS C:\Users\asus\Desktop\100-days-code\day-1> gcc program2.c
PS C:\Users\asus\Desktop\100-days-code\day-1> ./program2.exe
enter two numbers 
7 3
sum=10, Diff=4,Product=21, Quotient=2

*/