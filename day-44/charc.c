/*

Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else if (!((str[i] >= 'a' && str[i] <= 'z') || 
                   (str[i] >= 'A' && str[i] <= 'Z'))) {
            special++;
        }
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}


/*

PS C:\Users\asus\Desktop\100-days-code\day-44> gcc charc.c -o ./charc.exe 
PS C:\Users\asus\Desktop\100-days-code\day-44> ./charc.exe               
Enter a string: a b1&2
Spaces=1, Digits=2, Special=1

*/