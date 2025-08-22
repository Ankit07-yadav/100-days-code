/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.


Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include<stdio.h>
int main()
{
    int r;
    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
    float Area=3.14*r*r;;
    float Circumference=2*3.14*r;
    printf("Area=%f,",Area);
    printf("circumference=%f",Circumference);
}

/*
OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-2> gcc circle.c -o ./circle.exe
PS C:\Users\asus\Desktop\100-days-code\day-2> ./circle.exe
Enter the radius of the circle
7
Area=153.860001,circumference=43.959999
PS C:\Users\asus\Desktop\100-days-code\day-2> gcc circle.c
PS C:\Users\asus\Desktop\100-days-code\day-2> ./circle.exe
Enter the radius of the circle
3
Area=28.260000,circumference=18.840000
*/