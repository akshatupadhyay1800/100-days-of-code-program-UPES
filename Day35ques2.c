/*
 * 100 Days of Code - UPES
 * Day 35 | Date: 17-Sep-2026
 *
 * Q70: Rotate an array to the right by k positions.
 *
 * Sample Test Cases:
 * Input 1:
 * 5
 * 1 2 3 4 5
 * 2
 * Output 1:
 * 4 5 1 2 3
 */


#include <stdio.h>

int main(void) {
	int arr[100], n, k, i, j, temp;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	if (n < 1 || n > 100) {
		printf("Enter between 1 and 100 elements.\n");
		return 1;
	}

	printf("Enter %d elements:\n", n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Enter the number of positions to rotate right: ");
	scanf("%d", &k);
	k %= n;

	for (i = 0; i < k; i++) {
		temp = arr[n - 1];
		for (j = n - 1; j > 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}

	printf("Array after rotation: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
