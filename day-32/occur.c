/*

Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>
int main()
{
    int n,d=0,i=0,c=0,freq,max=0,num;
    printf("Enter value: ");
    scanf("%d",&n);
    int arr[100];

    while(n>0)
    {
       d=n%10;
       arr[i]=d;
       n=n/10;
       i++;
       c++;
    }

    for(int j=0;j<c;j++)
    {
        freq=0;
        for(int k=0;k<c;k++)
        {
            if(arr[j]==arr[k])
            {
               freq++;
            }
        }
        if(freq>max)
        {
            num=arr[j];
            max=freq;
        }
    }
    printf("The digit that occurs the most %d ",num);
    return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-32> gcc occur.c -o ./occur.exe
PS C:\Users\asus\Desktop\100-days-code\day-32> ./occur.exe               
Enter value: 111223
The digit that occurs the most 1 

*/