/*

Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, flag = 0;

    printf("Enter a string: ");
    gets(str);

    // Find length of string
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1; // Not palindrome
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}


/*

PS C:\Users\asus\Desktop\100-days-code\day-43> gcc pallindrome.c -o ./pallindrome.exe
PS C:\Users\asus\Desktop\100-days-code\day-43>  ./pallindrome.exe                    
Enter a string: madam   
Palindrome
*/