/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/


#include<stdio.h>
int main()
{
    int a,b,c;
    char op;
    printf("Enter two numberrs \n");
    scanf("%d %d",&a,&b);
    printf("Enter the operator \n");
    scanf(" %c",&op);
    switch (op)
    {
    case '+' :
        {
            c=a+b;
            printf("%d",c);        
            break;
        }
    
    case '-' :
        {
            c=a-b;
            printf("%d",c);
            break;
        }
    
    case '*' :
        {
            c=a*b;
            printf("%d",c);
            break;
        }

    case '/' :
        {
            if(b!=0)\
            {
            c=a/b;
            printf("%d",c);
            }
            else
            printf("Division by zero not allowed");
            break;
        }

    case '%' :
        {
            if(b!=0)
            {
            c=a%b;
            printf("%d",c);
            }
            else
            printf("MOD by zero is not allowed");
            break;
        }
    
    default:
    printf("WRONG INPUT");
        break;
    }
    return 0;
}


/*
OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-13> gcc calculator.c -o ./calculator.exe
PS C:\Users\asus\Desktop\100-days-code\day-13> ./calculator.exe
Enter two numberrs 
4 2
Enter the operator 
+
6
PS C:\Users\asus\Desktop\100-days-code\day-13> gcc calculator.c -o ./calculator.exe
PS C:\Users\asus\Desktop\100-days-code\day-13> ./calculator.exe
Enter two numberrs 
10 3
Enter the operator 
%
1
PS C:\Users\asus\Desktop\100-days-code\day-13> gcc calculator.c -o ./calculator.exe
PS C:\Users\asus\Desktop\100-days-code\day-13> ./calculator.exe
Enter two numberrs 
15 5
Enter the operator 
/
3
*/