/*

Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0, i = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}


/*

PS C:\Users\asus\Desktop\100-days-code\day-45> gcc freq.c -o ./freq.exe
PS C:\Users\asus\Desktop\100-days-code\day-45>  ./freq.exe             
Enter a string: programming
Enter a character to find its frequency: g'
2

*/