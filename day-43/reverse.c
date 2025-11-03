/*

Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    gets(str);

    // Find length of string manually
    while (str[length] != '\0') {
        length++;
    }

    printf("Reversed string: ");
    // Print characters in reverse order
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}


/*

S C:\Users\asus\Desktop\100-days-code\day-43> gcc reverse.c -o ./reverse.exe
PS C:\Users\asus\Desktop\100-days-code\day-43> ./reverse.exe
Enter a string: abcd
Reversed string: dcba

*/