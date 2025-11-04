/*

Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string:\n");
    scanf("%s", str1);
    printf("Enter second string:\n");
    scanf("%s", str2);

    // Step 1: Check if lengths are equal
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }

    // Step 2: Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Step 3: Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}


/*

PS C:\Users\asus\Desktop\100-days-code\day-48> ./rataion.exe                  
Enter first string:
abcde
Enter second string:
deabc
Rotation

*/