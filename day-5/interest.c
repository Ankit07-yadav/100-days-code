/*

Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci=0.0;          // p=principal ammount , r=rate, t=time , si=simple interest , ci= compound interest
    printf("Enter principal ammount, rate and time \n");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;                 // calculate simple interest
    ci=p*pow(1+(r/100),t)-p;        // calculate compund interest
    printf("Simple Interest=%.1f, ",si);
    printf("Compound Interest=%.1f",ci);    
}

/*
OUTPUT

PS C:\Users\asus\Desktop\100-days-code> cd day-5
PS C:\Users\asus\Desktop\100-days-code\day-5> gcc interest.c -o ./interest.exe
PS C:\Users\asus\Desktop\100-days-code\day-5> ./interest.exe
Enter principal ammount, rate and time 
1000 5 2
Simple Interest=100.0, Compound Interest=102.5
PS C:\Users\asus\Desktop\100-days-code\day-5> gcc interest.c                  
PS C:\Users\asus\Desktop\100-days-code\day-5> ./interest.exe 
Enter principal ammount, rate and time 
5000 7 3
Simple Interest=1050.0, Compound Interest=1125.2
*/