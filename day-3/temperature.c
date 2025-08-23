/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<stdio.h>
int main()
{
    int celcius,fahernheit;
    printf("Enter temperature in celcius \n");
    scanf("%d",&celcius);
    fahernheit=((9/5)*celcius)+32;
    printf("Faherheit=%d",fahernheit);
}

/*OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-3> gcc temperature.c -o ./temperature.exe
PS C:\Users\asus\Desktop\100-days-code\day-3> ./temperature.exe
Enter temperature in celcius 
0
Faherheit=32

*/