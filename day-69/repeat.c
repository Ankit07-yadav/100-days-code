/*

Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/


#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int xorAll = 0, xorArr = 0;

    // XOR of numbers from 1 to n-1 (since one number is repeated)
    for (int i = 0; i < n - 1; i++)
        xorAll ^= i;

    // XOR of all array elements
    for (int i = 0; i < n; i++)
        xorArr ^= arr[i];

    int repeated = xorAll ^ xorArr;

    printf("%d\n", repeated);
    return 0;
}

/*

Enter size of array: 4
Enter 4 elements: 1 3 3 4
6*/

