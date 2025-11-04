/*


Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    printf("Enter full name:\n");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    name[strcspn(name, "\n")] = '\0';

    // Print first character as initial (if it's a letter)
    if (isalpha(name[0]))
        printf("%c.", toupper(name[0]));

    // Loop through the string to find spaces
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c.", toupper(name[i + 1]));
        }
    }

    printf("\n");
    return 0;
}

/*

PS C:\Users\asus\Desktop\100-days-code\day-49> ./intials.exe                 
Enter full name:
ankit yadav
A.Y.

*/