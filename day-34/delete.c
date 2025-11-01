/*

Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main() {
    int n, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // Shift elements to left from the position
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease size after deletion

    // Print updated array
    printf("Updated array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}


/*

Enter size of array: 5
Enter 5 elements:
1 2 3 4 5
Enter position to delete: 2
Updated array:
1 2 4 5

*/

