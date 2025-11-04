/*

Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("%s\n", longest);
    return 0;
}

/*

PS C:\Users\asus\Desktop\100-days-code\day-47> ./longest.exe                 
Enter a sentence:
i love programming
programming

*/