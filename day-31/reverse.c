/*

Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/


#include<stdio.h>
int main()
{
    int a[100];
    int n;
    int num,found=0;
    printf("Enter a limit \n");
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The normal array \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("The reverse array \n");
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
}
 

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-31> gcc reverse.c -o ./reverse.exe
PS C:\Users\asus\Desktop\100-days-code\day-31> ./reverse.exe
Enter a limit 
4
1
2
3
4
The normal array 
1 2 3 4
The reverse array
4 3 2 1

*/