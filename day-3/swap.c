/*

Q6: Write a program to swap two numbers using a third variable.


Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d \n",a);
    printf("b=%d",b);
}


/*
OUTPUT
PS C:\Users\asus\Desktop\100-days-code\day-3> gcc swap.c -o ./swap.exe
PS C:\Users\asus\Desktop\100-days-code\day-3> ./swap.exe
Enter two numbers33 5
a=5 
b=33
PS C:\Users\asus\Desktop\100-days-code\day-3> gcc swap.c              
PS C:\Users\asus\Desktop\100-days-code\day-3> ./swap.exe 
Enter two numbers-1 1
a=1 
b=-1
*/