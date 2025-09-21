/*
Q48: Write a program to print the following pattern:
1
12
123
1234
12345

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-24> gcc pattern-2.c -o ./pattern-2.exe
PS C:\Users\asus\Desktop\100-days-code\day-24> ./pattern-2.exe
Enter the number of rows5
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/