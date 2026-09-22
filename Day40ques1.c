/*
 * 100 Days of Code - UPES
 * Day 40 | Date: 22-Sep-2026
 *
 * Q79: Perform diagonal traversal of a matrix.
 *
 * Sample Test Cases:
 * Input 1:
 * 3 3
 * 1 2 3
 * 4 5 6
 * 7 8 9
 * Output 1:
 * 1 2 4 7 5 3 6 8 9
 */


#include <stdio.h>
int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal: ");

    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            int r = (d < rows) ? d : rows - 1;
            int c = (d < rows) ? 0 : d - rows + 1;

            while (r >= 0 && c < cols) {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        } else {
            int r = (d < cols) ? 0 : d - cols + 1;
            int c = (d < cols) ? d : cols - 1;

            while (r < rows && c >= 0) {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }

    printf("\n");
    return 0;
}
