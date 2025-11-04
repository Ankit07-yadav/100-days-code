/*

Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char words[10][20];
    int i, j = 0, k = 0, count = 0;

    printf("Enter full name:\n");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    // Split the name into words
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ') {
            words[j][k++] = name[i];
        } else {
            words[j][k] = '\0';
            j++;
            k = 0;
        }
    }
    words[j][k] = '\0';
    count = j + 1;

    // Print initials for all but the last word
    for (i = 0; i < count - 1; i++) {
        if (isalpha(words[i][0]))
            printf("%c.", toupper(words[i][0]));
    }

    // Print the last word (surname) in full
    printf("%s\n", words[count - 1]);

    return 0;
}


/*

PS C:\Users\asus\Desktop\100-days-code\day-49> ./surname.exe                 
Enter full name:
Ankit Yadav
A.Yadav

*/