/*
 * 100 Days of Code - UPES
 * Day 38 | Date: 20-Sep-2026
 *
 * Q76: Check if a matrix is symmetric.
 *
 * Sample Test Cases:
 * Input 1:
 * 2 2
 * 1 2
 * 2 1
 * Output 1:
 * True
 * Input 2:
 * 2 2
 * 1 0
 * 2 1
 * Output 2:
 * False
 */


#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];
    int isSymmetric = 1; 
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("The matrix is NOT symmetric (it must be a square matrix).\n");
        return 0;
    }
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; 
                break;           
        }
        if (!isSymmetric) {
            break; 
        }
    }
    if (isSymmetric) {
        printf("\nResult: The matrix is a Symmetric Matrix.\n");
    } else {
        printf("\nResult: The matrix is NOT a Symmetric Matrix.\n");
    }
    }
    return 0;
}
