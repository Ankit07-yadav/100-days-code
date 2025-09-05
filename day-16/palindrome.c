/*

Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>
int main()
{
    int num, r,temp;
    int revnum = 0;
    printf("Enter a number \n");
    scanf("%d", &num);
    temp=num;
    while(num > 0)
    {
        r = num % 10;
        revnum = revnum * 10 + r;
        num = num / 10;
    }
    printf("Reverse number = %d\n", revnum);
    if(revnum==temp)
    {
        printf("PALINDROME NUMBER");
    }
    else
    {
        printf("NOT A PALINDROME NUMBER");
    }
    return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-16> gcc palindrome.c -o ./palindrome.exe
PS C:\Users\asus\Desktop\100-days-code\day-16> ./palindrome.exe
Enter a number 
121
Reverse number = 121
PALINDROME NUMBER
PS C:\Users\asus\Desktop\100-days-code\day-16> gcc palindrome.c -o ./palindrome.exe
PS C:\Users\asus\Desktop\100-days-code\day-16> ./palindrome.exe
Enter a number 
123
Reverse number = 321
NOT A PALINDROME NUMBER


*/