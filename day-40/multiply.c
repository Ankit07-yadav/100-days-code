/*

Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    int a[100][100];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    int b[100][100];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int result[100][100];

    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the result
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*

Enter rows and columns of first matrix: 2  2
Enter elements of first matrix:
1 5 
6 4
Enter rows and columns of second matrix: 2 2
Enter elements of second matrix:
4 5 
 4 5
24 30 
40 50

*/