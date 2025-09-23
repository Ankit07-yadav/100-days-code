/*


Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

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
    
    printf("Enter a number to be searched \n");
    scanf("%d",&num);
    
    for(int i=0; i<n; i++)
    {
        if(num==a[i])
        {
            found++;
            printf("Number %d is found at the index %d",num,i);
        }
    }
    if(found==0)
    {
        printf("-1");
    }
}


/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-31> gcc search.c -o ./search.exe
PS C:\Users\asus\Desktop\100-days-code\day-31> ./search.exe
Enter a limit 
5
1
2
3
44
55
Enter a number to be searched 
3
Number 3 is found at the index 2
PS C:\Users\asus\Desktop\100-days-code\day-31> gcc search.c -o ./search.exe
PS C:\Users\asus\Desktop\100-days-code\day-31> ./search.exe
Enter a limit
4
10
20
30
40
Enter a number to be searched
25
-1

*/