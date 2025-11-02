/**
 * 
 * Q79: Perform diagonal traversal of a matrix.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

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

    // Diagonal traversal (top-left to bottom-right direction)
    for (int k = 0; k < n + m - 1; k++) {
        int row, col;

        if (k < m) {
            row = 0;
            col = k;
        } else {
            row = k - m + 1;
            col = m - 1;
        }

        while (row < n && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++;
            col--;
        }
    }

    printf("\n");
    return 0;
}

/*

Enter number of rows and columns: 3 3
Enter elements of the matrix:
1 2 3
4 5 6
7 8 9
1 2 4 3 5 7 6 8 9 

*/