/*
Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    {
        printf("Largest is %d",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("Largest is %d",num2);
    }
    else
    {
        printf("Largest is %d",num3);
    }
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-8> gcc greatest.c -o ./greatest.exe
PS C:\Users\asus\Desktop\100-days-code\day-8> ./greatest.exe                  
Enter three numbers 
3 7 5
Largest is 7
PS C:\Users\asus\Desktop\100-days-code\day-8> gcc greatest.c                  
PS C:\Users\asus\Desktop\100-days-code\day-8> ./greatest.exe
Enter three numbers 
-1 -5 0
Largest is 0
*/