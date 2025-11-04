/*

Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;
    int first = 1;  // to control comma placement

    printf("Enter a string:\n");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            // Print substring from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            // Print comma after each substring except the last one
            if (!(i == len - 1 && j == len - 1))
                printf(",");
        }
    }

    printf("\n");
    return 0;
}


/*

PS C:\Users\asus\Desktop\100-days-code\day-50> ./substring.exe                   
Enter a string:
abc
a,ab,abc,b,bc,c


*/