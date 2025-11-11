/*

Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/


#include <stdio.h>

int main() {
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);
    int nums1[m];
    printf("Enter %d elements (sorted): ", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int nums2[n];
    printf("Enter %d elements (sorted): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge process (like in merge sort)
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    // Copy remaining elements (if any)
    while (i < m)
        merged[k++] = nums1[i++];
    while (j < n)
        merged[k++] = nums2[j++];

    printf("Merged sorted array: ");
    for (int x = 0; x < m + n; x++)
        printf("%d ", merged[x]);
    printf("\n");

    return 0;
}

/*

PS C:\Users\asus\Desktop\100-days-code\day-67> ./mergesort.exe
Enter size of first array: 4
Enter 4 elements (sorted): 2 7 11 15
Enter size of second array: 3
Enter 3 elements (sorted): 4 8 10
Merged sorted array: 2 4 7 8 10 11 15 

*/