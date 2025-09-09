/*

Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>
int main() {
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    lcm = (a > b) ? a : b;
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM of %d and %d = %d\n", a, b, lcm);
            break;
        }
        ++lcm;
    }
    return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-19> gcc lcm.c -o ./lcm.exe
PS C:\Users\asus\Desktop\100-days-code\day-19> ./lcm.exe
Enter two numbers: 4 5
LCM of 4 and 5 = 20
PS C:\Users\asus\Desktop\100-days-code\day-19> gcc lcm.c -o ./lcm.exe
PS C:\Users\asus\Desktop\100-days-code\day-19> ./lcm.exe
Enter two numbers: 7 3
LCM of 7 and 3 = 21

*/