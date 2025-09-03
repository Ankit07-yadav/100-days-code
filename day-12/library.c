/*

Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/

#include<stdio.h>
int main()
{
    int limit_day, sub_day , fine , delay=0;
    printf("Enter the limit day and submission day \n");
    scanf("%d %d",&limit_day, &sub_day);
    delay=sub_day-limit_day;
    printf("DELAY %d \n",delay);
    if(delay<=5)
    {
        fine=(delay)*2;
        printf("Fine ₹%d",fine);
    }
    else if(delay<=10)
    {
        fine=delay*4;
        printf("Fine ₹%d",fine);   
    }
    else if(delay<=30)
    {
        fine=delay*6;
         printf("Fine ₹%d",fine);
    }
    else if(delay>30)
    {
        printf("Membership cancel");
    }
    else
    {
        printf("No fine");
    }
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-12> gcc library.c -o ./library.exe
PS C:\Users\asus\Desktop\100-days-code\day-12> ./library.exe
Enter the limit day and submission day 
10 14
DELAY 4 
Fine Γé╣8
PS C:\Users\asus\Desktop\100-days-code\day-12> gcc library.c -o ./library.exe
PS C:\Users\asus\Desktop\100-days-code\day-12> ./library.exe
Enter the limit day and submission day 
10 18
DELAY 8 
Fine Γé╣32
PS C:\Users\asus\Desktop\100-days-code\day-12> gcc library.c -o ./library.exe
PS C:\Users\asus\Desktop\100-days-code\day-12> ./library.exe
Enter the limit day and submission day 
10 25
DELAY 15 
Fine Γé╣90
PS C:\Users\asus\Desktop\100-days-code\day-12> gcc library.c -o ./library.exe
PS C:\Users\asus\Desktop\100-days-code\day-12> ./library.exe
Enter the limit day and submission day 
10 41
DELAY 31 
Membership cancel
*/