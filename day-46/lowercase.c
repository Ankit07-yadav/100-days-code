/*

Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}; // to store frequency of each lowercase letter
    int i = 0, found = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++; // increase count

            // If count becomes 2, it's the first repeating
            if (freq[str[i] - 'a'] == 2) {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }
        }
        i++;
    }

    if (!found)
        printf("-1\n"); // If no repeating character found

    return 0;
}

