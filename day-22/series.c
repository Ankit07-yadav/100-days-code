/*

Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include<stdio.h>
int main()
{
    float sum=0.0;
    int n;
    printf("Enter a limit \n");
    scanf("%d",&n);
    int i=3,j=4;
    for(int k=1; k<n ; i=i+2, j=j+2, k++)
    {   
        sum=sum+(1+(float)i/j);
    }
    printf("Approximate sum: %.1f",sum);
}

/*

OUTPUT 

PS C:\Users\asus\Desktop\100-days-code\day-22> gcc series.c -o ./series.exe
PS C:\Users\asus\Desktop\100-days-code\day-22> ./series.exe
Enter a limit 
3
Approximate sum: 3.6

*/