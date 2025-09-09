/*

Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include<stdio.h>
int main()
{
    int num,r,sum=0;
    printf("Enter a number \n");
    scanf("%d",&num);

    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("Sum of the digit of the nummber = %d",sum);

    return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-19> gcc sum.c -o ./sum.exe
PS C:\Users\asus\Desktop\100-days-code\day-19> ./sum.exe
Enter a number 
123
Sum of the digit of the nummber = 6
PS C:\Users\asus\Desktop\100-days-code\day-19> gcc sum.c -o ./sum.exe
PS C:\Users\asus\Desktop\100-days-code\day-19> ./sum.exe
Enter a number 
999
Sum of the digit of the nummber = 27

*/