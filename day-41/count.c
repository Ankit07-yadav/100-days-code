/*

Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);  // using gets() for simplicity (works for spaces too)

    // Count characters until null character '\0' is found
    while (str[count] != '\0') {
        count++;
    }

    printf("%d\n", count);

    return 0;
}


/*

Enter a string: hello
5

*/