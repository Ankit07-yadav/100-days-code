/*


Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number \n");
    scanf("%d",&num);

    for (int i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("%d is a Perfect number",num);
    }
    else
    printf("%d is not a perfect nummber",num);
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-21> gcc perfect.c -o ./perfect.exe
PS C:\Users\asus\Desktop\100-days-code\day-21> ./perfect.exe
Enter a number 
6
6 is a Perfect number
PS C:\Users\asus\Desktop\100-days-code\day-21> gcc perfect.c -o ./perfect.exe
PS C:\Users\asus\Desktop\100-days-code\day-21> ./perfect.exe
Enter a number 
10
10 is not a perfect nummber

*/