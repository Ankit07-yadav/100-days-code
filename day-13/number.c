/*
Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the valuve in n \n");
    scanf(" %d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("%d ",i);
    }
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-13> gcc number.c -o ./number.exe
PS C:\Users\asus\Desktop\100-days-code\day-13> ./number.exe
Enter the valuve in n 
5
1 2 3 4 5 
PS C:\Users\asus\Desktop\100-days-code\day-13> gcc number.c -o ./number.exe
PS C:\Users\asus\Desktop\100-days-code\day-13> ./number.exe
Enter the valuve in n 
3
1 2 3 
*/