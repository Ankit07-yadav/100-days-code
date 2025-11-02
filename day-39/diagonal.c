/*

Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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
        printf("False\n"); // Diagonal only makes sense for square matrices
        return 0;
    }

    int diagonal[100];
    int count = 0;

    // Extract diagonal elements
    for (int i = 0; i < n; i++) {
        diagonal[count++] = matrix[i][i];
    }

    int distinct = 1; // assume all distinct

    // Check for duplicates
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (diagonal[i] == diagonal[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}


/*


Enter number of rows and columns: 3 3
Enter elements of the matrix:
1 2 3
4 5 6
7 8 9
True


*/