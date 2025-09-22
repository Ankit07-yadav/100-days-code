/*

Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include<stdio.h>
int main()
{
    int a[100];
    int n,sum=0;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("SUM = %d",sum);
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-29> gcc sum.c -o ./sum.exe
PS C:\Users\asus\Desktop\100-days-code\day-29> ./sum.exe
Enter a limit 
4
2
4
6
8
SUM = 20
PS C:\Users\asus\Desktop\100-days-code\day-29> gcc sum.c -o ./sum.exe
PS C:\Users\asus\Desktop\100-days-code\day-29> ./sum.exe
Enter a limit 
3
1
1
1
SUM = 3

*/