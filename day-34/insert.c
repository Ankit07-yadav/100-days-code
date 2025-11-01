/*

Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/


#include <stdio.h>

int main() {
    int n, pos, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];  // extra space for insertion
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &element);

    // Shift elements to the right from the given position
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = element;
    n++;

    // Print the updated array
    printf("Updated array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}


/*

Enter size of array: 6
Enter 6 elements:
10 20 33 40 50 60
Enter position and element to insert: 1
15
Updated array:
10 15 20 33 40 50 60 

*/