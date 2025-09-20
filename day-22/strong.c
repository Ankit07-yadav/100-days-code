/*

Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>
int main()
{
    int num,r,sum=0;
    int fact=1;
    printf("Enter a number \n");
    scanf("%d",&num);
    int temp=num;
    while(temp>0)
    {
        r=temp%10;
        fact=1;
        for(int i=1; i<=r; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("%d is a strong number ",num);
    }
    else
    {
        printf("%d is not a strong number",num);
    }
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-22> gcc strong.c -o ./strong.exe
PS C:\Users\asus\Desktop\100-days-code\day-22> ./strong.exe
Enter a number 
145
145 is a strong number 
PS C:\Users\asus\Desktop\100-days-code\day-22> gcc strong.c -o ./strong.exe
PS C:\Users\asus\Desktop\100-days-code\day-22> ./strong.exe
Enter a number 
123
123 is not a strong number

*/