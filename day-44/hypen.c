/*

Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';  // Replace space with hyphen
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}

/*

PS C:\Users\asus\Desktop\100-days-code\day-44> gcc hypen.c -o ./hypen.exe
PS C:\Users\asus\Desktop\100-days-code\day-44> ./hypen.exe               
Enter a string: hello world
hello-world

*/