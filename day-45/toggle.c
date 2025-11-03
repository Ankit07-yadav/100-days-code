/*

Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert lowercase → uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert uppercase → lowercase
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}


/*

PS C:\Users\asus\Desktop\100-days-code\day-45> gcc toggle.c -o ./toggle.exe
PS C:\Users\asus\Desktop\100-days-code\day-45> ./toggle.exe
Enter a string: Hello
hELLO

*/