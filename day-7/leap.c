/*

Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.


Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include<stdio.h>
int main()
{
    int year;
    printf("Enter year \n");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0)
    {
        printf("Leap year");
    }
    else if(year%400==0)
    {
        printf("leap year");
    }
    else 
    {
    printf("not a leap year");
    }
}

/*
OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-7> gcc leap.c -o ./leap.exe
PS C:\Users\asus\Desktop\100-days-code\day-7> ./leap.exe
Enter year 
2020
Leap year
PS C:\Users\asus\Desktop\100-days-code\day-7> gcc leap.c              
PS C:\Users\asus\Desktop\100-days-code\day-7> ./leap.exe 
Enter year 
1900
not a leap year
PS C:\Users\asus\Desktop\100-days-code\day-7> gcc leap.c 
PS C:\Users\asus\Desktop\100-days-code\day-7> ./leap.exe 
Enter year 
2000
leap year
*/