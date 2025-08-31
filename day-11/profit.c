/*

Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/


#include <stdio.h>

int main()
{
    float cp, sp, profit, loss;
    printf("Enter the cost price and selling price:\n");
    scanf("%f %f", &cp, &sp);

    if (sp > cp)
    {
        profit = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%", profit);
    }
    else if (sp < cp)
    {
        loss = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%", loss);
    }
    else
    {
        printf("No profit, no loss");
    }

    return 0;
}

/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-11> gcc profit.c -o ./profit.exe
PS C:\Users\asus\Desktop\100-days-code\day-11> ./profit.exe
Enter the cost price and selling price:
1000 1200
Profit = 20.00%
PS C:\Users\asus\Desktop\100-days-code\day-11> gcc profit.c                
PS C:\Users\asus\Desktop\100-days-code\day-11> ./profit.exe
Enter the cost price and selling price:
1000 800
Loss = 20.00%
PS C:\Users\asus\Desktop\100-days-code\day-11> gcc profit.c 
PS C:\Users\asus\Desktop\100-days-code\day-11> ./profit.exe 
Enter the cost price and selling price:
1000 1000
No profit, no loss
*/