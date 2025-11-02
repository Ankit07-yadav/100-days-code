/*

Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

int main() {
    int n, m;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[100][100];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (n != m) {
        printf("False\n");  // Symmetric only possible for square matrices
        return 0;
    }

    int isSymmetric = 1; // assume true

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

/*
Enter number of rows and columns: 2 2
Enter elements of the matrix:
1 2 2 1
True

*/