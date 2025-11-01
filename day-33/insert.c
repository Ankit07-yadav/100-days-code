/*

Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int n, element;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];  // extra space to insert new element
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    int i = n - 1;
    // Shift elements to make space for new element
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the element at correct position
    arr[i + 1] = element;
    n++;

    // Print the updated array
    printf("Updated array:\n");
    for (int j = 0; j < n; j++)
        printf("%d ", arr[j]);
    printf("\n");

    return 0;
}


/*

PS C:\Users\asus\Desktop\100-days-code\day-33> gcc insert.c -o ./insert.exe
PS C:\Users\asus\Desktop\100-days-code\day-33>  ./insert.exe               
Enter size of array: 5
Enter 5 sorted elements:
1 2 4 5 6
Enter element to insert: 3
Updated array:
1 2 3 4 5 6

*/