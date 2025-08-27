/*
Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include<stdio.h>
int main()
{
    char alp;
    printf("Enter a alphabet \n");
    scanf("%c",&alp);
    if(alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u')
    {
        printf("Vowel");
    }
    else
    printf("Consonant");
}


/*
OUTPUT
PS C:\Users\asus\Desktop\100-days-code\day-7> gcc vowel.c -o ./vowel.exe
PS C:\Users\asus\Desktop\100-days-code\day-7> ./vowel.exe
Enter a alphabet 
a
Vowel
PS C:\Users\asus\Desktop\100-days-code\day-7> gcc vowel.c               
PS C:\Users\asus\Desktop\100-days-code\day-7> ./vowel.exe
Enter a alphabet 
b
Consonant
*/