/*

Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/

#include <stdio.h>

int main() {
    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    int low = 0, high = n - 1, result = -1;
    
    // Binary search for ceil
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] >= x) {
            result = mid;     // potential ceil found
            high = mid - 1;   // look for smaller or equal ceil on the left
        } else {
            low = mid + 1;    // move right
        }
    }
    
    printf("%d\n", result);
    return 0;
}


/*

PS C:\Users\asus\Desktop\100-days-code\day-52> ./ceil.exe
Enter the size of the array: 7
Enter 7 sorted elements: 1 2 8 10 11 12 19
Enter x: 5
2

*/