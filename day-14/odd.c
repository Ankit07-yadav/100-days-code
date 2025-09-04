/*

Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        sum += (2*i - 1);       
        printf("%d ", 2*i - 1); 
    }
    printf("\nSum of the first %d odd numbers = %d", n, sum);

    return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-14> gcc odd.c -o ./odd.exe
PS C:\Users\asus\Desktop\100-days-code\day-14> ./odd.exe
Enter the value of n 
3
1 3 5 
Sum of the first 3 odd numbers = 9
PS C:\Users\asus\Desktop\100-days-code\day-14> gcc odd.c -o ./odd.exe
PS C:\Users\asus\Desktop\100-days-code\day-14> ./odd.exe
Enter the value of n 
5
1 3 5 7 9 
Sum of the first 5 odd numbers = 25

*/