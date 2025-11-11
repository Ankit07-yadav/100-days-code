/*

Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

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

    // The array should contain numbers from 0 to n, but one is missing
    int totalSum = n * (n + 1) / 2;  // Expected sum of 0 to n
    int arrSum = 0;

    for (int i = 0; i < n; i++)
        arrSum += arr[i];

    int missing = totalSum - arrSum;

    printf("%d\n", missing);
    return 0;
}

/*

PS C:\Users\asus\Desktop\100-days-code\day-68> ./missing.exe
Enter size of array: 4
Enter 4 elements: 0 2 3 4 
1

*/