/*

Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100], rowSum[100];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print the row sums
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    return 0;
}

/*

PS C:\Users\asus\Desktop\100-days-code\day-37> gcc rowsum.c -o ./rowsum.exe
PS C:\Users\asus\Desktop\100-days-code\day-37> ./rowsum.exe
Enter number of rows and columns: 2 3
Enter elements of the matrix:
1 2 3 4 5 6
6 15 

*/