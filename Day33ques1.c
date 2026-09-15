/*
 * 100 Days of Code - UPES
 * Day 33 | Date: 15-Sep-2026
 *
 * Q65: Search in a sorted array using binary search.
 *
 * Sample Test Cases:
 * Input 1:
 * 5
 * 1 3 5 7 9
 * 7
 * Output 1:
 * Found at index 3
 * Input 2:
 * 5
 * 1 3 5 7 9
 * 6
 * Output 2:
 * -1
 */


#include <stdio.h>

int main(void)
{
	int numbers[100];
	int size;
	int target;
	int start = 0;
	int end;
	int middle;
	int found = 0;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	printf("Enter %d sorted elements: ", size);
	for (int index = 0; index < size; index++) {
		scanf("%d", &numbers[index]);
	}

	printf("Enter the element to search for: ");
	scanf("%d", &target);

	end = size - 1;
	while (start <= end) {
		middle = (start + end) / 2;

		if (numbers[middle] == target) {
			found = 1;
			printf("Element found at index %d.\n", middle);
			break;
		}

		if (numbers[middle] < target) {
			start = middle + 1;
		} else {
			end = middle - 1;
		}
	}

	if (!found) {
		printf("Element not found.\n");
	}

	return 0;
}
