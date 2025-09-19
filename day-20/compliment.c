/*

Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main()
{
    char bnum[100];
    printf("Enter a binary number: ");
    scanf("%s", bnum);   // read input as string

    printf("1's Complement: ");
    for (int i = 0; bnum[i] != '\0'; i++)
    {
        if (bnum[i] == '0')
            printf("1");
        else if (bnum[i] == '1')
            printf("0");
        else
        {
            printf("\nInvalid input!\n");
            return 0;
        }
    }
    printf("\n");

    return 0;
}
