/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include<stdio.h>
int main()
{
    int len,bre;
    printf("Enter length and breadth of the rectangle \n");
    scanf("%d %d",&len,&bre);
    int Area=len*bre;
    int Perimeter=2*(len+bre);
    printf("Area=%d,",Area);
    printf("Perimeter=%d",Perimeter);
}

/* 
 OUTPUT
 
 PS C:\Users\asus\Desktop\100-days-code\day-2> gcc rectangle.c -o ./rectangle.exe
PS C:\Users\asus\Desktop\100-days-code\day-2> ./rectangle.exe
Enter length and breadth of the rectangle 
5 10
Area=50,Perimeter=30
PS C:\Users\asus\Desktop\100-days-code\day-2> gcc rectangle.c
PS C:\Users\asus\Desktop\100-days-code\day-2> ./rectangle.exe
Enter length and breadth of the rectangle 
3 7
Area=21,Perimeter=20
*/