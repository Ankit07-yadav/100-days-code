/*


Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
int main()
{
    int num,r,temp=0,sum=0;
    printf("Enter a number \n");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        r= temp%10;
        sum+=r*r*r;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("%d is a Armstrong number",num);
    }
    else
    {
        printf("%d is not a Armstrong number",num);
    }
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-17> gcc armstrong.c -o ./armstrong.exe
PS C:\Users\asus\Desktop\100-days-code\day-17> ./armstrong.exe
Enter a number 
153
153 is a Armstrong number
PS C:\Users\asus\Desktop\100-days-code\day-17> gcc armstrong.c -o ./armstrong.exe
PS C:\Users\asus\Desktop\100-days-code\day-17> ./armstrong.exe
Enter a number 
123
123 is not a Armstrong number


*/