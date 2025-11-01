/*

Q69: Find the second largest element in an array.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0];
    int second_largest = -1; // assuming all positive; can also use smaller value or INT_MIN

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    printf("%d\n", second_largest);

    return 0;
}


/*

Enter size of array: 5
Enter 5 elements:
10 20 30 40 50
40

*/