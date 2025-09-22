/*

Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/

#include<stdio.h>
int main()
{
    int a[100];
    int n;
    printf("Enter a limit \n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);;
    }
}


/*


OUTPUT


PS C:\Users\asus\Desktop\100-days-code\day-28> gcc array.c -o ./array.exe 
c:/mingw/bin/../lib/gcc/mingw32/6.3.0/../../../libmingw32.a(main.o):(.text.startup+0xa0): undefined reference to `WinMain@16'
collect2.exe: error: ld returned 1 exit status
PS C:\Users\asus\Desktop\100-days-code\day-28> gcc array.c -o ./array.exe
PS C:\Users\asus\Desktop\100-days-code\day-28> ./array.exe
Enter a limit 
3
10
20
30
10 20 30 
PS C:\Users\asus\Desktop\100-days-code\day-28> gcc array.c -o ./array.exe
PS C:\Users\asus\Desktop\100-days-code\day-28> ./array.exe
Enter a limit 
5
1
2
3
4
5
1 2 3 4 5 


*/
