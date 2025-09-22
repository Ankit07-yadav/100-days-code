/*

Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/



#include<stdio.h>
int main()
{
    int n,ctr;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {   ctr=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                ctr++;
            }
        }
        if(ctr==2)
            {
                printf("%d ",i);
            }
    }
    return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-28> gcc prime.c -o ./prime.exe
PS C:\Users\asus\Desktop\100-days-code\day-28> ./prime.exe
Enter a limit 
10
2 3 5 7 
PS C:\Users\asus\Desktop\100-days-code\day-28> gcc prime.c -o ./prime.exe
PS C:\Users\asus\Desktop\100-days-code\day-28> ./prime.exe
Enter a limit 
20
2 3 5 7 11 13 17 19 

*/