/*

Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include<stdio.h>
int main()
{
    int n,pro=1;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            pro=pro*i;
            printf("%d ",i);
        }
    }
    printf("Product of the even numbers is = %d",pro);

    return 0;
}

/*

OUTPUT
PS C:\Users\asus\Desktop\100-days-code\day-14> gcc even.c -o ./even.exe
PS C:\Users\asus\Desktop\100-days-code\day-14> ./even.exe
Enter the value of n4
2 4 Product of the even numbers is = 8
PS C:\Users\asus\Desktop\100-days-code\day-14> gcc even.c -o ./even.exe
PS C:\Users\asus\Desktop\100-days-code\day-14> ./even.exe
Enter the value of n6
2 4 6 Product of the even numbers is = 48
*/