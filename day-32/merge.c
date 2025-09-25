/*

Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int merged[n1 + n2];
    for (int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) 
    {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}


/*

OUTPUT

PS C:\Users\asus\Desktop\100-days-code\day-32> gcc merge.c -o ./merge.exe
PS C:\Users\asus\Desktop\100-days-code\day-32> ./merge.exe
Enter size of first array: 3
Enter elements of first array:
1
2
3
Enter size of second array: 2
Enter elements of second array:
4
5
Merged array: 1 2 3 4 5 

*/