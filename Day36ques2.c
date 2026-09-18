/*
 * 100 Days of Code - UPES
 * Day 36 | Date: 18-Sep-2026
 *
 * Q72: Find the sum of all elements in a matrix.
 *
 * Sample Test Cases:
 * Input 1:
 * 2 3
 * 1 2 3
 * 4 5 6
 * Output 1:
 * 21
 */


#include <stdio.h>
int main(void) {
	int rows, columns;
	int sum = 0;

	printf("Enter the number of rows and columns: ");
	if (scanf("%d %d", &rows, &columns) != 2 ||
		rows < 1 || rows > 100 || columns < 1 || columns > 100) {
		printf("Enter row and column counts between 1 and 100.\n");
		return 1;
	}

	printf("Enter the matrix elements:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			int element;

			if (scanf("%d", &element) != 1) {
				printf("Invalid matrix element.\n");
				return 1;
			}
			sum += element;
		}
	}

	printf("The sum of all matrix elements is: %d\n", sum);
	return 0;
}
