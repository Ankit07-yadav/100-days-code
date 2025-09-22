/*

Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>
int main()
{
    int a[100];
    int n,positive=0,negative=0,zero=0;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
       if(a[i]==0)
       {
           zero++;
       }
       else if(a[i]<0)
       {
           negative++;
       }
       else
       {
           positive++;
       }
    }
    printf("POSITIVE = %d \n",positive);
    printf("NEGATIVE = %d \n",negative);
    printf("ZEROS = %d",zero);
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-30> gcc positive.c -o ./positive.exe
PS C:\Users\asus\Desktop\100-days-code\day-30> ./positive.exe
Enter a limit 
5
-1
0
1
2
-2
POSITIVE = 2 
NEGATIVE = 2
ZEROS = 1

*/