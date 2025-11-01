/*

Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[100][100];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // add each element to sum
        }
    }

    printf("%d\n", sum);

    return 0;
}


/*

PS C:\Users\asus\Desktop\100-days-code\day-36> gcc matrixsum.c -o ./matrixsum.exe
PS C:\Users\asus\Desktop\100-days-code\day-36>  ./matrixsum.exe                  
Enter number of rows and columns: 2 3
Enter elements of the matrix:
1 2 3 4 5 6
21

*/