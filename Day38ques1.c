/*
 * 100 Days of Code - UPES
 * Day 38 | Date: 20-Sep-2026
 *
 * Q75: Add two matrices.
 *
 * Sample Test Cases:
 * Input 1:
 * 2 2
 * 1 2
 * 3 4
 * 2 2
 * 5 6
 * 7 8
 * Output 1:
 * 6 8
 * 10 12
 */


#include <stdio.h>
int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrixA[rows][cols];
    int matrixB[rows][cols];
    int result[rows][cols];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    printf("Sum of the two matrices is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
