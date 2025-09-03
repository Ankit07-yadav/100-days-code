/*

Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include<stdio.h>
int main()
{
    int unit, bill;
    printf("Enter the unit used \n");
    scanf("%d",&unit);
    if(unit<=100)
    {
        bill=unit*5;
    }
    else if(unit>100 && unit<=200)
    {
        bill=(100*5)+((unit-100)*7);
    }
    else if(unit>200 && unit<=300)
    {
        bill=(100*5)+(100*7)+((unit-200)*10);
    }
    else
    {
        bill=(100*5)+(100*7)+(100*10)+((unit-300)*12);
    }
    printf("BILL : %d",bill);
    return 0;
}

/*

OUTPUT

Enter the unit used 
50
BILL : 250
PS C:\Users\asus\Desktop\100-days-code\day-12> gcc electricity.c -o ./electricity.exe
PS C:\Users\asus\Desktop\100-days-code\day-12> ./electricity.exe
Enter the unit used 
150
BILL : 850
PS C:\Users\asus\Desktop\100-days-code\day-12> gcc electricity.c -o ./electricity.exe
PS C:\Users\asus\Desktop\100-days-code\day-12> ./electricity.exe
Enter the unit used 
250
BILL : 1700

*/