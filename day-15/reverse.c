/*


Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include<stdio.h>
int main()
{
    int num, r;
    int revnum = 0;
    printf("Enter a number \n");
    scanf("%d", &num);
    while(num > 0)
    {
        r = num % 10;
        revnum = revnum * 10 + r;
        num = num / 10;
    }
    printf("Reverse number = %d\n", revnum);
    return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-15> gcc reverse.c -o ./reverse.exe
PS C:\Users\asus\Desktop\100-days-code\day-15> ./reverse.exe
Enter a number 
1234
Reverse number = 4321
PS C:\Users\asus\Desktop\100-days-code\day-15> gcc reverse.c -o ./reverse.exe
PS C:\Users\asus\Desktop\100-days-code\day-15> ./reverse.exe
Enter a number 
100
Reverse number = 1

*/