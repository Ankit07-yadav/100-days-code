/*

Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/


#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        char ch = str[i];
        // Check if the character is NOT a vowel
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j] = ch; // copy non-vowel
            j++;
        }
        i++;
    }
    result[j] = '\0'; // Null-terminate the new string

    printf("%s\n", result);

    return 0;
}

/*

PS C:\Users\asus\Desktop\100-days-code\day-46> gcc vowels.c -o ./vowels.exe
PS C:\Users\asus\Desktop\100-days-code\day-46>  ./vowels.exe               
Enter a string: education
dctn

*/