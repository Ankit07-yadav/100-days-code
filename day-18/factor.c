/*

Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    printf("Factors of number %d=",num);
    for(int i=1 ; i<=num ; i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-18> gcc factor.c -o ./factor.exe
PS C:\Users\asus\Desktop\100-days-code\day-18> ./factor.exe
Enter a number 
6
Factors of number 6=1 2 3 6 
PS C:\Users\asus\Desktop\100-days-code\day-18> gcc factor.c -o ./factor.exe
PS C:\Users\asus\Desktop\100-days-code\day-18> ./factor.exe
Enter a number 
10
Factors of number 10=1 2 5 10


*/