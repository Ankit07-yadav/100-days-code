/*

Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/


#include<stdio.h>
int main()
{
    int a[100];
    int n,max,min;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("MAXIMUM = %d \n",max);
    printf("MINIMUM = %d",min);
}

/*

OUTPUT


PS C:\Users\asus\Desktop\100-days-code\day-29> gcc element.c -o ./element.exe
PS C:\Users\asus\Desktop\100-days-code\day-29> ./element.exe
Enter a limit 
5
2
9
4
1
7
MAXIMUM = 9 
MINIMUM = 1
PS C:\Users\asus\Desktop\100-days-code\day-29> gcc element.c -o ./element.exe
PS C:\Users\asus\Desktop\100-days-code\day-29> ./element.exe
Enter a limit 
3
10
10
10
MAXIMUM = 10 
MINIMUM = 10

*/