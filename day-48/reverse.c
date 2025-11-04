/*

Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int len;
    char *wordStart = NULL;
    int i;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);

    for (i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (wordStart == NULL)
                wordStart = &str[i];
        } else {
            if (wordStart != NULL) {
                reverseWord(wordStart, &str[i - 1]);
                wordStart = NULL;
            }
        }
    }

    printf("%s\n", str);
    return 0;
}



/*

PS C:\Users\asus\Desktop\100-days-code\day-48> ./reverse.exe
Enter a sentence:
i love coding
i evol gnidoc

*/